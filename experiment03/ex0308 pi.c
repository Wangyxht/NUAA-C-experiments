<<<<<<< HEAD
<<<<<<< HEAD
#include<stdio.h>

#include<stdlib.h>




int main (void)

{

    double  generalTrem=1;

    double  result=0;

    double  pi;

    int  counter;



    for(counter=1 ; generalTrem>1e-8 ; counter++)

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



    pi=4*result;

    printf("π的值为：%lf\n",pi);



    system("pause");

    return 0;




}
=======
>>>>>>> 08daf5e3f525c9b72e49bc6ee13aef0a00bca065
=======
>>>>>>> 08daf5e3f525c9b72e49bc6ee13aef0a00bca065
