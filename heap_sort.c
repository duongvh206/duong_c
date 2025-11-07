#include <stdio.h>
void buildheap(int a[],int n,int i)
{
    int e=a[i];
    int j=2*i+1;
    while(j<n)
    {
        int k=j+1;
        if(k<n && a[j]<a[k])
        {
            j=k;
        }
        if (a[i]<e) break;
        a[i]=a[j];i=j;j=2*i+1;
    }

}
void swap(int x,int y)
{
    int temp;
    temp=y;
    y=x;
    x=temp;

}
int main()
{
    int n=5;
    int arr[]={14,8,12,7,3,11};
    for(int i=n/2-1;i>0;i--)
    {
        buildheap(arr,n,i);
    }
    while(n>1)
    {
        swap(arr[0],arr[n-1]);
        n=n-1;
        buildheap(arr,n,0);
    }
    for (int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}