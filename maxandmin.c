#include<stdio.h>
int min(int a[90], int n)
{
    int i,min;
    min=a[0];
    for(i=1;i<n;i++)
    {
     if(min>a[i])
     min=a[i];
    }
    return min;
}
int max(int a[90], int n)
{
    int i,max;
    max=a[0];
    for(i=1;i<n;i++)
    {
     if(max<a[i])
     max=a[i];
    }
    return max;
}
void main()
{
     int a[90],n,i,j;
    printf("Enter the number of elements:\n");
    scanf("%d",&n);
    printf("Enter the elements in the array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int m1= max(a,i);
    int m2= min(a,i);
    printf("Max: %d Min: %d",m1,m2);
}