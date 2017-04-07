#include<bits/stdc++.h>

using namespace std;

bool contain(int arra[], int n, int m, int capacity)
{
    int s=0;

    bool flag =true;

    for(int i=0;i<n;i++)
    {
        if(s+arra[i]<=capacity)
        {
            s += arra[i];
            flag = true;
        }
        else
        {
            s = arra[i];
            flag = false;
            //cout<<"Container: "<<s<<endl;
            m--;
        }

    }



    return m>0;

}

int main()
{
    int test,cs=1;

    scanf("%d",&test);

    while(test--)
    {
        int n, m;

        scanf("%d %d",&n,&m);

        int arra[n+1];

        int low=0, high=0;
        for(int i=0;i<n;i++)
        {
            scanf("%d",arra+i);
          if(arra[i]>low)
            low = arra[i];
          high +=arra[i];

        }

        int ans;

        while(low<=high)
        {
            int mid = (low+high)/2;

            //if(low==high)
                //cout<<"-----";

            if(contain(arra,n,m,mid))
            {
                ans = mid;

                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }

        printf("Case %d: %d\n",cs++,ans);

       // cout<<'\n'<<ans<<endl;

    }
}