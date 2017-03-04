#include<bits/stdc++.h>

using namespace std;

int sliding_window(std::vector<int> & ARR, int K)
{

    int k=-1;
    deque<pair<int, int> > window,window2;
    for (int i = 0; i < ARR.size(); i++)
    {
        while (!window.empty() && window.back().first >= ARR[i])
            window.pop_back();
        while (!window2.empty() && window2.back().first <= ARR[i])
            window2.pop_back();
        window.push_back(make_pair(ARR[i], i));
        window2.push_back(make_pair(ARR[i], i));

        while(window.front().second <= i - K)
            window.pop_front();
        while(window2.front().second <= i - K)
            window2.pop_front();

        k = max(k,window2.front().first-window.front().first);
    }

    return k;
}

int main()
{
    int n,k,test;

    cin>>test;

    for(int y=1; y<=test; y++)
    {
        cin >> n >> k;
        vector<int> array;

        int i;
        for( i = 0; i < n; i++ )
        {
            int num;
            cin >> num;
            array.push_back(num);
        }
        cout<<"Case "<<y<<": "<<sliding_window(array,k)<<endl;


    }

}