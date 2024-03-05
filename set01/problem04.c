void input(int *a, int *b);
void add(int a, int b, int *sum);
void output(int a, int b, int sum);


#include <stdio.h>

int main() { 
    printf("input the two numbers ");
    int a,b;
    input(&a,&b);
    int sum;
    add(a,b,&sum);
    output(a,b,sum);

}
void add(int a, int b, int *sum) {
    *sum = a+b;

}

void input(int *a, int *b) {
    scanf("%d %d", a,b);
}

void output(int a,int b, int sum) {

    printf("the sum of %d and %d is %d",a,b,sum);
}