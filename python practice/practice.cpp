#include<stdio.h>
int main()
{
    int a,b,c;
    printf("\n enter 3 number");
    scanf("%d %d %d",&a,&b,&c);
    if((a>b)&&(a>c))
    {
        printf("\n%d is a greatest number",a);
    }
else if (b>c)
{
    printf("\n%d is greatest number",b);
}
else
{
    printf("%d is agreatest number",c);
}
return 0;
}
