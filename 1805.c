#include <stdio.h>
int main() 
{
    double a, b, s;
    scanf("%lf %lf", &a, &b);
    s = ((a + b) * ((b-a+1)/2));
        printf("%.0lf\n",s);
    return 0;
}