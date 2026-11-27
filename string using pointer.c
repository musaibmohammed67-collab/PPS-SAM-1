#include<stdio.h>
int main()
{
char str[20]="greeks";
//pointer variable which  stores
//the sraring address of
//the character array str
char*ptr=str;
//while loop will run till
//the character value is not
//equal to null character
while(*ptr !='\0'){
printf("%c",*ptr);
ptr++;
}
return 0;
}
