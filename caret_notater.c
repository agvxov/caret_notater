// @BAKE gcc $@ -o caret-notater
#include <stdio.h>
#include "caret_notater.h"

void usage(void) {
    puts("caret-notater : convert the contents of stdin to caret notation");
}

signed main(const int argc, const char * const argv[]) {
    if (argc != 1) {
        usage();
        return 1;
    }

    char buf[3];
    for (int ch = getchar(); ch != EOF; ch = getchar()) {
        if (is_caretable(ch)) {
            fputs(char_to_caret_notation(ch, buf), stdout);
        } else {
            putchar(ch);
        }
    }

    return 0;
}
