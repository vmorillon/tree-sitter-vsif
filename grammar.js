const newline = /\r?\n/;

module.exports = grammar({
  name: 'vsif',

  extras: $ => [$.comment, /[\s\t]/],

  rules: {
    document: $ =>
      repeat(
        choice($.macro, $.named_scope, $.pair, newline)
      ),

    comment: $ =>
      token(seq(
        choice("//", "--"),
        /[^\n]*/,
      )),

    macro: $ =>
      choice($._include_macro, $._if_macro),

    _include_macro: $ =>
      seq(
        "#include",
        field("path", $.path)
      ),
    path: $ => $._quoted_string,

    _if_macro: $ =>
      seq(
        choice("#ifdef", "#ifndef"),
        field("condition", $.condition),
        repeat(
          choice($.macro, $.named_scope, $.pair, newline)
        ),
        optional("#else"),
        repeat(prec.left(-1,
          choice($.macro, $.named_scope, $.pair, newline)
        )),
        "#endif",
      ),
    condition: $ => $._bare_string,

    named_scope: $ =>
      seq(
        field("type", $.type),
        field("name", $.name),
        '{',
        repeat(
          choice(
            $.macro,
            $.named_scope,
            $.pair,
            newline
          )
        ),
        '}',
        ';',
      ),
    type: $ => $._bare_string,
    name: $ => choice($._bare_string, $._quoted_string),

    pair: $ =>
      seq(
        field("key", $.key), ':', field("value", $._value), ';'
      ),

    key: $ => $._bare_string,
    _value: $ =>
      choice(
        $.string,
        $.integer,
      ),

    integer: $ => /[+-]?(0|[1-9](_?[0-9])*)/,

    string: $ =>
      choice(
        $._bare_string,
        $._quoted_string,
        $._tagged_string,
      ),

    _bare_string: $ => /[a-zA-Z0-9_-]+/,

    _quoted_string: $ =>
      seq('"', /[^"\n]*/, '"'),

    _tagged_string: $ =>
      seq($.start_text_tag, repeat(/[^<]/), $.end_text_tag),
    start_text_tag: $ => "<text>",
    end_text_tag: $ => "</text>",
  }
});
