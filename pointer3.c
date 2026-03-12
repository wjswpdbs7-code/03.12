// little endian, big endian(데이터가 저장되는 방향)
// little endian : 작은 바이트가 낮은 주소에 저장되는 방식    
// big endian : 큰 바이트가 낮은 주소에 저장되는 방식

#include <stdio.h>

int main(void)
{
    int a = 0x12345678;
    char *p;
    p = (char *)&a;
    printf("*p : 0x%x\n", *(p+1));
    
    return 0;
}

//a라는 변수가 메모리에 어떻게 저장될지 생각해보자
// 0x12345678; 12,34,56,78이 각각 1byte씩 32bit로 저장된다.
//char형 변수는 1byte(8bit) 크기를 가지므로, a의 각 바이트는 char형으로 표현할 수 있다. 따라서 a의 각 바이트는 다음과 같이 표현될 수 있다:
