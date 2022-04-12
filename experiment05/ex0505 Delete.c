/*
7．编写函数void output(int a[], int n)输出数组a中的n个元素。编写函数
 int deleteElement(int a[], int n, int x) 将具有n个元素的一维数组a中出现的x删除，
 重复出现的x均需删除，函数的返回值为删除x后的数组a中的实际元素个数。
 例如初始a数组中有6个元素，它们是{9,5,6,7,8,5}，删除元素5后，结果数组是{9,6,7,8}，其中有4个元素，函数返回4。

注意：函数deleteElement()要做两件工作，一是要删除元素，二是返回剩余元素个数。
编写主函数测试该功能，要求数组元素的初值采用初始化的方式给出，
然后调用函数output()输出数组的初始值，再输入待删除元素，
调用函数deleteElement()删除元素，
最后调用函数output()输出结果数组的全体元素值。
*/

#include<stdlib.h>
#include<stdio.h>

#define SIZE 6

void OutPut(int* ,int);
int DeleteElement(int*, int ,int);
void Swap(int*,int*);

int main(void)
{
    int array[SIZE]={9,5,6,7,8,5};
    int remainElement;

    OutPut(array,SIZE);

    remainElement=DeleteElement(array,SIZE,5);

    OutPut(array,remainElement);

    system("pause");
    return 0;

}   

void OutPut(int* array, int arraySize)
{
    int i=0;

    for(i=0;i<arraySize;i++)
    {
        printf("%d ",array[i]);
    }

    putchar('\n');
}

int DeleteElement(int* array,int arraySize ,int target)
{
    int i ,j ;

    for(i=0;i<arraySize;i++)
    {
        if(array[i]==target)
        {
            array[i]=-1;

            for(j=i+1;j<arraySize;j++)
            {
                Swap(&array[j-1],&array[j]);
            }

            arraySize--;
        }
    }

    return arraySize;
}

void Swap(int* numA,int* numB)
{
    int temp;
    temp=*numA;
    *numA=*numB;
    *numB=temp;

    return;
}