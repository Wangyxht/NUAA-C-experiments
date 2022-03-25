/*实验三 5. 编写程序，用 getchar()函数读入两个字符给c1、c2，然后分别用 putchar()函数和printf()函数输出这两个字符。并思考以下三个问题：

（1）变量 c1、c2 应定义为字符型或整型? 拟二者皆可?

（2）若要求输出c1 和c2的 ASCII 码值， 应如何处理? 用putchar()函数还是printf()函数?

（3）整型变量与字符变量是否在任何情况下都可以互相替代?如：char c1, c2; 与 int c1, c2; 是否无条件等价。*/


#include<stdio.h>
#include<stdlib.h>

int main (void)
{
    char c1,c2;
    
    printf("请输入字符：\n");
    c1=getchar();
    c2=getchar();
    putchar(c1);putchar(c2);putchar('\n');
    printf("%c%c\n",c1,c2);
    printf("ASCII:%d %d\n",c1,c2);

    system("pause");
    return 0;


}

