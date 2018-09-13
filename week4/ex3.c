#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char command[10];
    while (1) {
        printf("> ");
        scanf("%s", command);
        system(command);
    }

}

