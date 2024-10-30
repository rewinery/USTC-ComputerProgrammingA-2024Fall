#include<stdio.h>
int main() {
    int n, sum, prod, i, j;
    printf("input integer n from 1 to 16:\n");
    if(scanf("%d", &n)!=1 || (n<=0||n>16)) {
        printf("invalid input\n");
        return 0;
    }
    for(i=1, prod=1, sum=0; i<n+1; i++) 
        sum+=(prod*=i);
    printf("single circulation:%d\n", sum);
    for(i=1, sum=0; i<n+1; i++, sum+=prod) 
        for(j=1, prod=1; j<=i; j++) 
            prod*=j;
    printf("double circulation:%d\n", sum);
    return 0;
}