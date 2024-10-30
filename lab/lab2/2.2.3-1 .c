#include<stdio.h>
int main() {
    int a, b;
    double x, y;
    printf("%f\n", 3.5+1/2+56%10);
    printf("input int a:\n");
    scanf("%d", &a);
    printf("%d\n", a++*1/3);
    printf("a=%d\n", a);
    printf("input int a, double x, y:\n");
    scanf("%d %lf %lf", &a, &x, &y);
    printf("%lf\n", x+a%3*(int)(x+y)%2/4);
    printf("input int a, b, double x, y:\n");
    scanf("%d %d %lf %lf", &a, &b, &x, &y);
    printf("%f\n", (float)(a+b)/2+(int)x%(int)y);
    return 0;
}