/*
实验四 6．至少用两种算法编程实现：求1到100中的奇数之和，并输出结果。

算法提示：

（1）对循环变量1~100循环，判断循环变量若为奇数，则累加。

（2）循环变量本身就是奇数，从1变化到99，累加循环变量即可。

（3）循环变量i从1变化到50，将循环变量乘2减1后累加，即累加2i-1。

这里给出三个算法例子，若有其他算法也可以使用。同学可以思考哪个算法效率较高。

(注：填写完整程序源代码，不要贴图)

*/
//方法二：刚刚学到数组与指针，仅仅尝试一下！
#include<stdio.h>
#include<stdlib.h>
#define ARRYLEN 100

int main (void)
{
    int number[ARRYLEN];
    int counter,i;
    int result=0 ;

    for (counter=1, i=0; counter<=ARRYLEN ;counter++,i++)
    {
        *(number+i)=counter;
    }
    for(i=0;i<ARRYLEN;i+=2)
    {
        result=result+*(number+i);
    }
    printf("求1到100中的奇数之和为%d\n",result);

    system("pause");
    return 0;

    


}
