void input_string(char *a);
void str_reverse(char *str, char *rev_str);
void output(char *a, char *reverse_a);

#include <stdio.h>
#include <string.h>
void main() {

    char a[50];
    char rev_str[50]="";
    printf("INPUT THE STRING \n");
    input_string(a);
    str_reverse(a, rev_str);
    output(a,rev_str);
    int len = strlen(a);



} 

void input_string(char *a) {
    scanf("%s", a);

}

void str_reverse(char *str, char *rev_str) {
    int len = strlen(str);
    int j =0;
    for (int i=len-1,j=0;i>-1||j<len;i--,j++)
    {
        rev_str[j] = str[i];
      
    }
   
}

void output(char *a, char *reverse_a) {
    printf("the reverse of %s is %s", a, reverse_a);
}