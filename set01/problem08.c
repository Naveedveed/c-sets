#include <stdio.h>
int input_array_size();
void input_array(int n, int a[n]);
int sum_n_array(int n, int a[n]);
void output(int n, int a[n],int sum);

int main() {
    printf("enter size of array");
    int n = input_array_size();
    int a[n];
    input_array(n,a);
    int sum = sum_n_array(n,a);
    output(n, a,sum);
    return 0;
}

int input_array_size() {
    int a;
    scanf("%d",&a);
    return a;
}

void input_array(int n,int a[n]) {
        printf("enter array elements 1 by 1");
        for (int i=0;i<n;i++) {
            scanf("%d", &a[i]);

        }
}

int sum_n_array(int n, int a[n]) {
    int sum = 0;
    for (int i=0;i<n;i++) {
        sum +=a[i];
    }
    return sum;
}

void output(int n, int a[n],int sum) {
    printf("the sum of an array of %d elements is %d", n, sum);
}