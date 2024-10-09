#include <stdio.h>

int main()
{
    int a = 3, b = 3, c = 3;
    printf("a>b:%d,a<b:%d,a==b:%d\n", a > b, a < b, a == b);
    printf("a is odd:%d,b is odd:%d\n", a % 2 == 1, b % 2 == 1);
    printf("a can be divided by b:%d\n", a % b == 0);
    printf("a==b==c:%d\n", a == b == c);
    printf("a+b>b-c:%d\n", a + b > b - c);
    printf("a+(b<c):%d\n", a + (b < c));
    return 0;
}