#include<stdio.h>
#include<stdlib.h>
#define SIZE 10

int* SelectSort(int*,int);

int main(void)
{
    int test[SIZE]={23,4,67,89,23,56,43,78,34,8};
    int i;

    for(i=0;i<SIZE;i++)
    {
        printf("%d\t",test[i]);
    }
    putchar('\n');


    SelectSort(test,SIZE);

    for(i=0;i<SIZE;i++)
    {
        printf("%d\t",test[i]);
    }
    putchar('\n');

    system("pause");
    return 0;
}

int* SelectSort(int* array,int arraySize)
{
    int i;
    int j;
    int minNumber;
    int temp;

    for(i=0;i<arraySize-1;i++)
    {
        for(j=i+1,minNumber=array[i];j<arraySize;j++)
        {
            if(array[j]<minNumber)
            {
                minNumber=array[j];
                temp=j;
            }

        }
        if(temp!=i)
        {
            array[temp]=array[i];
            array[i]=minNumber;
        }    
    }

    return array;
}