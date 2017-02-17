#include<bits/stdc++.h>

using namespace std;

int main()

{
    int test, cs=1;

    scanf("%d",&test);

    while(test--)
    {
        int n;

        scanf("%d",&n);

        int arra[n][3];

        for(int i=0;i<n;i++)
            for(int j=0;j<3;j++)
                scanf("%d",&arra[i][j]);

        for(int i=1;i<n;i++)
        {
            arra[i][0] += min(arra[i-1][1],arra[i-1][2]);
            arra[i][1] += min(arra[i-1][0],arra[i-1][2]);
            arra[i][2] += min(arra[i-1][0],arra[i-1][1]);
        }
        n--;

        int ans = min(min(arra[n][0],arra[n][1]),arra[n][2]);
        printf("Case %d: %d\n",cs++,ans);
    }


}