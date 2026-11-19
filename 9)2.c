#include<stdio.h>
int main() {
    float radius;
    float *x;
    x=&radius;
    float area;
    float *a;
    a=&area;
    float perimeter;
    float *p;
    p= &perimeter;
    printf("enter radius\n");
    scanf("%f", x);
    area = (3.14)*radius*radius;
    perimeter=2*(3.14)*radius;
    printf("area= %.2f  %.2f\n", area, *a);
    printf("perimeter=%.2f  %.2f", perimeter, *p);
    return 0;
}
