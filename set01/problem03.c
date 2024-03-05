int input();
int add(int a, int b);
void output(int a, int b, int sum);

#include <stdio.h>

int main() { 
    printf("input the two numbers ");
    int a = input();
    int b = input();
    int sum = add(a,b);
    output(a,b,sum);
    return 0;
}
int add(int a, int b) {
    int sum = a+b;
    return sum;
}

int input() {
    int a;
    scanf("%d", &a);
    return a;
}

void output(int a,int b, int sum) {

    printf("the sum of %d and %d is %d \n",a,b,sum);
}