#include <stdio.h>

int add(int a, int b);//선언 declaration ()안은 argument즉 매개변수입니다. 

int main(void)
{
    int first = 43, second = 73;
    printf("두 수의 합은 %d입니다.\n", add(first, second));
    return 0;
}

int add(int a, int b)//정의 definition
{
    return a + b;
}

