#include<stdio.h>
#include<stdlib.h>
#include<math.h>


void getprime(int n)
{
         int i;
        int k,p=1,nth=2;
        int arr[100000]={0};
        arr[0]=2;

        //printf("%d\n",n);

        for (i=3;i<1000000;i++)
        {
           //printf("%d\n",i);
            int flag=1;
            for (k=0;k<p;k++)
            {
                //printf("%d\n",p);
                if(i%arr[k]==0)
                {
                    flag=0;
                   // printf("%d",flag);
                    break;
                }
            }
            //printf("%d\n",flag);
            if(flag==1)
            {
                p=p+1;
                //printf("%d\n",p);
                arr[p-1]=i;
               // printf("%d\n",arr[p-1]);
            }
            //printf("%d\n",p);
            if(p==n)
            {
                nth=arr[n-1];
                printf("%d\n",nth);
                break;
            }

        }



}


int main()
{
    int t,i;

    //printf("hola\n");
    scanf("%d",&t);
    //printf("%d\n", t);
    int array[t];
    //printf("hola");
    for(i=0;i<t;i++)
    {
        scanf("%d",&array[i]);
        //printf("hola");
    }

    for(i=0;i<t;i++)
    {
        //printf("hello1");
        getprime(array[i]);

    }
    return 0;
}
