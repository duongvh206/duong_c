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
    //printarray(a,k);
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
            printarray(a,k);
            printf("\n");
            
        }
        }
    }
    return 0;
    
}