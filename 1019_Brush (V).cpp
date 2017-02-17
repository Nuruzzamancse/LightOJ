#include<bits/stdc++.h>

using namespace std;

#include <cstdio>
#include <vector>
#include <queue>

using namespace std;

typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
#define INF 1000000000
int p[100004];

int main()
{

    int V,E,W,s,u,v,w,cs=1;

    vector<vii>AdjList;

    int test;

    scanf("%d",&test);

    while(test--)
    {
        scanf("%d %d",&V,&E);

        AdjList.assign(V+3,vii());

        while(E--)
        {
            scanf("%d %d %d",&u,&v,&w);


            AdjList[u].push_back(ii(v,w));
            AdjList[v].push_back(ii(u,w));

            //cout<<"Her"<<endl;
        }

            //cout<<"Here"<<endl;

        vi dist(V+5,INF);
        dist[1] = 0;

        //cout<<"Here"<<endl;

        priority_queue< ii, vector<ii>, greater<ii> > pq;

        pq.push(ii(0, 1));

        while(!pq.empty())
        {

            ii front = pq.top();
            pq.pop();

            int d = front.first, u = front.second;
            if (d > dist[u]) continue;

            for (int j = 0; j < (int)AdjList[u].size(); j++)
            {
                ii v = AdjList[u][j];
                // all outgoing edges from u
                if (dist[u] + v.second < dist[v.first])
                {
                    dist[v.first] = dist[u] + v.second;
                    //printf("%d ", u);                // relax operation
                    //cout<<v.first<<' '<<dist[v.first]<<endl;
                    pq.push(ii(dist[v.first], v.first));
                }
            }


        }
        //cout<<"Here"<<endl;

        //cout<<dist[0]<<' '<<dist[1]<<' '<<dist[2]<<endl;


        if(dist[V]==INF)
            printf("Case %d: Impossible\n",cs++);
        else
            printf("Case %d: %d\n",cs++,dist[V]);


    }

}
