for(j=0; j<coloumns; j++) {
                scanf("%d", (*(b+i)+j));
        }#include<stdio.h>
int main() {
        int rows, coloumns, i, j;
printf("enter the rows and coloumns of the 2 matrices:\n");
scanf("%d %d", &rows, &coloumns);
int a[rows][coloumns], b[rows][coloumns], sum[rows][coloumns];
printf("the first matrix is:\n");
for(i=0; i<rows; i++) {
        for(j=0; j<coloumns; j++) {
                scanf("%d", (*(a+i)+j));
        }
 }

printf("the secnd matrix is:\n");
for(i=0; i<rows; i++) {
 }

printf("the sum of two matrices is: \n");
for(i=0; i<rows; i++) {
        for(j=0; j<coloumns; j++) {
   *(*(sum+i)+j)=*(*(a+i)+j)+*(*(b+i)+j);
   }
        }
for(i=0; i<rows; i++) {
        for(j=0; j<coloumns; j++) {
                printf("%d ", *(*(sum+i)+j));
        }
    printf("\n");
}
 return 0;
}
