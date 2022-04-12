/*
实验七 2. 定义整型数组a[10000]，调用求随机数的系统库函数产生n（n≤10000）个范围在[1,10]中的随机数存入数组。然后分别统计其中1~5和6~10出现的次数及概率。

提示：

（1）随机数的产生方法参见教材例5-15。

（2）实际仅使用数组的前n个元素。

（3）多次运行该程序，每次输入n的值，观察当n等于100、1,000、10,000时统计出来的次数及概率。当n越大时，统计出来的两个概率越接近百分制五十。请按百分制形式(如49.55%)输出概率。

*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define SIZE 10000
#define RANDOMRANGE 10

int InitializeArray(int*,int);
void CheckNumber(int*,int);

int main(void)
{
    int array[SIZE];
    int targetSize;

    targetSize=InitializeArray(array,SIZE);
    CheckNumber(array,targetSize);
    system("pause");
    return 0;
}

int InitializeArray(int*array,int arraySize)
{
    int i;
    int range;
    
    printf("请输入观察对象的范围：");
    while(scanf("%d",&range)!=1 || (range<=0 || range>SIZE))
    {
        printf("输入有误，请重新输入。\n");
        printf("请输入观察对象的范围：");
        while(getchar()!='\n')
        {
            continue;
        }

    }

    srand((unsigned int)time(0));
    for(i=0;i<range;i++)
    {
        
        array[i]=(rand()%(RANDOMRANGE)+1);
    }

    return range;
}

void CheckNumber(int* array, int arraySize)
{
    int i;
    int counterSmall=0;
    int counterLarge=0;
    double possibility;

    for(i=0;i<arraySize;i++)
    {
        if(array[i]<=5)
        {
            counterSmall++;
        }
        else
        {
            counterLarge++;
        }
        
    }
    possibility=1.0*counterSmall/arraySize;
    printf("1-5出现次数：%d 概率为%.2lf%%\n",counterSmall,possibility*100);
    possibility=1.0*counterLarge/arraySize;
    printf("6-10出现次数：%d 概率为%.2lf%%\n",counterLarge,possibility*100);
}