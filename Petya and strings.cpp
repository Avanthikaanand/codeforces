#include<iostream>
   #include<cstring>
   
using namespace std;
 
int main()
{
   char s1[1000],s2[1000];
   cin>>s1;
   cin>>s2;
   int len=strlen(s1);
   for(int i=0;i<len;i++)
   {
	   s1[i]=tolower(s1[i]);
	   s2[i]=tolower(s2[i]);
   }
   cout<<strcmp(s1,s2);
   return 0;
} 
