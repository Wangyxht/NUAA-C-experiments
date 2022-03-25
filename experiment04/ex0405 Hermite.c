#include<stdio.h>
#include<stdlib.h>

double Hermite(double , int);

int main(void)
{
    double x;
    int n;
    double result;
    int counter=0;


    printf("请输入待计算的值x：");
    while(scanf("%lf",&x)!=1)
    {
        printf("Error,please try it again\n");
        printf("请输入待计算的值x：");
        
        while(getchar()!='\n')
        {
            continue;
        }
    }
 
    printf("请输入从0到n，即计算次数的值n：");
    while(scanf("%d",&n)!=1)
    {
        printf("Error,please try it again\n");
        printf("请输入从0到n，即计算次数的值n：");
        
        while(getchar()!='\n')
        {
            continue;
        }
    }
    
    for(counter=0;counter<=n;counter++)
    {
        result=Hermite(x,counter);
        printf("Hermite(%lf,%d)=%.2f\n",x,n,result);

    }
    

    system("pause");
    return 0;

}
double Hermite(double x ,int n)
{
    double temp;

    if(n==0)
        return 1;
    if(n==1)
        return 2*x;
    if(n>1)
        temp=2*x*Hermite(x,n-1)-2*(n-1)*Hermite(x,n-2);
        return temp;
        

}
