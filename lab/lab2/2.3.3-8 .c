#include<stdio.h>
int main() {
    int i=0, n=0, s1=0, s2=0;
    float s3=0;
    printf("input a positive integer:\n");
    if(scanf("%d", &n)!=1) {
        printf("invalid input\n");
        return 0;
    }
    else if(n<=0) {
        printf("invalid input\n");
        return 0;
    }
    for(i=1; i<n+1; i++) {
        s1+=i;
        s2+=2*i-1;
        if(i%2==1) s3+=1.0/i;
        else s3+=-1.0/i;
    }
    printf("for:s1=%d, s2=%d, s3=%f\n", s1, s2, s3);
    i=1, s1=0, s2=0, s3=0;
    while (i<n+1) {
        s1+=i;
        s2+=2*i-1;
        if(i%2==1) s3+=1.0/i;
        else s3+=-1.0/i;
        i++;
    }
    printf("while:s1=%d, s2=%d, s3=%f\n", s1, s2, s3);
    i=1, s1=0, s2=0, s3=0;
    do {
        s1+=i;
        s2+=2*i-1;
        if(i%2==1) s3+=1.0/i;
        else s3+=-1.0/i;
        i++;
    } while (i<n+1);
    printf("do while:s1=%d, s2=%d, s3=%f\n", s1, s2, s3);
    return 0;
}