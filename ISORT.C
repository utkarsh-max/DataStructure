#include<stdio.h>
#include<conio.h>
void isort();
int a[100],n,i,j,temp;
void main()
{
clrscr();
printf("Input number of elements of array :\n");
scanf("%d",&n);
printf("Input %d elements in the array : \n\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
isort();
getch();
}
void isort()
{
for(i=1;i<n;i++)
{
temp=a[i];
j=i-1;
while(j>=0&&a[j]>temp)
{
a[j+1]=a[j];
j--;
}
a[j+1]=temp;
}
printf("Your array after sorting :\n\n");
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}
}