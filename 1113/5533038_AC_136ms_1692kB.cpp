#include<bits/stdc++.h>

using namespace std;

int main()
{

    int test,cs=1;

    cin>>test;



    while(test--)
    {
        stack<string>current, backward;


        string st = "http://www.lightoj.com/";

        current.push(st);
        string str;

        printf("Case %d:\n",cs++);


        while(cin>>str)
        {

            string k;
            if(str=="QUIT")
                break;
            if(str=="VISIT")
            {
                cin>>k;


                current.push(k);
                cout<<current.top()<<endl;

                while(!backward.empty())
                {
                    backward.pop();
                }



            }
            else if(str=="BACK")
            {
                backward.push(current.top());
                current.pop();

                if(!current.empty())
                    cout<<current.top()<<endl;
                else
                {
                    cout<<"Ignored"<<endl;
                    current.push(backward.top());
                    backward.pop();
                }
            }
            else if(str=="FORWARD")
            {
                if(!backward.empty())
                {
                    current.push(backward.top());
                    backward.pop();
                    cout<<current.top()<<endl;
                }
                else
                {
                    cout<<"Ignored"<<endl;
                }
            }


        }
    }

    return 0;
}