/*
实验七 8．磁力数：6174 和 495。社会现象和自然现象都有磁力存在，在数字运算中也存在着一种磁力。请随便写出一个四位数，数字不要完全相同，
按照从大到小的顺序重新排列，得到一个数（称为降序数），然后把它颠倒一下，得到另一个数（称为升序数），求出这两个数的差（即降序数减升序数）。
这样反复做下去，最后得到的数一定是6174。对于6174再按上面的步骤做一次，结果还是6174。仿佛 6174 这个数具有强大的磁力，
能吸引一切数，而它就像所有数字的核心。现举两个实例。

例1，初始四位数为 1645，验证过程如下：



例2，初始四位数为 1211，验证过程如下：



这不是掉进 6174 里了吗? 注意第2个例子的第一个计算表达式，两个4位数相减得到3位数999，但验证过程必须将结果看成4位数0999（因为初始值是4位数），进行下一轮计算。

四位数有这种现象，三位数也有，那个数就是 495。试编写程序验证上述现象。

验证过程比较复杂，可采用模块化程序设计方法，需要编写一系列模块（即函数），每个模块实现一个独立的完整的需反复调用的功能。程序所需要编写的函数及算法提示如下：

（1）编一函数求出整数 n 的十进制数位数，并作为函数返回值。

int getbits(int n);

（2）编一函数将一整数 n 分解为k位数字，存入整型数组 a[] 中，

void split(int a[], int n, int k);

例如：已知k=4,n=789，则结果a[0]=9,a[1]=8,a[2]=7,a[3]=0。

注意参数k的设置是为了保持验证过程数值位数的一致性，即若初始输入的数为四位数，则在验证过程中必须要保证一直处理的都是四位数。例如上述第2个例子第1行计算结果999为3位数，即n为999，由于初始数据1211为4位数，即k=4，因此必须将n（999）分解为k位数（0、9、9、9）。

（3）编一函数将一具有 k个元素的整型数组a[]的元素按降序排序。

void sortd(int a[], int k);

（4）编一函数将一具有 k个元素的整型数组a[]的元素逆向存放。

void reverse(int a[], int k);

（5）编一函数将一具有 k个元素的整型数组a[]的元素，按a[0]为最高位，a[k-1]为最低位，组合成一个整数，作为函数的返回值。

int combine(int a[], int k);

例如：若 k=4, a[0]=3, a[1]=5, a[2]=1, a[3]=9 则返回整数 3519。

（6）在主函数中，输入一个四位数（或三位数），通过调用上述函数，将验证过程输出。

主函数算法提示：

定义变量并赋初值oldn = -1，oldn表示前一个表达式的计算结果n

任意输入一个四位或三位数n，注意各位数字不能相同；

调用getbits()函数得到n的位数k；

当n≠oldn时，做如下循环：

{

    oldn=n；

    将n分解成k位数存入数组a[]中；

    将有k个元素的数组a[]排成降序；

    将a[]中元素合并成一个整数n1（降序数）

    将数组a[]逆置；

    将a[]中元素合并成另一个整数n2（升序数）；

    n=n1-n2；

    按格式输出n1-n2=n；

}

*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int GetDigit(int);
void Split(int*, int ,int);
void Sortd(int*, int);
void Reverse(int*, int);
int Combine(int*, int);
void Swap(int*,int*);

int main(void)
{
    int startNum;
    int numA=0,numB=0;
    int oldNum=-1;
    int digit;
    int array[4];
    
    printf("请输入三位或者四位数：");
    scanf("%d",&startNum);

    digit=GetDigit(startNum);
    
    while(oldNum!=startNum)
    {
        oldNum=numA-numB;

        Split(array,startNum,digit);
        Sortd(array,digit);
        numA=Combine(array,digit);
        Reverse(array,digit);
        numB=Combine(array,digit);

        startNum=numA-numB;

        printf("%d-%d=%d \n",numA,numB,startNum);
    

    }

    system("pause");
    return 0;



}

int GetDigit(int num)
{
    int digit=1;
    
    while(num/10!=0)
    {
        digit++;
        num/=10;
    }

    return digit;
}

void Split(int* array ,int num ,int digit)
{
    int i;

    for(i=digit-1;i>=0;i--)
    {
        array[i]=num%10;
        num/=10;
    }
}

void Sortd(int* array, int digit)
{
    int i;
    int j;
    int maxNumber;
    int temp;

    for(i=0;i<digit;i++)
    {
        temp=i;
        for(j=i+1,maxNumber=array[i];j<digit;j++)
        {   
            
            if(array[j]>maxNumber)
            {
                maxNumber=array[j];//对于从数组第i+1的值到第n个值，寻找此区间的最小值
                temp=j;//存储下标
            }

        }
        if(temp!=i)//如果最小值不是数组第i个值
        {
            Swap(&array[i],&array[temp]);//交换第i个值与最小值的次序.
        }    
    }

    
}


void Reverse(int* array, int arraySize)
{
    int i;

    for(i=0;i<arraySize/2;i++)
    {
        Swap(&array[i],&array[arraySize-i-1]);
    }

}



int Combine(int* array, int arraySize)
{
    int i;
    int num=0;

    for(i=0;i<arraySize;i++)
    {
        num+=array[i]*pow(10,arraySize-i-1);
    }

    return num;
}

void Swap(int* numA,int* numB)
{
    int temp;
    temp=*numA;
    *numA=*numB;
    *numB=temp;

    return;
}