#include<bits/stdc++.h>

using namespace std;

int main()
{
    int test, cs=1;

    scanf("%d",&test);

    while(test--)
    {
        int mypostion,liftposition,time,temp;

        scanf("%d %d",&mypostion,&liftposition);

        if(mypostion<=liftposition)
            time = 19 + (liftposition*4);
        else if(mypostion>liftposition)
        {
            temp = mypostion - liftposition;

            liftposition = temp+mypostion;

            time = 19 + (liftposition*4);
        }

        printf("Case %d: %d\n",cs++,time);



    }

    return 0;
}