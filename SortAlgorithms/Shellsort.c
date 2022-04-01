/*
希尔排序(Shell Sort)是插入排序的一种，它是针对直接插入排序算法的改进。

希尔排序又称缩小增量排序，因 DL.Shell 于 1959 年提出而得名。

它通过比较相距一定间隔的元素来进行，各趟比较所用的距离随着算法的进行而减小，直到只比较相邻元素的最后一趟排序为止。
*/

#include<stdio.h>
#include<stdlib.h>
#define SIZE 15

int* ShellSort(int*,int);

int main(void)
{
    int test[SIZE]={23,4,67,89,23,56,43,78,34,8,3,4,6,8,9};
    int i;

    for(i=0;i<SIZE;i++)
    {
        printf("%d\t",test[i]);
    }
    putchar('\n');


    ShellSort(test,SIZE);

    for(i=0;i<SIZE;i++)
    {
        printf("%d\t",test[i]);
    }
    putchar('\n');

    system("pause");
    return 0;
}

int* ShellSort(int* array,int arraySize)
{
    int gap;
    int i;
    int j;
    int temp;

    gap=arraySize/2;//设置增量值

    while(gap>0)//增量大于1时执行代码，增量为1完成时排序完成。
    {
        for(i=0; i<arraySize/gap ; i++)
        {
            temp=array[i];
            for(j=i-gap; array[j]>temp && j>=0; j-=gap)
            {
                array[j+gap]=array[j];
            }
            array[j+gap]=temp;
        }
        gap/=2;
    }

    return array;    
}