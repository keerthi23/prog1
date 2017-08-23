#include<stdio.h>
int main()
{
int a,b,c;
scanf("%d%d%d",&a,&b,&c);
if(a>b&&a>c)
{
printf("Ais the greatest number");
}
else if(b>a&&b>c)
{
printf("B is the greatest number");
}
else
{
printf("C is the greatest number");
}
return 0;
}
