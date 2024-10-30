#include<stdio.h>
int main() {
    int res=0;
    float x1=0, tem=0, y=0, x2=0;
    printf("input an integer in 0 to 30:\n");
    s1:
    while (1) {
        res=scanf("%f", &x1);
        if(res==1) {
            if(x1-(int)x1==0) break;
        }
        printf("only integer valid !\n");
        while(getchar()!='\n');
    }
    res=(x1>=0&&x1<30)+(x1>=0&&x1<20)+(x1>=0&&x1<10);
    switch (res) {
        case 3:
            y=x1;
            printf("when x=%d, y=%d\n", (int)x1, (int)y);
            break;
        case 2:
            y=x1*x1+1;
            printf("when x=%d, y=%d\n", (int)x1, (int)y);
            break;
        case 1:
            y=x1*x1*x1+x1*x1+1;
            printf("when x=%d, y=%d\n", (int)x1, (int)y);
            break;
        default:
            printf("x should be in 0 to 30\n");
            goto s1;
    }
    printf("input a real in 0 to 30:\n");
    while (1) {
        res=scanf("%f", &x2);
        if(res==1) {
            break;
        }
        printf("only real valid !\n");
        while(getchar()!='\n');
    }
    res=(x2>=0&&x2<30)+(x2>=0&&x2<20)+(x2>=0&&x2<10);
    if(res==3) {
        y=x2;
        printf("when x=%f, y=%f\n", x2, y);
    }
    else if (res==2) {
        y=x2*x2+1;
        printf("when x=%f, y=%f\n", x2, y);
    }
    else if (res==1) {
        y=x2*x2*x2+x2*x2+1;
        printf("when x=%f, y=%f\n", x2, y);
    }
    else printf("x should be in 0 to 30\n");
    return 0;
}