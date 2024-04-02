#include <stdio.h>
float input();
float square_root(float n);
void output(float n, float sqrroot); 

int main() {
    printf("Enter a number: ");
    float n = input();
    float sqrroot = square_root(n);
    output(n,sqrroot);

}

float input() {
    int a;
    scanf("%d", &a);
    return a;
}

float square_root(float n) {
    int a[2]= {2,2};
    while(n>0) {
        a[1] = 0.5*((a[0])+(n/a[0]));
        if (a[0]==a[1]) {
            return a[1];
            break;
        }
        else {
            a[0]= a[1];
            continue;
        }
    }
    
}

void output(float n, float sqrroot) {
    printf("the sqaure root of %f is %f", n , sqrroot);
}