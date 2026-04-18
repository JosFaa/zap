#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main () {
    char buffer[256];
    char *endptr;
    long num; 
    
    while (fgets(buffer, sizeof buffer, stdin) != NULL) {
        errno = 0;
        num = strtol(buffer, &endptr, 10);
        if (buffer == endptr) {
            printf("no digits were found.\n");
        } else if (*endptr != '\n') {
            printf("Invalid character: %c\n", *endptr);
        } else if (errno == ERANGE) {
            printf("Number is out of range.\n");
        } else { printf("Number: %ld\n", num);}
    }
    return 0;
}
