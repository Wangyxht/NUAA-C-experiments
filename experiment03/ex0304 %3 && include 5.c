/*找出并输出1~599中能被3整除，且至少有一位数字为5的所有整数。例如15、51、513均是满足条件的整数。要求每行输出8个数，最后输出满足条件的数的个数（66个）。

(注：填写完整程序源代码，不要贴图)*/
#include<stdio.h>
#include<stdlib.h>


int main (void)
{
    int num;
    int temp;
    int counter=0;
    int judge;



    for(num=1;num<600;num++)
    {
        temp=num;
        if(temp%3==0)
        {
        
            while(temp>0)
            {
                judge=temp%10;
                if(judge==5)
                {   
                    printf("%d\t",num);
                    counter++;                        
                    if(counter % 6== 0)
                        putchar('\n');
                    break;//break is important
                }
                temp=temp/10;
                
            }

            
        }
    }
    putchar('\n');
    printf("已输出1~599中能被3整除，且至少有一位数字为5的所有整数。共计%d个结果。\n",counter);
    system("pause");
    return 0;        
        
}