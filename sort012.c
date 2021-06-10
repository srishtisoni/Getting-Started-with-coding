//Given an array which consists of only 0, 1 and 2. Sort the array without using any sorting algo
#include<stdio.h>
struct counter
{
    int zero;
    int one;
};

void sortArray(int a[90],int n)
{
    struct counter m;
    m.zero=0;
    m.one=0;
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]==0)
        m.zero++;
        else if(a[i]==1)
        m.one++;
    }
    int x = m.zero;
    int y =m.one;
    for(i=0;i<x;i++)
    a[i]=0;
    for(i=x;i<x+y;i++)
    a[i]=1;
    for(i=x+y;i<n;i++)
    a[i]=2;
}
void printArray(int a[90],int n)
{
    for(int i=0;i<n;i++)
    printf("%d\t",a[i]);
}
void main()
{
     int a[90],n,i;
    printf("Enter the number of elements:\n");
    scanf("%d",&n);
    printf("Enter the elements in the array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
  sortArray(a,n);
  printArray(a,n);
}