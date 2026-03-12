#include<stdlib.h>
#include<stdio.h>

int compare(const void *a, const void *b)
{
    return (*(int*)a - *(int*)b);// compare 함수는 qsort 함수에서 요소들을 비교하는 데 사용됩니다. 이 함수는 두 개의 void 포인터를 매개변수로 받아서, 이들을 int 포인터로 캐스팅한 후에 값을 비교합니다. 반환값이 양수이면 a가 b보다 크다는 것을 의미하고, 음수이면 a가 b보다 작다는 것을 의미하며, 0이면 a와 b가 같다는 것을 의미합니다.
}

int main(void)
{
    int nums[10] = {40, 20, 52, 10, 30, 6, 80, 7, 91, 55};
    int indexN = sizeof(nums) / sizeof(int);
    
    qsort(nums, indexN, sizeof(int), compare);

    for (int i = 0; i < indexN; i++)
    {
        printf("%d ", nums[i]);
    } 
    return 0;
}