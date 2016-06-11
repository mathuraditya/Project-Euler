#include<stdio.h>
#include<math.h>

int getfib(int i)
    {
        if(i==1)
        {
            return 1;
        }
        else if (i==2)
        {
            return 2;
        }
        else return getfib(i-1)+getfib(i-2);
    }

int termsoffib(int i)
{
    int cnt,flag=0,term;
    for(cnt=1;cnt<i;cnt++)
    {
        if(getfib(cnt)>i)
        {
            flag=1;
            break;
        }
        term=cnt;
    }
    return term;
}




    int getsum(int p)
    {
        int a,sum=0;
        int i=termsoffib(p);
        for(a=2;a<=i;a++)
        {
            if((getfib(a)%2)==0)
            {
                sum = sum+ getfib(a);
            }
        }
        return sum;

    }




int main()
{
    int t,i;
    //printf("%d\n",termsoffib(10));
    scanf("%d", &t);
    int limits[t];

    for (i=0;i<t;i++)
    {
        scanf("%d",&limits[i]);
    }

    for(i=0;i<t;i++)
    {
        printf("%d\n", getsum(limits[i]));
    }






}





