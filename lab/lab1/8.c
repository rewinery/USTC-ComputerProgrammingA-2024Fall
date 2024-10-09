#include <stdio.h>
int main() {
    int i, res;
    scanf("%d", &i);
    
    res = i == 0 && i++;
    printf("&& = %d, i = %d\n", res, i);
    
    res = i == 1 || i--;
    printf("|| = %d, i = %d\n", res, i);
    
    res = i == 1 || i == 2 || res == 0;
    printf("res = %d\n", res);
    
    return 0;
}