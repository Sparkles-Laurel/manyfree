#include <stdlib.h>
#include <stdarg.h>
#include "manyfree.h"

void manyfree(unsigned int n, ...) {
    va_list args;
    va_start(args, n);
    void *block;
    for(int i = 0; i < n; i++) {
        block = va_arg(args, void*);
        free(block);
    }
    va_end(args);
}