#include<stdio.h>
struct pair
{
    int min;
    int max;
};

struct pair get_minmax(int a[90], int low, int high)
{   
    struct pair minmax,mml,mmr;
    int mid;
    if(low==high)
    {
    minmax.min=a[low];
    minmax.max=a[high];
    return minmax;
    }
    if(high==low+1)
    {
        if(a[high]>a[low])
        {
            minmax.min=a[low];
            minmax.max=a[high];
            return minmax;
        }
        else
        {
            minmax.min=a[high];
            minmax.max=a[low];
        }
    }
    else
    {
        mid = (high+low)/2;
        mml=get_minmax(a,low,mid);
        mmr=get_minmax(a,mid+1,high);
        if(mml.min>mmr.min)
            minmax.min=mmr.min;
        else minmax.min=mml.min;
        if (mml.max>mmr.max)
          minmax.max=mml.max;
          else 
          minmax.max=mmr.max;
    return minmax;
    }
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
    struct pair minmax = get_minmax(a,0,n-1); 
    printf("\nMax: %d Min: %d",minmax.max,minmax.min);
}