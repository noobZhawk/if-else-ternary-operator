#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter three integer(a,b,c):");
    scanf("%d %d %d",&a,&b,&c);

    (a>b?(a>c?printf("a is greater"):printf("c is greater")):b>c?printf("b is greater"):printf("c is greater"));

}
