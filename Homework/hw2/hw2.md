# 第二次作业答案

## 4

```c
#include <stdio.h>

int main() {
    int height, weight;
    float bmi;
    while (1) {
        printf("Please type in height and weight, type \"0 0\" to exit: ");
        scanf("%d%d", &height, &weight);
        if (height <= 0) {
            if (weight == 0 && height == 0)
                break;
            
            printf("Wrong Input...\n");
            continue;
        }
        if (weight <= 0) {
            printf("Wrong Input...\n");
            continue;
        }
        bmi = (float) w / h / h;
        if (bmi < 20) {
            printf("Too thin\n");
        }
        else if (bmi <= 25) {
            printf("Standard\n");
        }
        else {
            printf("Too fat\n");
        }
    }
    return 0;
}
```

流程图、伪代码略.

## 5

```c
#include <stdio.h>

int main() {
    float data[] = {...};
    float maxData = data[0];
    const int size = sizeof(data) / sizeof(data[0]);
    for (int i = 1; i < size; ++i) {
        maxData = maxData > data[i] ? maxData : data[i];
    }
    printf("The biggest number is: %f\n", maxData);
    return 0;
}

```

流程图、伪代码略.


## 6

```c
#include <stdio.h>

int main() {
    float x;
    float* p = &x;
    float sum = 0;
    for (int i = 0; i < 5; ++i) {
        scanf("%f", p);
        if (x < 0) {
            printf("Wrong input...\n");
            continue;
        }
        sum += x;
    }
    printf("Sum is: %f\n", sum);
    return 0;
}
```

流程图略.

## 8

```c
#include <stdio.h>

int main() {
    float x;
    float ave = 0;
    int cnt;
    for (int i = 0; i < 5; ++i) {
        scanf("%f", &x);
        if (x < 0) {
            printf("Negative number\n");
            continue;
        }
        ave += x;
        cnt++;
    }
    printf("Average: %f\n", ave / cnt);
    return 0;
}
```

为代码略