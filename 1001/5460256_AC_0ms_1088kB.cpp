#include <stdio.h>
 
int main()
{
    int t, n, a, b;
 
    scanf("%d",&t);
 
    while(t--)
    {
        scanf("%d", &n);
 
        if(n%2==0)
            a=b=n/2;
        else{
            a=n/2;
            b=n/2 + 1;
        }
        printf("%d %d\n", a, b);
    }
    return 0;
}