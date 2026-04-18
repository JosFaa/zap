#include <stdio.h>
#include <stdlib.h>

int main () {
    char buffer[256];
    char *endptr;
    long num; 
    
    while (fgets(buffer, sizeof buffer, stdin) != NULL) {
        num = strtol(buffer, &endptr, 10);
        if (buffer == endptr) {
            printf("no digits werde found.\n");
        } else if (*endptr != '\n') {
            printf("Invalid character: %c", *endptr);
        } else {
            printf("Number: %ld\n", num);
        }
    }
}
