#include <stdio.h>
int main()
{
    int x,h,m,s;
    scanf("%d",&x);
    h=x/3600;
    m=(x-(h*3600))/60;
    s=(x-((h*3600)+(m*60)));
    printf("%d:%d:%d\n",h,m,s);
    return 0;
}