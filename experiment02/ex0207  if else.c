/*实验四 4. 编写程序，输出提示信息“请输入考核等级(A~E)：”，
然后接受从键盘上输入的五级计分制成绩等级（A~E）并将其转换成对应的分数段输出，
注意若用户输入小写a则等同于大写A处理，其余类推。转换规则为：若输入A或a，则输出90~100；若输入B或b，则输出80~89；若输入C或c，则输出70~79；若输入D或d，则输出60~69；若输入E或e，则输出0~59。若输入其他字母等级，则输出error。

用if语句实现或switch语句都可以。(注：填写完整程序源代码，不要贴图)*/

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main(void)
{
    char level;
    
    printf("请输入考核等级（A-E）:");
    
    level=toupper(getchar());
    while(getchar()!='\n')
    {
        continue;
    }

    while (level <'A' ||  level>'E')
    {
        printf("error, please try it again.\n");
        printf("请输入考核等级（A-E）:");    
        level=toupper(getchar());
        
        while(getchar()!='\n')
        {
            continue;
        }

    
    }
    
    
    if(level=='A')
    {
        printf("90~100\n");
    }

    else if(level=='B')
    {
        printf("80~89\n");
    }
    else if(level=='C')
    {
        printf("70~79\n");       
    }
    else if(level=='D')
    {
        printf("60~69\n");
    }
    else 
    {
        printf("0~59\n");
    }

    system("pause");
    return 0;

}
