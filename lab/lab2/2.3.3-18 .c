#include <stdio.h>
double my_abs(double x) { return x > 0 ? x : -x; }
double f(double x) {return 3 * x * x * x - 3 * x * x + x - 6; }
double g(double x) {return 9 * x * x - 6 * x + 1; }
int main() {
    double x = 0, tem = 0, a = 0, b = 0;
    int i = 0, j = 0;
    printf("input the x_0=\n");
    scanf("%lf", &x);
    do {
        tem = x;
        x = tem - f(x) / g(x);
        i++;
    } while (my_abs(x - tem) >= 1e-6);
    printf("the root is %lf with %d iterations(Newton method)\n", x, i);
    printf("input the range(a,b):\n");
    scanf("%lf, %lf", &a, &b);
    for(j = 0; my_abs(b - a) > 1e-6; j++) {
        x=(a + b) / 2;
        a = f(a) * f(x) <= 0 ? a : x;
        b = f(b) * f(x) <= 0 ? b : x;
    }
    x=(a + b) / 2;
    printf("the root is %lf with %d iterations(dichotomy)\n", x, j);
    return 0;
}