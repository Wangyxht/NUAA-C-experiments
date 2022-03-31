#include<stdio.h>
#include<stdlib.h>
#define SIZE 10

int* InsertionSort(int*,int);

int main(void)
{
    int test[SIZE]={23,4,67,89,23,56,43,78,34,8};
    int i;

    for(i=0;i<SIZE;i++)
    {
        printf("%d\t",test[i]);
    }
    putchar('\n');


    InsertionSort(test,SIZE);

    for(i=0;i<SIZE;i++)
    {
        printf("%d\t",test[i]);
    }
    putchar('\n');

    system("pause");
    return 0;
}

int* InsertionSort(int* array,int arraySize)
{
    int i;
    int j;
    int temp;

    for(i=1; i<arraySize; i++)
    {
        temp=array[i];//计数器到i，开始对array[i]进行选择排序。
        
        for(j=i-1; j>=0 && temp<array[j]; j--)//在已排序范围内j=i-1，j--，直至找到对array[i]来说的合适位置
        {
            array[j+1]=array[j];//寻找时，将比array[j]大的值进行后移，直至找到对array[i]来说的合适位置
        }
        
        array[j+1]=temp;//将array[i]置入合适位置；

    }

    return array;
}