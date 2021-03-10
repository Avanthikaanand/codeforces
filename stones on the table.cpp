#include <iostream>
      #include <cstring>
    using namespace std;
    int main()
    {
        string s;
        int n;
        cin>>n;
        cin>>s;
        int ans=0;
        for(int i=0;i<s.size()-1;i++){
            if(s[i]==s[i+1])
                ans++;
        }
        cout<<ans<<endl;
        return 0;
    }
