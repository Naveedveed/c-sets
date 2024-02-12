//2. Write a C program to add two numbers.
#include <stdio.h>
int main () {
    int a, b , result;
    printf("Enter two number:");
    scanf("%d %d",&a ,&b);

    result = a+b;
    printf("The sumof %d+%d is %d \n",a,b,result) ;
    return 0;
}
 