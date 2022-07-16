// 5. Write a program to print the first 10 odd natural numbers in reverse order.

#include<stdio.h>
int main(){
    int i = 10;
    printf("\n");
    while(i!=0){
        int num = (i*2) - 1;
        printf("%d\n",num);
        i--;
    }
    printf("\n");
}