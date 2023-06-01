#include <stdio.h>

int fib(int n) {
    int f0 = 0;
    int f1 = 1;
    int fib;

    if (n == 0) {
        return f0;
    }

    for (int i = 0; i < n; i++) {
        fib = f0 + f1;
        f0 = f1;
        f1 = fib;
    }

    return fib;
}