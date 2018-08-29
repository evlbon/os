//
// Created by Eugene on 29/08/2018.
//


#include <stdio.h>
void swap(int *v1,int *v2){
    int r = *v1;
    *v1 = *v2;
    *v2 = r;
}

int main() {
    int a,b;

    scanf("%d %d",&a,&b);

    swap(&a,&b);

    printf("%d %d",a,b);

    return 0;
}