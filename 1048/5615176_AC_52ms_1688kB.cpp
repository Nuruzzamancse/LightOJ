#include<bits/stdc++.h>

using namespace std;

bool campsite(int camp[], int N, int capacity, int m)
{
    int sum=0;

    for(int i=0; i<N; i++)
    {
        if(sum+camp[i]<=capacity)
        {
            sum +=camp[i];
        }
        else if(sum+camp[i]>capacity)
        {
            m--;
            sum = camp[i];
        }
    }

    return m>0;

}
void campsite1(int camp[], int N, int capacity, int k)
{

   for(int i=k,j=0;i>0;i--)
   {
       int sum=0;

       for( ; N-j>=i;j++)
       {
           if(sum+camp[j]>capacity)
                break;
           sum +=camp[j];
       }

       printf("%d\n",sum);
   }

}

int main()
{
    int test,cs=1;

    scanf("%d",&test);

    while(test--)
    {
        int N, k;

        scanf("%d%d",&N,&k);

        bool flag = false;

        int camp[N+1];

        int low=0, high=0;

        for(int i=0; i<=N; i++)
        {
            scanf("%d",camp+i);

            if(low<camp[i])
                low = camp[i];
            high +=camp[i];
        }


        int middle, ans;


        while(low<=high)
        {
            middle = (low+high)/2;

            if(campsite(camp,N+1,middle,k+1))
            {
                ans = middle;
                high = middle - 1;
            }
            else
                low = middle+1;
        }

        printf("Case %d: %d\n",cs++,ans);

        campsite1(camp,N+1,ans,k+1);

    }
}