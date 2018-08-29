//
// Created by Eugene on 29/08/2018.
//

#include <stdio.h>

int main() {
    int n,m;

    scanf("%d",&n);

    m = 2*n-1;

    for (int i = 1; i<m;i+=2) {
        for(int j = 0; j<(m-i)/2;j++) printf(" ");

        for(int j = 0; j<i;j++) printf("*");
        printf("\n");

    };

    return 0;
}