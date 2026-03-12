#include <stdio.h>
#include <stdbool.h>

bool arrayCompare(int *array, int *array2, int index)
{
    int i;
    for (i = 0; i < index; ++i)
    {
        if (array[i] != array2[i])
        {
            return false;
        }
    }
    return true;
}


int main(void)
{
    int nums1[] = {1, 3, 7, 4, 9};
    int nums2[] = {1, 3, 7, 4, 9};
    int nums3[] = {1, 3, 7, 4, 9};

    //(nums1 == nums2) 안됨
    //(nums1 == nums2) 안됨
    if (arrayCompare(nums1, nums2, 5))
    {
        printf("두 배열은 같다\n");
    }
    else
    {
        printf("두 배열은 같지 않다\n");
    }
    return 0;
}