#include <stdio.h>
void swap_function(int *p, int *q);
int main() {
    int a;
    int *p;
    p= &a;
    int b;
    int *q;
    q= &b;
    printf("enter a and b \n");
    scanf("%d %d", p, q);
    swap_function(p, q);
   printf("after swapping the two numbers are: %d and %d \n", *p, *q);
    return 0;
}
void swap_function(int *p, int *q) {
     int c;
    c= *p;
    *p= *q;
    *q=c;
}
