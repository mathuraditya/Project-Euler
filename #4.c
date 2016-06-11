#include<stdio.h>
#include<math.h>



int getnthprime(int n)
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
                return("%d\n",nth);
                break;
            }

        }

}





int canbefactored(int s)
{
    int g=s/11;


}


void check(int n)
{
    int a;
        a=n%11;
        //printf("%d", a);
        int b=n-a;
        //printf("%d", b);
        int i=b;
        //printf("%d\n",i);
        while(i>101100)
        {
            if(ispalindrome(i)&&canbefactored(i))
            {
                printf("%d\n",i);
                break;
            }
            else{i=i-11;}
        }
}

int ispalindrome(int x)
{
    int j;
    int y;

    int arr[6];
    for (j=1;j<7;j++)
    {
        y=pow(10,j);

        if(y%10!=0)
        {
            y=y+1;
        }
        //printf("%d\n", y);
        arr[6-j]=(x%y)/(y/10);

    }

    for(j=0;j<6;j++)
    {

        if(arr[j]!=arr[5-j])
        {

            return 0;
        }

    }
     return 1;
}

int main()
    {
        int t,p;
        scanf("%d", &t);
       // printf("\n%d", ispalindrome(119999));
        int n[t];
        for(p=0;p<t;p++)
        {scanf("%d",&n[p]);}



        for(p=0;p<t;p++)
        {
            check(n[p]);
        }

    }
