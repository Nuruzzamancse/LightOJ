#include<bits/stdc++.h>

using namespace std;

int binarSearchLow(int arra[], int value, int n)
{
    int beg=0, high = n-1, ans = -1,mid;

    while(beg<=high)
    {
        mid = (beg+high)/2;
        if(arra[mid]==value)
        {
            ans = mid;
            high = mid-1;
        }
        else if(value>arra[mid])
            beg = mid+1;
        else if(value<arra[mid])
            high = mid-1;
    }

    return beg;

}
int binarSearchHigh(int arra[], int value, int n)
{
    int beg=0, high = n-1, ans = -1,mid;

    while(beg<=high)
    {
        mid = (beg+high)/2;
        if(arra[mid]==value)
        {
            ans = mid;
            beg = mid + 1;
        }
        else if(value>arra[mid])
            beg = mid+1;
        else if(value<arra[mid])
            high = mid-1;
    }

    return high;

}

int main()
{


    int test;

    scanf("%d",&test);

    for(int i=1;i<=test;i++)
    {


        int n, q;

        scanf("%d %d",&n,&q);

        int arra[n+2];

        for(int j=0;j<n;j++)
            cin>>arra[j];
        printf("Case %d:\n",i);
        while(q--)
        {
            int a, b;

            scanf("%d %d",&a,&b);

            printf("%d\n",binarSearchHigh(arra,b,n)-binarSearchLow(arra,a,n)+1);
        }
    }

}