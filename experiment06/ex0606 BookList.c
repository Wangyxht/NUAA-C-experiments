/*实验八 2．图书信息列表如下，每本图书有书号、书名和价格三个属性。编程处理图书信息。



要求：

（1）定义结构体类型struct book，用于描述图书信息，包括书号（bookID，字符串）、书名（name，字符串）和价格（price，double型数值）。 

（2）编写函数void input(struct book bs[], int n); 输入n本图书的价格。

（3）编写函数double average(struct book bs[], int n); 计算n本图书的平均价格。

（4）编写函数int findMax(struct book bs[], int n)，找出价格最高的图书下标并返回。

（5）编写函数void print(struct book bs[], int n);输出n本图书信息，输出格式如上面的图书列表。

（6）编写函数void sort(struct book bs[], int n); 将n本图书按照价格排成升序。提示：本函数中实现排序算法时，比较的是图书价格，交换的是结构体元素。

（7）在主函数中定义一个类型为struct book的具有4个元素的结构体数组books[]，用上述列表的前两列中的数据初始化该数组（即初始化数组部分数据），价格将在input()函数中输入。

（8）在主函数中依次调用input()函数输入所有图书的价格；调用print()函数输出所有图书的原始信息；调用average()函数计算所有图书的平均价格，然后在主函数中输出该平均价格；
调用findMax()求出价格最高的图书的下标，然后在主函数中输出价格最高的图书的全部信息；
调用sort()函数将图书按照价格升序排序；最后再次调用print()函数输出排序后的图书信息列表。
*/
typedef struct
{
    long bookID;
    char bookName[50];
    double price;
}BookList;

#define SIZE 4

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void Input(BookList*,int);
double Average(BookList*,int);
int FindMax(BookList*,int);
void Print(BookList*,int);
void Sort(BookList*,int,int);
void SwapList(BookList*,BookList*);

int Partition(BookList*,int,int);



int main(void)
{
    BookList TestList[SIZE];
    double averagePrice;
    int maxPriceLabel;

    Input(TestList,SIZE);
    Print(TestList,SIZE);
    averagePrice=Average(TestList,SIZE);
    printf("平均价格：%lf $\n",averagePrice);
    printf("-------------------------------------------------------------------------------\n");
    
    maxPriceLabel=FindMax(TestList,SIZE);
    printf("                  最高价格图书\n");
    
    printf("%05d    ",TestList[maxPriceLabel].bookID);
    printf("%50s    ",TestList[maxPriceLabel].bookName);
    printf("%7.2lf$\n",TestList[maxPriceLabel].price);

    printf("-------------------------------------------------------------------------------\n");

    Sort(TestList,0,SIZE);
    Print(TestList,SIZE);


    system("pause");
    return 0; 
}

void Input(BookList* book, int listSize)
{
    int i;
    for(i=0;i<listSize;i++)
    {   
        printf("--------------------------------------------------\n");
        printf("            以下为第%d个数据的输入\n",i+1);
        printf("请输入图书ID：");
        while(scanf("%ld", &book[i].bookID)!=1)
        {
            printf("Error, Please try it again!\n");
            while(getchar()!='\n');
        }
        while(getchar()!='\n');

        printf("请输入图书名称：");
        while(gets(book[i].bookName)==NULL)
        {
            printf("Error, Please try it again!\n");
            while(getchar()!='\n');
        }
        printf("请输入图书价格：");        
        while(scanf("%lf", &book[i].price)!=1)
        {
            printf("Error, Please try it again!\n");
            while(getchar()!='\n');
        }
        while(getchar()!='\n');


    }
    printf("--------------------------------------------------\n");
    printf("                  输入结束\n");

    return ;
}

void Print(BookList* book,int listSize)
{
    int i;
    printf("-------------------------------------------------------------------------------\n");
    printf("                                  图书列表\n"); 
    for(i=0;i<listSize;i++)  
    {
        printf("%05d    ",book[i].bookID);
        printf("%50s    ",book[i].bookName);
        printf("%7.2lf$  ",book[i].price);

        putchar('\n');
    }
    printf("-------------------------------------------------------------------------------\n");
    return ;
}


double Average(BookList* book,int listSize)
{
    int i;
    double sum=0;

    for(i=0;i<listSize;i++)
    {
        sum+=book[i].price;
    }

    return sum/listSize;
}

int FindMax(BookList* book,int listSize)
{
    int i;
    int maxPriceLabel=0;

    for(i=0;i<listSize;i++)
    {
        if(book[maxPriceLabel].price<book[i].price)
        {
            maxPriceLabel=i;
        }
    }

    return maxPriceLabel;
}

void SwapList(BookList* bookA,BookList* bookB)
{
    BookList temp;
    
    temp=*bookA;
    *bookA=*bookB;
    *bookB=temp;
}


void Sort(BookList*book,int startlist,int endlist)
{
    int newListBorder;
    
    if(startlist<endlist)
    {
        newListBorder=Partition(book,startlist,endlist-1);

        Sort(book,startlist,newListBorder);
        Sort(book,newListBorder+1,endlist);

    }

    return;

}


int Partition(BookList* book,int startList,int endList)
{
    float pivotElement;
    int pivot; 
    int i=startList-1,j=startList;  
    
    srand((unsigned int)time(NULL));
    pivot=rand()%(endList-startList+1)+startList;    
    pivotElement=book[pivot].price;
    SwapList(&book[pivot],&book[endList]);

    


    while(j<endList)
    {
        if(book[j].price<pivotElement)
        {
            i++;
            SwapList(&book[j],&book[i]);           
        }

        j++;
    }
  
    

    SwapList(&book[endList],&book[i+1]);

    return i+1;


}