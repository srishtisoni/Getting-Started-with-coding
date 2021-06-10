#include<stdio.h>

void printArray(int a[90],int n)
{ int i;
printf("The inverted array is\n");
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
}
void reverseArray(int b[90],int start, int end)
{ int temp;
    while(start<end)
    {
       temp = b[start];
       b[start]= b[end];
       b[end]=temp;
       end--;
       start++;
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
    reverseArray(a,0,n-1);
    printArray(a,n);
}