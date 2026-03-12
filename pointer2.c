#include <stdio.h>

int main(void)
{
    int var_a;// var_a는 정수형 변수입니다. 이 변수는 정수 값을 저장하는 데 사용됩니다. 변수를 선언할 때, 변수의 이름과 데이터 타입을 지정해야 합니다. 예를 들어, int var_a;는 var_a라는 이름의 정수형 변수를 선언하는 것을 의미합니다. 이후에 var_a에 값을 할당하거나, var_a의 값을 읽을 수 있습니다.
    int *pVar_a;// 
    int **ppVar_a;//

    var_a = 100;// var_a는 100
    pVar_a = &var_a;//  pVar_a는 var_a;의 주소
    ppVar_a = &pVar_a;// ppVar_a는 pVar_a;의 주소 즉 ppVar_a는 var_a;의 주소의 주소

    **ppVar_a = 200;
    printf("var_a: %d, &var_a: %p\n", var_a, &var_a);
    printf("pVar_a: %p, *pVar_a: %d\n", pVar_a, *pVar_a);
    printf("ppVar_a: %p, *ppVar_a: %p, **ppVar_a: %d\n", ppVar_a, *ppVar_a, **ppVar_a);
    return 0;

}

//&는 주소 연산자입니다. 변수의 주소를 얻는 데 사용됩니다. *와의 차이점
//*는 간접 참조 연산자입니다. 포인터가 가리키는 주소에 저장된 값을 읽거나
