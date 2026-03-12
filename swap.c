#include <stdio.h>

void swap(int *a, int *b);
void info(int a, int b);

int main (void)
{
    int a, b, tmp;
    a = 100;
    b = 200;

    printf("a: %d, b: %d", a, b);
     printf("\n");// 
    ///tmp = a;//tmp라는 임시 변수를 선언하여 a의 값을 저장합니다. 이렇게 하면 a의 원래 값을 잃지 않고 b의 값을 a에 할당할 수 있습니다.
    //a = b;
    //b = tmp;      
    swap(&a, &b);
    printf("a: %d, b: %d", a, b);                           
    printf("\n");
    return 0;
}
void swap(int *a, int *b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

void info(int a, int b)
{
    printf("a: %d, b: %d\n", a, b);
}
