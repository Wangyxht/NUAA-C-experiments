/*
实验八 1．定义一个结构体类型Point，包含数据成员x和y，它们是平面坐标体系下的坐标点（x, y）。编写如下函数：

（1）struct Point Input(); 在函数中输入一个坐标点的值，并返回该值。

（2）void Output(struct Point p); 按格式（x, y）输出坐标点的值。

（3）double Distance(struct Point p1, struct Point p2); 求出并返回坐标点p1和p2点之间的距离。

在主函数中，定义两个坐标点变量p1和p2，两次调用函数Input()输入两个坐标点的值，将函数的返回值赋值给p1和p2，继续调用函数Output()输出该两个坐标点的值，调用函数Distance()计算两点之间的距离最后输出该距离。例如坐标点（0, 0）和（1, 1）之间的距离为1.414214。

*/

typedef struct 
{
    float coordinateX;
    float coordinateY;
}Coordinate;

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

Coordinate Input(void);
void Output(Coordinate);
double Distance(Coordinate,Coordinate);

int main(void)
{
    Coordinate pointA;
    Coordinate pointB;
    double dist;

    pointA=Input();
    pointB=Input();

    Output(pointA);
    Output(pointB);
    putchar('\n');

    dist=Distance(pointA,pointB);
    printf("dist=%lf\n",dist);

    system("pause");
    return 0;
}

Coordinate Input(void)
{
    Coordinate Point;
    float x,y;

    printf("请输入坐标值：");
    while(scanf("%f,%f",&x,&y)!=2)
    {
        printf("Error, Please try it again!\n");
        while(getchar()!='\n');
    }

    Point.coordinateX=x;
    Point.coordinateY=y;

    return Point;
}

void Output(Coordinate Point)
{
    printf("(%.2f,%.2f)",Point.coordinateX,Point.coordinateY);
    return ;
}

double Distance(Coordinate PointA,Coordinate PointB)
{
    double dist;
    dist=sqrt(powf(PointA.coordinateX-PointB.coordinateX,2)+pow(PointA.coordinateY-PointB.coordinateY,2));

    return dist;
}