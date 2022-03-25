//实验三 3. 完善程序。
//下面的程序求一元二次方程ax2+bx+c=0的两个不等实根。
//系数a、b和c由键盘输入，且假定b2-4ac>0。要求输出的实根数据宽度为6并保留小数点后2位数。

#include<stdio.h>
#include<stdlib.h>//Vscode开发工具，需要system("pause")暂停。
#include<math.h>

int main (void)
{
    double a ,b ,c ,disc ,x1 ,x2 ,p ,q;

    printf("请分别输入ax^2+bx+c中a、b、c的值，中间以空格隔开：");
    scanf("%lf %lf %lf",&a,&b,&c);


    disc=b*b-4*a*c;

    if(disc>=0)//程序经过改造；
    {
        p=-b/2*a;
        q=sqrt(disc)/2*a;
        
        x1=p+q;
        x2=p-q;
        
        printf("x1=%.2lf\n",x1);
        printf("x2=%.2lf\n",x2);
    }
    else
    {
        printf("该二元一次方程组无解\n");
    }

    system("pause");
    return 0;

}

