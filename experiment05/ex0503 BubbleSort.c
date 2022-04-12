/*
实验七 4. 输入并运行教材例7-7，冒泡法排序，要求掌握此算法。
*/
#include<stdio.h>
#include<stdlib.h>

#define SIZE 10


void BubbleSort(int*,int);
void Swap(int*,int*);

int main(void)
{
    int i;
    int test[SIZE]={23,56,90,67,33,88,54,89,84,12};

    for(i=0;i<SIZE;i++)
    {
        printf("%d ",test[i]);
    }

    putchar('\n');
    
    BubbleSort(test,SIZE);

    for(i=0;i<SIZE;i++)
    {
        printf("%d ",test[i]);
    }
    putchar('\n');

    system("pause");
    return 0;
}

void BubbleSort(int* array,int arraySize)
{   
    int i;
    int j;

    for(i=0;i<arraySize;i++)
    {
        for(j=1;j<arraySize-i;j++)
        {
            if(array[j-1]>array[j])
            {
                Swap(&array[j-1],&array[j]);
            }
        }
    }

    return;
}

void Swap(int* numA,int* numB)
{
    int temp;
    temp=*numA;
    *numA=*numB;
    *numB=temp;

    return;
}