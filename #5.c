#include<stdio.h>
#include<math.h>

int answer(int n)
{
    int i,j,ans=1;
    int array[n];
    for (i=0;i<n;i++)
    {
        array[i]=i+1;
    }
   // printf("%d", n);

    for(i=n-1;i>0;i--)
    {
        for(j=i-1;j>=0;j--)
        {
            if(array[i]%array[j]==0 && array[j]!=1 &&array[i]!=1)
            {
                array[j]=1;
            }
        }
    }

    for(i=0;i<n;i++)
    {
        printf("%d\n",array[i]);
    }
    for(i=0;i<n;i++)
    {
        ans=ans*array[i];
    }
    return ans;
}


int main()
{
    int t,i;
    scanf("%d", &t);

    int arr[t];
    for(i=0;i<t;i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0;i<t;i++)
    {
        //printf("%d", arr[i]);
        printf("%d\n", answer(arr[i]));
    }
    return 0;
}
