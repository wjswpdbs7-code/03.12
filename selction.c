#include<stdio.h>

int main(void)
{
    int nums[10]= {40, 20, 52, 10, 30, 6, 80, 7, 91, 55};

    int indexN = sizeof(nums) / sizeof(int);
    for (int i = 0; i < indexN - 1; i++)
    {
        for (int j = i + 1; j < indexN; ++j)
        {
            if (nums[i] > nums[j])
            {
                swap(&nums[i], &nums[j]);
            }
        }
        for (int i = 0; i < indexN; i++)
        {
            printf("%d ", nums[i]);
        }
    }
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
// 주석달아 재구성하여 설명

//