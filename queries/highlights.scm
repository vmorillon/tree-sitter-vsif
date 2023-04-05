; Macros
;-------

(macro) @function.macro
(path) @string
(condition) @constant

; Properties
;-----------

(key) @property

; Literals
;---------

(comment) @comment @spell
(string) @string
(integer) @number
(start_text_tag) @tag
(end_text_tag) @tag

; blocks
;-------

(named_scope type: (type) @type)
(named_scope name: (name) @string)

; Punctuation
;------------

";" @punctuation.delimiter
":" @operator

"{" @punctuation.bracket
"}" @punctuation.bracket
