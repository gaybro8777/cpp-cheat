#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    (void)argv;
    long long int i, max, val;
    int do_print;
    if (argc > 1) {
        max = strtoul(argv[1], NULL, 0);
    } else {
        max = 10000000;
    }
    if (argc > 2 && argv[2][0] == '1') {
        do_print = 1;
    } else {
        do_print = 0;
    }
    val = 1;
    for (i = 0; i < max; i++) {
        val = val * val - 3 * val + 1;
        if (do_print)
            printf("%llu\n", i);
    }
    printf("%llu\n", val);
    return EXIT_SUCCESS;
}
