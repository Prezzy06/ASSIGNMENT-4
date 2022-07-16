// 6. Write a program to print the first 10 even natural numbers

#include<stdio.h>
int main(){
    int i = 0;
    printf("\n");
    while(i!=10){
        int num = (i*2) + 2;
        printf("%d\n",num);
        i++;
    }
    printf("\n");
}