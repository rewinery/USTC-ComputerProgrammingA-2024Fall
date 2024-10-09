#include<stdio.h>

int main() {
    int i=-1;
    float f=3;
    printf("%d,%d\n",-(-i),-i);
    printf("int_div:%d,%d\n",2/3,3/2);
    printf("int double div:%f,%f\n",2.0/3,3.0/2);
    printf("%%+-:%d,%d,%d\n",1%2,-1%2,-1%-2);
    printf("++i=%d,--f=%f\n",++i,--f);
    printf("i=%d,f=%f\n",i,f);
    printf("i++=%d,f--=%f\n",i++,f--);
    printf("i=%d,f=%f\n",i,f);
    return 0;
}