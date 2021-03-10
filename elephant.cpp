#include <iostream>
 using namespace std;
 int main()
 {
	 int n;
	 cin>>n;
	 if(n<=0)
	 {
	 cout<<0;
    }
    (n%5==0)?cout<<n/5:cout<<n/5+1;
    return 0;
  }
