#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

long int getsum(long int b)
{
    long int sum=0,n3,n5,n15,sum3,sum5,sum15;
    if(b%3==0)
    {
        n3=(b/3)-1;
    }
    else
    {
        n3=b/3;
    }
    if(b%5==0)
    {
        n5=(b/5)-1;
    }
    else
    {
        n5=b/5;

    }
    if(b%15==0)
    {
        n15=(b/15)-1;
    }
    else
    {
        n15=b/15;
    }



    sum3= (n3)*(3+n3*3)/2;
    sum5= (n5)*(5+n5*5)/2;
    sum15= (n15)*(15+n15*15)/2;



    sum=sum3+sum5-sum15;

    return sum;
}
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t,i=0;
    scanf("%d", &t);
    int array[t];
    for(i=0;i<t;i++)
        {scanf("%ld", &array[i]);

        }


    for (i=0;i<t;i++)
        {printf("%ld\n", getsum( array[i]));}
    return 0;

}
