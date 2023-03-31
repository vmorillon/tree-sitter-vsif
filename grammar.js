const newline = /\r?\n/;

module.exports = grammar({
  name: 'vsif',

  extras: $ => [$.comment, /[\s\t]/],

  rules: {
    document: $ =>
      repeat(
        choice($.named_scope, $.pair, newline)
      ),

    comment: $ =>
      token(seq(
        choice("//", "--"),
        /[^\n]*/,
      )),

    named_scope: $ =>
      seq(
        field("type", $._bare_string),
        field("name", $._bare_string),
        '{',
        repeat(
          choice(
            $.named_scope,
            $.pair,
            newline
          )
        ),
        '}',
        ';',
      ),

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
      seq("<text>", repeat(/[^<]/), '</text>'),
  }
});
