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
        int n,j;
        cin>>n;
        int a[n-1];
        for(j=0;j<n-1;j++)
        {
            cin>>a[j];    
        }
        int p=1;
        for(j=0;j<n-1;j++)
        {
            p = (p*a[j])%1234567;    
        }
        cout<<p<<endl;
        
    }
    return 0;
}
