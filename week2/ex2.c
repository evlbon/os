#include <stdio.h>
#include <memory.h>

int main() {
    char str[100];

    scanf("%s",str);
    int n = (int) strlen(str);

    for (int i = n-1; i >= 0 ; i--) printf("%c", str[i]);


    return 0;
}