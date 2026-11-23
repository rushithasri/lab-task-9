int main() {
int n;
int ch;
int *p;
    p= &n;
    printf("enter the size of an array:");
    scanf("%d", p);
    int a[n];
    int *q;
    q=a;
    printf("the array is\n");
    for(int i=0; i<n; i++) {
        scanf("%d", (q+i));
    }
    printf("reverse of the given array is\n");
    for(int i=0; i<n/2; i++) {
     ch= a[i];
    a[i] = a[n-1-i];
    a[n-1-i]= ch;
    }
    for(int i=0; i<n; i++){
         printf("%d ", a[i]); 
    }
    return 0;
}
