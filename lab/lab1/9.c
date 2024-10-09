#include<stdio.h>
int main() {
    int a,b,c,max;
    scanf("%d%d%d",&a,&b,&c);
    max=a>b?a:b;
    printf("max of a b:%d\n",max);
    max=max>c?max:c;
    printf("max of a b c:%d\n",max);
    return 0;
}