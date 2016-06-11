#include<stdio.h>
#include<math.h>

long long int sumofsquares(long long int n)
{
    long long int ans;
    ans=(n)*(n+1)*(2*n+1)/6;
    return ans;
}

long long int squareofsum(long long int n)
{
    long long int ans,base;
    base= (n)*(n+1)/2;
    ans=base*base;
    return ans;
}

 int main()
{
    long long int t,i;
    scanf("%lld", &t);
    long long int array[t];
    for(i=0;i<t;i++)
    {
        scanf("%lld", &array[i]);
    }

    for(i=0;i<t;i++)
    {
        printf("%lld\n", squareofsum(array[i])-sumofsquares(array[i]));
    }
    return 0;
}
