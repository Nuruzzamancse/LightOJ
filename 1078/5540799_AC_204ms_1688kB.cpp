#include<bits/stdc++.h>

int main()
{
    int test;

    scanf("%d",&test);

    for(int cs=1;cs<=test;cs++)
    {
        int multiple, digit;

        int ans=1;
        scanf("%d %d",&multiple,&digit);

        if(digit%multiple==0)
            printf("Case %d: %d\n",cs,1);
        else
        {
            int temp = digit;

            while(temp%multiple)
            {
                ans++;
                temp = temp*10+digit;

                if(temp>=multiple)
                    temp %=multiple;

            }
            printf("Case %d: %d\n",cs,ans);
        }
    }
}