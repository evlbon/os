#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main() {
    char command[10];

    while(1) {
        printf("> ");
        scanf("%s", command);

        char *ampr = strchr(command, '&');

        if (ampr) {
            *ampr = '\0';
            int pid = fork();
            if (!pid) {
                system(command);
                printf("\n[%d] Done\n", getpid());
            }
        } else {
            system(command);
        }
    }

}