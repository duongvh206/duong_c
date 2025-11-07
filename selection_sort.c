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
    printarray(a,n-1);
    int min;
    for(int i=0;i<n-1;i++)
    {
        min=i;
        for(int j=i+1;j<n;j++)
        {
        if(a[j]<a[min])
        {
            min=j;
            int temp=a[min];
            a[min]=a[j];
            a[j]=temp;
            printarray(a,n-1);
            printf("\n");
            
        }
        }
    }
    return 0;
    
}