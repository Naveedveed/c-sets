#include <stdio.h>

int input() {
    int a;
    scanf("%d", &a);
    return a;
}


int compare(int a, int b, int c) {
    if (a>b) 
        b=a;
    if (b>c) 
        c=b;
    return c;
}
int Output(int j) {
    printf("greatest is %d", j);
}

int main() {
    printf ("enter 3 numbers");
    int x = input();
    int y = input();
    int z = input();
    int o = compare(x,y,z);
    Output(o);

}

