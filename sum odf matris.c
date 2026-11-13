#include<stdio.h>
void main()
{
int a[2][2],b[2][2],c[2][2],i,j;
printf("enter 4 value for matrix a");
for(i=0;i<2;i++)
for(j=0;j<2;j++)
scanf("%d",&a[i][j]);
printf("enter 4 value for matrix b");
for(i=0;i<2;i++)
for(j=0;j<2;i++)
scanf("%d",&b[i][j]);
c[i][j]=a[i][j]+b[i][j];
printf("sum=\n");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
printf("%d",c[i][j]);
printf("\n");
}
}
