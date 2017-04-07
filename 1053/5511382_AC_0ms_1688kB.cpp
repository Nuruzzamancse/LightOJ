#include<bits/stdc++.h>

using namespace std;

int main()
{
    int test;

    scanf("%d",&test);

    long long int arra[3];

    for(int i=1; i<=test; i++)
    {
        scanf("%lld %lld %lld",&arra[0],&arra[1],&arra[2]);

        sort(arra,arra+3);



        if(((arra[0]*arra[0])+(arra[1]*arra[1]))==(arra[2]*arra[2]))
            printf("Case %d: yes\n",i);
        else
            printf("Case %d: no\n",i);

    }


    return 0;
}