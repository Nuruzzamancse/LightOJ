#include<bits/stdc++.h>
#include<cstdio>

using namespace std;

double Area(double x1, double x2, double x3)
{
    double s = (x1+x2+x3)/2;

    double s1 = (s-x1);

    double s2 = (s-x2);

    double s3 = (s-x3);

    double s4 = s*s1*s2*s3;

    return sqrt(s4);
}
int main()
{
    int test, cs=1;

    double ab, ac, bc, ratio1;

    scanf("%d",&test);

    while(test--)
    {


        scanf("%lf%lf%lf%lf",&ab,&ac,&bc,&ratio1);

        double area1 = Area(ab,ac,bc), area2, area;

        double start = 0,end1 = ab, previous  = -100.0,ab1,ac1,bc1;

        double middle;
        middle = (start+end1)/2.0;

        while(start<end1)
        {
            ab1 = middle;
            ac1 = (ac*middle)/ab;
            bc1 = (bc*middle)/ab;

            area2 = Area(ab1,ac1,bc1);

            area = area1-area2;

            double r = area2/area;

            if(r>=ratio1)
                end1 = middle;
            else
                start = middle;

            middle = (start+end1)/2.0;

            previous = middle - previous;

            if(previous<0)
                previous =(fabs(previous));
            if(previous<.000001)
                break;

            previous = middle;
        }
        printf("Case %d: %.10lf\n",cs++,middle);
    }

}