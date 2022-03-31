#include<stdio.h>
#include<stdlib.h>
#define SIZE 10

int* BullleSort(int*,int);

int main(void)
{
    int test[SIZE]={23,4,67,89,23,56,43,78,34,8};
    int i;

    for(i=0;i<SIZE;i++)
    {
        printf("%d\t",test[i]);
    }
    putchar('\n');


    BullleSort(test,SIZE);

    for(i=0;i<SIZE;i++)
    {
        printf("%d\t",test[i]);
    }
    putchar('\n');

    system("pause");
    return 0;
}

int* BullleSort(int* array,int arraySize)
{
    int i;
    int j;
    int temp;

    for(i=0;i<arraySize-1;i++)
    {
        for(j=0;j<arraySize-i-1;j++)
        {
            if(array[j]>array[j+1])
            {
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }

    return array;
}