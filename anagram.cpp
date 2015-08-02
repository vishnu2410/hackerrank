#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int T,i;
    cin>>T;
    for(i=0;i<T;i++)
    {
       string str;
        int cnt[26]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
       int j;
       cin>>str;
       if((str.length())%2 == 1)
       {
           cout<<"-1"<<endl;
       }
       else 
       {
            for(j=0;j<str.length()/2;j++)
            {
                cnt[str[j]-'a']++;
            }
            int k,t=0;
            for(j=str.length()/2;j<str.length();j++)
            {
                if(cnt[str[j]-'a']>0)
                    cnt[str[j]-'a']--;
                else
                    t++;
            }
            cout<<t<<endl;
       }
    }
    return 0;
}
