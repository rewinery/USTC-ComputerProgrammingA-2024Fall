#include<stdio.h>
int main() {
    int a, b, c;
    int x, y;
    printf("input int b, c:\n");
    scanf("%d %d", &b, &c);
    printf("%d\n", b>c&&b==c);
    printf("input int a:\n");
    scanf("%d", &a);
    printf("%d\n", !(a>b)&&!c||1);
    printf("%d\n", !(x=a)&&(y=b)&&0);
    printf("%d\n", !(a+b)+c-1&&b+c/2);
    printf("%d\n", 1&&30%10>=0&&30%10<=3);
    return 0;
}