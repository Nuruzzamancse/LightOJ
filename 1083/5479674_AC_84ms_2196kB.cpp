#include<bits/stdc++.h>

using namespace std;

struct Node{

    long long int height, startIndx;

    Node(long long int _height,long long  int _indx)
    {
        height = _height;
        startIndx = _indx;
    }


};

long long int GetMaxArea(int nItem, long long int Heights[])
{
    long  long int height, currentPosition, currArea,maxArea=0;

    stack<Node>stk;

    stk.push(Node(0,0));

    for(int i=0;i<=nItem;i++)
    {
        currentPosition = i + 1;

        if(i==nItem)
            height = 0;
        else
            height = Heights[i];

        Node t(height,currentPosition);

        while(stk.top().height>height)
        {

            t = stk.top();

            //cout<<stk.top().height<<' '<<stk.top().startIndx<<endl;

            stk.pop();

            currArea = t.height*(currentPosition - t.startIndx);
            //cout<<currArea<<endl;
            if(currArea>maxArea)
            {
                maxArea = currArea;
            }
        }
        stk.push(Node(height, t.startIndx));
        //cout<<stk.top().height<<' '<<stk.top().startIndx<<endl;


    }

    return maxArea;

}

int main()
{
      long long Heights[30005];

      int test, cs=1;

      scanf("%d",&test);

      while(test--)
      {
          int number;

          scanf("%d",&number);

          for(int i=0;i<number;i++)
          {
              scanf("%lld",&Heights[i]);
          }

          printf("Case %d: %lld\n",cs++,GetMaxArea(number,Heights));
      }

}