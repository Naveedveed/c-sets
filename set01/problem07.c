int input_n();
int sum_n_nos(int n);
void output(int n, int sum);

#include <stdio.h>

int main() {
    printf("enter n");
    int n = input_n();
    int sum = sum_n_nos(n);
    output(n,sum);

}

int input_n() {
    int n;
    scanf("%d",&n);
    return n;
}

int sum_n_nos(int n) {
    int sum =0;
    for(int i=1;i<=n;i++) {
        sum += i;
    }
    return sum;
}

void output(int n, int sum) {
    printf("sum of %d natural numbers is %d",n,sum);
}