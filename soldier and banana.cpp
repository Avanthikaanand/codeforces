#include <iostream>
    #include <cmath>
    using namespace std;
    int main()
    {
		int k,n,w,sum=0;
		cin>>k>>n>>w;
		for(int i=0;i<=w;i++)
		{
			sum+=i*k;
		}
		if((n-sum)>=0)
		{
			cout<<'0'<<endl;
		}
		else
		{
			cout<<abs(n-sum)<<endl;
		}
		return 0;
	}
