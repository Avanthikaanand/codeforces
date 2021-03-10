#include <iostream>
#include <cstring>
#include <algorithm>
 
 
using namespace std;
int t,n;
string s;
main(){
    cin>>n>>t>>s;
    while(t--){
        for(int i=0;i<n;i++){
            if(s[i]=='B' && s[i+1]=='G'){
                swap(s[i],s[i+1]);
                ++i;
            }
        }
    }
    cout<<s;
}
