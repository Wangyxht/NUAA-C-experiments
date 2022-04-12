/*
实验七 3．编写程序，首先输入n的值，然后输入n个数存入一维实型数组a，求均方差（也叫标准差 Standard Deviation），计算公式如下。



要求：编写四个函数：①input()输入数组值 ②aver()求数组平均值 ③stddev()求均方差 ④主函数。注意：前三个函数均有两个参数，
分别是一维数组名和数组元素个数。要求在主函数中定义数组，先输入n的值，然后调用①函数输入数组全体元素值，再调用③函数求均方差，
输出均方差。注意在③函数中调用②函数求数组平均值。

提示：因为n是变化的，可将数组中总元素空间定义多一点，如100个，实际只使用数组前n个元素，n≤100。

测试数据：当n为5，并且数据序列为1、2、3、4、5时，均方差为1.414214。
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

double*  Initialized(int);
double GetAverage(double* ,int);
double GetStrandDeviation(double* ,int,double);

int main(void)
{
    int numberSize;
    double average;
    double strandDeviation;
    double* array;

    printf("请输入数据的个数：");
    while (scanf("%d",&numberSize)!=1)
    {
        printf("输入有误，请重新输入数据个数:");
        while(getchar()!='\n')
        {
            continue;
        }
    }
    array=Initialized(numberSize);
    average=GetAverage(array,numberSize);
    strandDeviation=GetStrandDeviation(array,numberSize,average);

    printf("该组数据的标准差为%lf\n",strandDeviation);

    system("pause");
    return 0;
    
}

double*  Initialized(int arraySize)
{
    double* nums;
    int i;

    nums=(double*)malloc(arraySize*(sizeof(double)));

    for(i=0;i<arraySize;i++)
    {   
        printf("请输入第%d个数值：",i+1);
        while(scanf("%lf",&nums[i])!=1)
        {
            printf("输入有误，请重新输入第%d个数值：",i+1);
            while(getchar()!='\n')
            {
                continue;
            }


        }
        
    }
    return nums;

}

double GetAverage(double* array,int arraySize)
{
    int i;
    double sum=0.0;

    for(i=0;i<arraySize;i++)
    {
        sum+=array[i];
    }

    return sum/arraySize;
}
double GetStrandDeviation(double*  array,int arraySize,double average)
{
    int i;
    double sumDeviation=0;
    double standardDeviatio;
    
    for(i=0;i<arraySize;i++)
    {
        sumDeviation+=pow(fabs(array[i]-average),2);
    }

    standardDeviatio=sqrt(sumDeviation/arraySize);

    return standardDeviatio;

}