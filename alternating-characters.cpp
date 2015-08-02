#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int i,T;
    cin>>T;
    for(i=0;i<T;i++)
    {
        string a;
        cin>>a;
        int j,l= a.length(),t=0;
        for(j=1;j<l;j++)
        {
            if(a[j]==a[j-1])
                t++;
        }
        cout<<t<<endl;
    }
    return 0;
}
