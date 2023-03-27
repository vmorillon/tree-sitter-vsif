const newline = /\r?\n/;

module.exports = grammar({
  name: 'vsif',

  extras: $ => [$.comment, /[ \t]/],

  rules: {
    document: $ =>
      seq(
        repeat(newline),
      ),

    comment: $ =>
      token(seq(
        choice("//", "--"),
        /[a-zA-Z0-9 _-]+/,
      )),
  }
});
