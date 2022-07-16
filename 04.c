// 4. Write a program to print the first 10 odd natural numbers

#include<stdio.h>
int main(){
    printf("\n");
    int count = 0;
    while(count!=10){
        int num = (count*2) + 1;
        printf("%d\n",num);
        count++;
    }
    printf("\n");
}