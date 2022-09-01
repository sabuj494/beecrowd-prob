#include <stdio.h>

int main() 
{

    int a, b, c, d;
    scanf("%d %*c %d %*c %d %*c %d", &a, &b, &c, &d);
    printf("%03d\n", a);
    printf("%03d\n", b);
    printf("%03d\n", c);
    printf("%02d\n", d);
    
    return 0;
}