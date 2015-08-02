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
        int n,j;
        cin>>n;
        int a[n];
        for(j=0;j<n;j++)
        {
            cin>>a[j];
        }
        int mnc = 0;
        int mc = 0, mcc=0;
        
        for(j=0;j<n;j++)
        {
            mcc += a[j];
            if(mcc>=mc)
                mc = mcc;
            if(mcc < 0)
                mcc = 0;
            if(a[j]>0)
                mnc += a[j];
        }
        if(mc == 0 || mnc == 0)
        {
            int tmp=a[0];
            for(j=1;j<n;j++)
            {
                if(a[j]>tmp)
                    tmp = a[j];
            }
            cout<<tmp<<" "<<tmp<<endl;
        }
        else
            cout<<mc<<" "<<mnc<<endl;
    }
    return 0;
}
