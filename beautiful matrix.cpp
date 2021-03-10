#include <iostream>
   #include <cstring>
   #include <cmath>
using namespace std;
int main()
{
int a[5][5],ans,r,c;
    for (int i=0;i<5;i++)
    {
        for (int j=0;j<5;j++)
        {
            cin>>a[i][j];
            if (a[i][j]==1)
            {
                r=i+1;
                c=j+1;
            }
        }
    }
    ans=abs(r-3)+abs(c-3);
    cout<<ans;
}
