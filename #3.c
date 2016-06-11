#include<stdio.h>
#include<math.h>

int isprime( int x)
{
    int i; int flag=1;
    int y=sqrt(x);
    for(i=2;i<=y;i++)
    {
        if(x%i==0)
        {
            flag=0;
            break;
        }
    }
    return flag;
}

 int getlprime( int n)
{
    int i,largest=1;
     int a=(n)/2;
    if(isprime(n))
    {
        largest=n;
    }
    for(i=2;i<=a;i++)
    {
        if(n%i==0&&isprime(i))
        {
            largest=i;
        }
    }
    return largest;
}


int main()
{
     int n,i;
    scanf("%d",&n);
      int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }


    for(i=0;i<n;i++)
    {
        printf("%d\n", getlprime(arr[i]));
    }
}
