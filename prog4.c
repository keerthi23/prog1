#include<stdio.h>
int main()
{
int a;
scanf("%d",&a);
if(a=(+a))
{
printf("\npositive number");
}
else if(a=(-a))
{
printf("negative number");
}
else if(a=0)
{
printf("\nZero");
}
else
{
printf("none of the above");
}
return 0;
}
