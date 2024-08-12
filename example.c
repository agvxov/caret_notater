// @BAKE gcc $@ -o $*.out; ./$*.out
#include <stdio.h>
#include "caret_notater.h"

signed main() {
    char input[] = "null: \00; \\07: \07; esc: \033; del: \x7f";
    puts(alloc_string_to_caret_notation(input, sizeof(input)-1));
    return 0;
}
