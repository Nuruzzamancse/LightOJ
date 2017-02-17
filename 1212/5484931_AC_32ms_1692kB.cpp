#include<bits/stdc++.h>

using namespace std;

int main()
{
    int test;

    scanf("%d",&test);

    for(int i=1;i<=test;i++)
    {
        int n, m;

        deque<int> mydeque;

        scanf("%d %d",&n,&m);

        getchar();
        printf("Case %d:\n",i);
        while(m--)
        {
            string str;
            int k;
            cin>>str;

            if(str=="pushLeft"||str=="pushRight")
            {
                cin>>k;
                getchar();
            }

            if(str=="pushLeft"&&(mydeque.size()<n))
            {
                printf("Pushed in left: %d\n",k);
                mydeque.push_front(k);
            }
            else if(str=="pushRight"&&(mydeque.size()<n))
            {
                printf("Pushed in right: %d\n",k);
                mydeque.push_back(k);
            }
            else if(str=="popLeft"&&(mydeque.size()>0))
            {
                printf("Popped from left: %d\n",mydeque.front());
                mydeque.pop_front();

            }
            else if(str=="popRight"&&(mydeque.size()>0))
            {
                printf("Popped from right: %d\n",mydeque.back());
                mydeque.pop_back();

            }
            else if((str=="pushRight"&&(mydeque.size()>=n))||(str=="pushLeft"&&(mydeque.size()>=n)))
            {
               printf("The queue is full\n");
            }
            else if((str=="popLeft"&&(mydeque.size()==0))||(str=="popRight"&&(mydeque.size()==0)))
            {
                printf("The queue is empty\n");
            }
        }


    }

    return 0;
}