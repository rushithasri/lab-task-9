#include<stdio.h>
int main() {
int rows, coloumns, i, j;
printf("enter the rows and coloumns of the matrix\n");
scanf("%d %d", &rows, &coloumns);
int a[rows][coloumns];
printf("the matrix is: \n");
for(i=0; i<rows; i++) {
  for(j=0; j<coloumns; j++) {
  scanf("%d", *(a+i)+j);
  }
   }

   printf("the transpose of the matrix is: \n");
   for(i=0; i<coloumns; i++) {
  for(j=0; j<rows; j++) {
  printf("%d ", *(*(a+j)+i)); 
  }
  printf("\n");
  }
  return 0; 
  }
