#include <stdio.h>

int my_strcmp(const char *a, const char *b) {
    while(1) {
        if(*a - *b != 0) return *a - *b;
        if(*a == '\0' && *b == '\0') return 0;
        if(*a == '\0' || *b == '\0') return *a - *b;
        *a++;
        *b++;
    }
}

int main() {
    printf("%d\n", my_strcmp("abc", "abcd"));
    printf("%d\n", my_strcmp("abc", "abc"));
    printf("%d\n", my_strcmp("b", "a"));
}