grammar Catty;

tokens {begin , end, if, then, while}

INT : ([0-9]+ | ^0x(([0-9]|[A-F]|[a-f])+) | ^0([0-7]+) | ^0b([01]+)
