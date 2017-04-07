#include<bits/stdc++.h>

using namespace std;

int main()
{

    int test,cs=1;

    cin>>test;

    getchar();



    while(test--)
    {
        string str;

        stack<string>current, backward;


        current.push("http://www.lightoj.com/");

        cout<<"Case "<<cs++<<":"<<endl;


        while((cin>>str)&&(str!="QUIT"))
        {


            if(str=="VISIT")
            {
                cin>>str;

                current.push(str);

                    while(!backward.empty())
                    {
                        backward.pop();
                    }



                cout<<current.top()<<endl;
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
                if(backward.size()>=1)
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