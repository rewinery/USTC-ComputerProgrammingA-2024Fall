#include<stdio.h>
int main() {
    printf("sizeof(long long)=%lu\n",sizeof(long long));
    printf("sizeof(long double)=%lu\n",sizeof(long double));
    printf("sizeof(1)=%lu\n",sizeof(1));
    printf("sizeof('a')=%lu\n",sizeof('a'));
    printf("sizeof(1.0)=%lu\n",sizeof(1.0));
    return 0;
}