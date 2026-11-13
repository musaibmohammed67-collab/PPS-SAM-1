#include<stdio.h>
void main()
{
int m[5],i,key,s=0;
printf("enter 5 value");
for(i=0;i<5;i++)
scanf("%d",&m[i]);
printf("enter key value to be searched");
scanf("%d",&key);
for(i=0;i<5;i++)
{
if (key==m[i])
{
s=i;
break;
}
}
if(s==i)
printf("element found at %d,i+1");
else
print("element not found");
}
