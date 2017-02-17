#include<bits/stdc++.h>

using namespace std;

int main()
{
    int test,cs=1;

    scanf("%d",&test);

    while(test--)
    {

        char str1[100],str2[100];

        int number1, number2,number3,number4;

        char b1[20], b2[20],b3[20],b4[20];

        scanf("%d.%d.%d.%d",&number1,&number2,&number3,&number4);
        getchar();

        //cout<<number1<<' '<<number2<<' '<<number3<<' '<<number4<<endl;

        gets(str1);


        int k=0;
        for(int i=7;i>=0;i--)
        {
            str2[k++] = ((number1>>i)&1)+'0';
        }
        str2[k++] = '.';
        for(int i=7;i>=0;i--)
        {
            str2[k++] = ((number2>>i)&1)+'0';
        }
        str2[k++] = '.';
        for(int i=7;i>=0;i--)
        {
            str2[k++] = ((number3>>i)&1)+'0';
        }
        str2[k++] = '.';
        for(int i=7;i>=0;i--)
        {
            str2[k++] = ((number4>>i)&1)+'0';
        }

     str2[k] = '\0';
     //cout<<str2<<endl;
        if(strcmp(str1,str2)==0)
            printf("Case %d: Yes\n",cs++);
        else
            printf("Case %d: No\n",cs++);
    }
}