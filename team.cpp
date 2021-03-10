#include <iostream>
        using namespace std;
        int main()
        {
                 int n;
                 cin>>n;
                 int s=0;
                 for(int i=0;i<n;i++)
                 { 
                          int m=0;
                          int ar[3];
                         for(int i=0;i<3;i++)
                         {
                              cin>>ar[i];
                              if(ar[i]==1)
                              m++;
                         }
                         if(m>=2)
                         s++;
                 }
                 cout<<s;
                 return 0;
        }
