#include<stdio.h>
#include<stdlib.h>


int main (void)
{
    double  generalTrem=1;
    double  result=0;
    double  pi;
    int  counter;

<<<<<<< HEAD
    for(counter=1 ; generalTrem>1e-10 ; counter++)
=======
    for(counter=1 ; generalTrem>1e-8 ; counter++)
>>>>>>> 7f016c6ab166823257e5d84672428367410c57c8
    {
        generalTrem=1.0/(2.0*counter-1);
        
        if(counter % 2 ==0)
        {
            result=result-generalTrem;
        }
        else
        {
            result=result+generalTrem;
        }
    }

<<<<<<< HEAD
    pi=4*result;   
=======
    pi=4*result;
>>>>>>> 7f016c6ab166823257e5d84672428367410c57c8
    printf("π的值为：%lf\n",pi);

    system("pause");
    return 0;


}