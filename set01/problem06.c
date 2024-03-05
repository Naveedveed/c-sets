int input(int *a, int *b, int *c);
void compare(int a, int b, int c, int *largest);
void output(int a, int b, int c, int largest);

#include <stdio.h>

int input(int *a, int*b, int*c) {    
    scanf("%d%d%d", a,b,c);
    return 0;
}


void compare(int a, int b, int c, int *largest) {
    if (a>b) 
        b=a;
    if (b>c) 
        c=b;
    *largest= c;
}
void output(int a, int b, int c, int largest) {
    printf(" greatest in %d and %d amd %d is %d\n", a,b,c,largest);
}

int main() {
    printf ("enter 3 numbers");
    int a, b, c,largest = 0;
    input(&a,&b,&c);
    compare(a,b,c,&largest);
    output(a,b,c,largest);
    return 0; 

}

