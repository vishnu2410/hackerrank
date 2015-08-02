#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string str1,str2;
    cin>>str1;
    cin>>str2;
    int a[26]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int i,t=0;
    for(i=0;i<str1.length();i++)
        a[str1[i]-'a']++;
    for(i=0;i<str2.length();i++)
    {
        if(a[str2[i]-'a']>0)
            a[str2[i]-'a']--;
        else
            t++;
        
    }
    for(i=0;i<26;i++)
    {
        t +=a[i];
    }
    
    cout<<t<<endl;
    return 0;
}
