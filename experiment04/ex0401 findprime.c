/*
实验五 1. 编写程序求出并输出100~200之间的所有素数并统计该范围内素数的个数。

要求：

（1）编写函数int isprime(int x)实现“判断一个数x是否为素数”，若是，返回“真”，否则返回“假”。

（2）其他所有工作均在主函数中完成。要求每行输出8个素数，用'\t'实现输出列对齐。最后输出素数个数。

*/
//本实验使用malloc（）、指针、数组、布尔类型加以改造使得程序更为通用。
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>

bool IsPrime(int);

int main (void)
{
    int* arrayNum;
    int startNum;
    int endNum;
    int counter;
    int arraySize;
    int primeCounter=0;

    fputs("请输入所求区域的下限：\n",stdout);
    while(scanf("%d",&startNum)!=1)
    {
        printf("Error, please try it again\n");
        fputs("请输入所求区域的下限：\n",stdout);
        
        while(getchar()!='\n')  
            continue;
    }

    fputs("请输入所求区域的上限：\n",stdout);
        while(scanf("%d",&endNum)!=1)
    {
        printf("Error, please try it again\n");
        fputs("请输入所求区域的上限：\n",stdout);
        
        while(getchar()!='\n')  
            continue;
    }

    arraySize=endNum-startNum+1;

    arrayNum=(int*)malloc(arraySize*sizeof(int));

    if(arrayNum!=NULL)
    {
        for(counter=0;counter<arraySize;counter++)
        {
            arrayNum[counter]=startNum+counter;
        }

        for(counter=0;counter<arraySize;counter++)
        {
            if(IsPrime(arrayNum[counter]))
            {
                printf("%d\t",*(arrayNum+counter));
                primeCounter++;
                if(primeCounter%8==0)
                {
                    putchar('\n');
                }
            }
        }

        putchar('\n');
        printf("%d至%d范围内有%d个素数\n",startNum,endNum,primeCounter);
        free(arrayNum);
    }
    system("pause");
    return 0;
    
}

bool IsPrime(int number)
{
    int testNumber;
    
    if(number==1)
        return false;    
    
    for(testNumber=2;testNumber<=sqrt(number);testNumber++)
    {   

        
        if(number%testNumber==0)
            return false;

    }

    return true;

}