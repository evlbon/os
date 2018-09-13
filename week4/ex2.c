#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    int n =4;

    for(int i = 0;i<n;i++){
        fork();
    }
    sleep(5);



    return 0;
}

