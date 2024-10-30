#define printf __mingw_printf
#include<stdio.h>
int main() {
    unsigned int i, n=100;
    unsigned int t=1;
    float f_pi=2.0, f_i=1.0;
    double d_pi=2.0, d_i=1.0;
    long double ld_pi=2.0, ld_i=1.0;
    printf("the circulation times:(0~4294967295)\n");
    scanf("%u", &n);
    printf("the type of 'pi': 1 is float; 2 is double; 3 is long double\n");
    scanf("%u", &t);
    for(i=0; i<n; i++) {
        switch (t) {
            case 1:
                f_pi*=4.0*f_i*f_i/(2*f_i-1)/(2*f_i+1);
                f_i+=1.0;
                break;
            case 2:
                d_pi*=4.0*d_i*d_i/(2*d_i-1)/(2*d_i+1);
                d_i+=1.0;
                break;
            case 3:
                ld_pi*=4.0*ld_i*ld_i/(2*ld_i-1)/(2*ld_i+1);
                ld_i+=1.0;
                break;
        }
    }
    switch (t) {
        case 1:
            printf("f_pi=%.8f with %u-time circulation", f_pi, n);
            break;
        case 2:
            printf("d_pi=%.16f with %u-time circulation", d_pi, n);
            break;
        case 3:
            printf("ld_pi=%.20Lf with %u-time circulation", ld_pi, n);  //long double 用%Lf
            break;
    }
    return 0;
}