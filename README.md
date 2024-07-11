

# Catty The Programming Language

The programming language of cats.

# What

Catty is a localisable, cross-platform, compiled programming language designed with computational linguistics in mind. The syntax of Catty is designed in such a way that it can be replaced by using
code written in Catty. The language was heavily influenced by Rust and Awk.

# Why

Developing lexers and parsers is a honorably difficult task. Catty aims to make this process easier by providing a language that can be used to generate lexers and parsers. The language and its standard library, honorably called the Open Computational Linguistics Platform (OCLP), is designed to have anything one could need in a lexing and parsing library, and to be easily localisable and cross-platform.

# But what does it look like?

Didn't I just say... localisable?

Here comes the fact: the language does not have a definite syntax. It only has a base syntax
that you can easily modify using the OCLP. The base syntax was heavily influenced by Rust and Awk, but you can easily change it to be more like Python, or even like C.

```rust
use oclp::lexer::Lexer;
use oclp::prelude::*;
use oclp::re::prelude::*;
use std::prelude::*; // needs to be explicitly specified.

let mut lexer = Lexer::new();
lexer.use_parallel(); // lexes the text concurrently.
lexer.mount(move |tokens| |corpus| {
    if let Some(m) = corpus >~< /[0-9]+/ {
        // ">~<" is the "blushing face" operator. It is used to match a regular expression.
         tokens.push(oclp::tokens::common::Number(m));
         stdio.meowln("Matched a number: {}", m);
    }
});
```