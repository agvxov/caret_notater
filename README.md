# Caret Notater
> Header only C library for converting to caret notation

### What is caret notation
You may recognize it like this: `^H`.
It is commonly used on the command line, an example would be Bash's Readline input.
For details consult other sources: [wiki](https://en.wikipedia.org/wiki/Caret_notation).

### API
```C
static inline int  is_caretable(const char c);
static inline char to_caret_char(const char c);
// NOTE: these functions return their `output` argument
char * char_to_caret_notation(const char c, char output[3]);
char * string_to_caret_notation(const char * const input, const unsigned long size, char * const output);
#if CARET_NOTATER_ALLOC == 1
static inline char * alloc_char_to_caret_notation(const char c);
static inline char * alloc_string_to_caret_notation(const char * const input, const unsigned long size);
```

### NOTES
`*string_to_caret_notation()` takes a (-n input) size explicitly because
you may want to convert null characters as `'\0'` is `"^@"` in caret notation.
If you dont care, you are advised to just pass a `strlen()` call.
