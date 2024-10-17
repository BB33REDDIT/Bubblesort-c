#include<stdio.h>
void bubblesort(int a[],int n)
{
int i,j,k,temp;
for(i=0;i<n;i++)
{
for(j=0;j<n-i;j++)
{
if(a[j]>a[j+1])
{
temp = a[j];
a[j] = a[j+1];
a[j+1] = temp;
}
}
}
}
void main()
{
int n,i;
printf("Enter the total number of elements");
scanf("%d",&n);
int a[n];
printf("Enter the elements\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Before sorting:\n");
for(i=0;i<n;i++)
{
printf("%d",a[i]);
printf("\n");
}
bubblesort(a,n);
printf("After sorting:\n");
for(i=0;i<n;i++)
{
printf("%d",a[i]);
printf("\n");
}
}
