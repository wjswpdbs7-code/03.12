#include<stdio.h>

void swap(int *a, int *b);
int main(void)
{
    int nums[10]= {40, 20, 52, 10, 30, 6, 80, 7, 91, 55};

    int indexN = sizeof(nums) / sizeof(int);

    //j는 버블이 올라오는 위치 i 는 갯수
    for (int i = indexN - 1; i >= 1; --i)
    {
        for (int j = 0; j < i; ++j)
        {
            if (nums[j] > nums[j + 1])
            {
                swap(&nums[j], &nums[j + 1]);
            }
        }
        
    }
    for (int i = 0; i < indexN; i++)
        {
            printf("%d ", nums[i]);
        }
    printf("\n");

    return 0;
}
void swap(int *a, int *b)// a와 b의 값을 서로 교환하는 함수입니다. 선언하는 위치 는 main 함수보다 뒤에 선언되어 있지만, main 함수에서 swap 함수를 호출하기 전에 swap 함수의 원형을 선언하거나, swap 함수를 main 함수보다 먼저 정의해야 합니다. 그렇지 않으면 컴파일러는 swap 함수가 정의되지 않았다고 판단하여 오류를 발생시킬 수 있습니다.
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

// 버블 정렬은 인접한 요소들을 비교하여 정렬하는 알고리즘입니다.
// 버블 정렬에서는 배열의 끝에서부터 시작하여 인접한 요소들을 비교
//하여 정렬합니다. 가장 큰 요소가 버블처럼 올라오는 방식으로 정렬이 이루어집니다.
// 버블 정렬의 시간 복잡도는 O(n^2)입니다. 이는 배열의 크기가 커질수록 정렬에 필요한 비교 횟수가 급격히 증가
// 버블 정렬은 간단한 알고리즘이지만, 효율성이 낮아서 대규모 데이터셋에서는 사용되지 않습니다. 그러나 작은 배열이나 거의 정렬된 배열에서는 효율적으로 작동할 수 있습니다.
