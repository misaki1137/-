#include<stdio.h>
int main() {
    int n;
    printf("请输入分式序列前n项和的n值:");
    scanf("%d",&n);

    float sum;
    int a = 2, b = 1;
    for (int i = 1; i <= n; i++){sum += (float)a / b;
    int temp = a + b;
    b=a;
    a=temp;
    }
    printf("sum=%6.2f",sum);
    return 0;
}