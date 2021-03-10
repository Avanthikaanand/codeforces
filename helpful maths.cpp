#include <iostream>
   #include <cstring>
   #include <algorithm>
   using namespace std;
   int main()
   {
	   string s;
	   int i;
	   cin>>s;
	   sort(s.begin(),s.end());
	   for(i=(s.length()-1)/2;i<s.length()-1;i++)
	   cout<<s[i]<<"+";
	   cout<<s[i];
	   return 0;
   }
