#include <stdio.h>
void printarray(int a[],int n)
{
    for (int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
int main()
{
    int n;
    printf("n= ");
    scanf("%d",&n);
    int a[n];
    
    for (int i=0;i<n;i++)
    {
        printf("a[%d]= ",i+1);
        scanf("%d",&a[i]);
    }
    int k=sizeof(a)/sizeof(a[0]);
    printarray(a,k);
    printf("\n");

    for (int i = 1; i < n; i++)
    {
           int x = a[i];
           int j = i;
           while (j > 0 && a[j - 1] > x){
            a[j] = a[j - 1];
             j--;
            }
            a[j] = x;
            printarray(a,k);
            printf("\n");
    }

    return 0;
}