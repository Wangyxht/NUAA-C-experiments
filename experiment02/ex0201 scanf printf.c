#include<stdio.h>
#include<stdlib.h>//Vscode开发工具，需要system("pause")暂停。

int main (void)
{
    int a ,b;
    long c ,d;
    float e,f;
    double x ,y;

    scanf(" %d,%d",&a,&b);
    scanf(" %ld,%ld",&c,&d);
    scanf(" %f,%f",&e,&f);
    scanf(" %lf,%lf",&x,&y);
 

    printf("\n");

    printf("a=%7d,b=%7d\n",a,b);
    printf("c=%10ld,d=%10ld\n",c,d);
    printf("e=%10.2f,f=%10.2f\n",e,f);
    printf("x=%lf,y=%lf\n",x,y);

    system("pause");
    return 0;

    

}