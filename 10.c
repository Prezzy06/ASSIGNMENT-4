// 10. Write a program to print a table of 5.

#include<stdio.h>
int main(){
    printf("\nTABLE OF 5:\n\n");
    for(int i = 1 ; i<=10 ; i++){
        int num = (5*i);
        printf("5 x %d = %d\n",i,num);
    }
    printf("\n");
}