int input_side();
int check_scalene(int a, int b, int c);
void output(int a, int b, int c, int isscalene);

#include <stdio.h>

int main (){
    printf("enter the three sides in length");
    int a = input_side();
    int b = input_side();
    int c = input_side();
    int isscalene = check_scalene(a,b,c);
    output( a,  b, c, isscalene);
    return 0;
}

int input_side() {
    int a;
    scanf("%d", &a);
    return a;
}

int check_scalene(int a,int b,int c) {

    if(a==b || a==c || b==c) 
    return 1;
    else 
    return 0;
    
}

void output(int a, int b, int c, int isscalene) {
    if (isscalene ==1) 
    printf("not scalene");
    else 
    printf("scalene");
}