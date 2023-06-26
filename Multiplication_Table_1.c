#include<stdio.h>
int main()
{
    int i,a,b=1;
    scanf("%d%d",&a,&b);
    for(i=1;i<=12;i++)
    printf("%d x %d = %d
",a,i,a*i);
}