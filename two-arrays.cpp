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
        int j,N,K,f=0;
        cin>> N >> K;
        int a[N],b[N];
        for(j=0;j<N;j++)
            cin>>a[j];
        for(j=0;j<N;j++)
            cin>>b[j];
        sort(a,a+N);
        sort(b,b+N,greater<int>());
        for(j=0;j<N;j++)
        {
            if(a[j]+b[j] >= K)
                f++;
        }
        if(f ==  N)
            cout<<"YES" <<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
