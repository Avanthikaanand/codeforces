#include <iostream>
 using namespace std;
 int main()
 {
	 int stops,max=0,current=0,in,out;
	 cin>>stops;
	 for(int i=1;i<=stops;i++)
	 {
		 cin>>out>>in;
		 current=current-out+in;
		 if(max<current)
		 {
			 max=current;
		 }
	 }
	 cout<<max;
	 return 0;
 }
