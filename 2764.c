# include <stdio.h>
int main()
{
    char d,D,m,M,y,Y;

    scanf("%c%c%*c%c%c%*c%c%c",&d,&D,&m,&M,&y,&Y);

    printf("%c%c/%c%c/%c%c\n",m,M,d,D,y,Y);
    printf("%c%c/%c%c/%c%c\n",y,Y,m,M,d,D);
    printf("%c%c-%c%c-%c%c\n",d,D,m,M,y,Y);
    return 0;
}
