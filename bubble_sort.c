#include <stdio.h>
void swap(int x,int y)
{
    int t1=x;
    int t2=y;
    t2=x;
    t1=y;
}
int main()
{
    int n;
    printf("n= ");
    scanf("%d",&n);
    int a[n];
    for (int i =0;i<n;i++)
    {
        printf("a[%d]= ",i);
        scanf("%d",&a[i]);

    }
    for (int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=n-1;j>=0;j--)
        {
            if(a[i]<a[j]){
                swap(a[i],a[j]);
            }
        }
        printf("%d ",a[i]);
    

    }
    return 0;
}