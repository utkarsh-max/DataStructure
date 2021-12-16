#include<stdio.h>
#include<conio.h>
void bubblesort();
int a[100],n,i,j,temp;
void main()
{
printf("Input the number of elemnets in the array :\n");
scanf("%d",&n);
printf("Input %d elements in the array \n",n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
bubblesort();
getch();

}
void bubblesort()
{
for(i=1;i<n;i++)
{
for(j=0;j<n-i;j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j] = a[j+1];
a[j+1]=temp;
}
}
}
printf("\n Array after sorting is : \n\n");
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}
}