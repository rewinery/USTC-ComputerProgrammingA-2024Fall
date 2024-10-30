#include<stdio.h>
int main() {
    int a, b, c, tema, temb, temc;
    printf("input a, b:\n");
    scanf("%d%d", &a, &b);
    tema=a, temb=b;
    printf("a+=a+b:%d\n", a+=a+b);
    printf("a=%d, b=%d\n", a, b);
    a=tema, b=temb;
    printf("input c:\n");
    scanf("%d", &c);
    temc=c;
    printf("a*=b%%c:%d\n", a*=b%c);
    printf("a=%d, b=%d, c=%d\n", a, b, c);
    a=tema, b=temb, c=temc;
    printf("a/=c-a:%d\n", a/=c-a);
    printf("a=%d, b=%d, c=%d\n", a, b, c);
    a=tema, b=temb, c=temc;
    printf("a+=a-=a*=a:%d\n", a+=a-=a*=a);                      //注意运算顺序
    printf("a=%d, b=%d, c=%d\n", a, b, c);
    a=tema, b=temb, c=temc;
    printf("a=(a=++b, a+5, a/5):%d\n", a=(a=++b, a+5, a/5));    //注意运算顺序
    printf("a=%d, b=%d, c=%d\n", a, b, c);
    a=tema, b=temb, c=temc;
    printf("a>=b>=2? 1: 0:%d\n", a>=b>=2? 1: 0);
    printf("a=%d, b=%d, c=%d\n", a, b, c);
    a=tema, b=temb, c=temc;
    return 0;
}