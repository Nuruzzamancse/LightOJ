#include<bits/stdc++.h>

using namespace std;

int main()
{
    int test,cs=1;

    scanf("%d",&test);

    while(test--)
    {
        long long int a,b;

        scanf("%lld %lld",&a,&b);

        if((a==b)&&(a==1))
            printf("Case %d: %d\n",cs++,0);
        else
        {
            int a1;
            if(a==1)
                a1=0;
            else
            {
                int k1 = (a-2)/3;
                k1++;

                a1=(a-1-k1);
            }



            int k2 = (b-1)/3;
            k2++;

            int a2=(b-k2);

            printf("Case %d: %d\n",cs++,a2-a1);

        }

    }
}

