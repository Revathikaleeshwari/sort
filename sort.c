#include<stdio.h>
void main()
{
int a[10],i,j,n,c=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&c);
}
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
c++;
}
}
if(c==0)
printf("the array is sorted\n");
else
printf("the array is not sorted\n");
getch();
}
