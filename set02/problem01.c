#include <stdio.h>

void input(float *base, float *height);
void find_area(float base , float height, float *area);
void output(float base, float height, float area);

void main () {
    float base, height;
    printf("enter the base and height respectively");
    input(&base,&height);
    float area; 
    find_area (base, height, &area);
    output( base,height,area);

}

void input(float *base , float *height) {

    scanf("%f", base);
    scanf("%f", height);
    

}

void find_area(float base , float height, float *area){
    *area = 0.5*base*height;
}

void output(float base, float height, float area) {
    printf ("the base is %f and the height is %f and the area is %f", base, height, area);
}