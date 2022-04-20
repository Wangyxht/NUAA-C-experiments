/*实验七 11．输入一行字符串，分别统计其中大写字母、小写字母、数字字符、空格以及其他字符出现的次数。例如，
若字符串为 "A Student & 5 Teachers."，则其中大写字母出现3次，小写字母出现13次，数字字符出现1次，空格出现4次，其他字符出现2次。

要求：用gets()输入字符串到字符数组中，然后统计并输出结果，所有的工作都在主函数中完成。*/

#include<stdio.h>
#include<stdlib.h>

#define SIZE 100

int main(void)
{
    char text[SIZE];
    int i;
    int lowerNum=0;
    int captialNum=0;
    int SpaceNum=0;
    int otherNum=0;
    int dataNum=0;

    if(gets(text)!=NULL)
    {
        for(i=0;text[i]!='\0' &&  i<SIZE ;i++)
        {
            if(text[i]>='a'&& text[i]<='z')
            {
                lowerNum++;
            }
            else if(text[i]>='A' &&  text[i]<='Z')
            {
                captialNum++;
            }
            else if(text[i]==' ')
            {
                SpaceNum++;
            }
            else if(text[i]>='0'&& text[i]<='9')
            {
                dataNum++;
            }
            else
            {
                otherNum++;
            }
        }

        printf("大写字母：%d 个\n",captialNum);
        printf("小写字母：%d 个\n",lowerNum);
        printf("数字字符数：%d 个\n",dataNum);
        printf("空格数：%d 个\n",SpaceNum);
        printf("其他字符数：%d 个\n",otherNum);                        
    }

    else
    {
        printf("Error\n");
    }

    system("pause");
    return 0;


    
}