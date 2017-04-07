#include<bits/stdc++.h>

using namespace std;

int main()
{


    int test;
    scanf("%d",&test);

    for(int cs=1; cs<=test; cs++)
    {
        vector<int>vt;

        int m, n;

        scanf("%d%d",&n,&m);

        for(int i=0; i<n; i++)
        {
            int a;

            scanf("%d",&a);

            vt.push_back(a);
        }

        getchar();

        int sz = vt.size();
        for(int k=0; k<m; k++)
        {
            char c;

            scanf("%c",&c);

            if(c=='P')
            {
                int y, z;
                scanf("%d %d",&y,&z);

                swap(vt[y],vt[z]);
            }
            else if(c=='S')
            {

                int D;
                scanf("%d",&D);
                for(int i=0; i<sz; i++)
                    vt[i] +=D;
            }
            else if(c=='R')
            {
                reverse(vt.begin(),vt.end());
            }
            else if(c=='D')
            {

                int K;

                scanf("%d",&K);

                for(int i=0; i<sz; i++)
                    vt[i] /=K;
            }
            else if(c=='M')
            {

                int D;

                scanf("%d",&D);

                for(int i=0; i<sz; i++)
                    vt[i] *=D;
            }

            getchar();
        }
        printf("Case %d:\n",cs);

        for(int i=0; i<sz; i++)
        {
            if(i!=sz-1)
                printf("%d ",vt[i]);
            else
                printf("%d",vt[i]);
        }

        printf("\n");
    }


}