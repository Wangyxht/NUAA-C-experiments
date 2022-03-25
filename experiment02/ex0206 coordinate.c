/*实验四 3. 编写程序，输入平面坐标体系下的一个点坐标x和y的值，
当该点落在第1象限时输出1，落在第2象限时输出2，落在第3象限时输出3，落在第4象限时输出4；落在坐标轴或原点上，则输出5。
(注：填写完整程序源代码，不要贴图)*/

#include<stdio.h>
#include<stdlib.h>

int main (void)
{
    double x,y;
    
    printf("请输入平面直角坐标系中x y的值，用空格隔开:");
    scanf("%lf %lf",&x,&y);

    if(x==0||y==0)
    {
        printf("5\n");
    }           
    else if(x>0)
    {
        if(y>0)
            printf("1\n");
        else
            printf("4\n");
    }
    else
    {
        if(y>0)
            printf("2\n");
        else
            printf("3\n");
    }

    system("pause");
    return 0;
    

}