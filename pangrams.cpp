#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string s;
    getline(cin, s);
    int i;
    int a[26]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    for(i=0;i<s.length();i++)
    {
        if(s[i] != '\0' && s[i] > 96 )
            a[s[i]-'a']++;
        if(s[i] != '\0' && s[i] < 91)
            a[s[i]-'A']++;
            
    }
    for(i=0;i<26;i++)
    {
        if(a[i]<1)
        {
            break;
        }
    }
    if(i<26)
        cout<<"not pangram"<<endl;
    else
        cout<<"pangram"<<endl;
    return 0;
}
