//
// Created by Eugene on 29/08/2018.
//

#include <stdio.h>
void f1(int n){
    int m;

    m = 2*n-1;

    for (int i = 1; i<=m;i+=2) {
        for(int j = 0; j<(m-i)/2;j++) printf(" ");

        for(int j = 0; j<i;j++) printf("*");
        printf("\n");

    };
}

void f2(int n){
    for (int i = 1; i <= n; i++){
        for(int j = 0; j<i;j++) printf("*");
        printf("\n");
    }
}


void f3(int n){
    int mid=n/2,k=0;
    if(n%2==1) mid++;

    for (int i = 1; i <= n; i++){
        if(i>mid){
            k--;
            for(int j = 0; j<k;j++) printf("*");
        }
        else{
            k++;
            for(int j = 0; j<k;j++) printf("*");
        }

        if(i==mid && n%2==0) k++;

        printf("\n");
    }
}

void f4(int n){

    for (int i = 1; i <= n; i++){
        for(int j = 0; j<n;j++) printf("*");
        printf("\n");
    }
}

int main() {
    int n,a=1;
    printf("Enter size\n");
    scanf("%d",&n);


    while (a!=0){
        printf("Enter number from 0 to 4(0 for exit)\n");
        scanf("%d",&a);

        switch(a){
            case 1:
                f1(n);
                break;
            case 2:
                f2(n);
                break;
            case 3:
                f3(n);
                break;
            case 4:
                f4(n);
                break;
        }

    }

    return 0;
}