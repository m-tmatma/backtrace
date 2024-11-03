#include <execinfo.h>
#include <stdio.h>

void print_backtrace() {
    void* buffer[10];
    int nptrs = backtrace(buffer, 10);
    backtrace_symbols_fd(buffer, nptrs, fileno(stdout));
}

void main() {
    print_backtrace();
}
