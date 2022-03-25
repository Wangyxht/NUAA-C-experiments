#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main (void)
{
    double x1 ,y1 ,x2 ,y2 ,dist;
    int u;
    printf("请输入点A的坐标(x1,y1):");
    scanf(" (%lf,%lf)",&x1,&y1);
    printf("请输入点B的坐标(x2,y2):");
    scanf(" (%lf,%lf)",&x2,&y2);

    dist=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));

    printf("|AB|=%.2lf\n",dist);


    system("pause");
    return 0;


}