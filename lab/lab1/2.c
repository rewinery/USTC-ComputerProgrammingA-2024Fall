// #include<stdio.h>
// int main() {
//     char c;
//     unsigned short s;
//     double d;
//     printf("Input one char:");
//     c=getchar();     //getchar的使用
//     printf("ASCII:%d\n",c);
//     printf("Input one short:");
//     scanf("%d",&s);
//     printf("unsigned short:%d\n",s);
//     printf("Input one real:");     //提示输入一个实数
//     scanf("%lf",&d);
//     printf("double:%g\n",d);
//     return 0;
// }

#include <stdio.h>
int main()
{
    char c;
    unsigned short s;
    double d;
    printf("Input one char:");
    c=getchar();
    printf("ASCII:%d\n",c);
    printf("Input one short:");
    scanf("%d", &s);
    printf("unsigned short:%d\n",s);
    printf("Input one real:");
    scanf("%lf",&d);
    printf("double:%g\n",d);
    return 0;
}