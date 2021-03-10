#include <iostream>
 #include <cstring>
 using namespace std;
 int main()
 {
	 int l=0,u=0;
	 string word;
	 cin>>word;
	 for(int i=0;i<word.length();i++)
	 {
		 if(isupper(word[i]))
		 {
			 u++;
		 }
		 else l++;
	 }
	 if(u>l)
	 {
		 for(int i=0;i<word.length();i++)
		 {
			 word[i]=toupper(word[i]);
		 }
		 
	 }
	 else
	 {
		 for(int i=0;i<word.length();i++)
		 {
			 word[i]=tolower(word[i]);
		 }
	 }
	 cout<<word;
	 return 0;
 }
			 
