#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N,i;
    cin>>N;
    int a[N],min1=1000,max1=0,mi;
    for(i=0;i<N;i++)
    {    
        cin>>a[i];
        if(a[i]<min1)
            min1 = a[i];
        if(a[i]>max1)
          {  max1 = a[i];
             mi = i;
          }
    }
    int cnt=0;
    while(a[mi] !=0)
    {
        cnt = 0;
        int min2=max1;
        for(i=0;i<N;i++)
        {
            if(a[i])
             {
                a[i] = a[i] - min1; 
                cnt++;
            }
            if(a[i]>0 && min2>a[i])
            {
                min2 = a[i];    
            }
        }
        min1 = min2;
        cout<<cnt<<endl;
    }
    return 0;
}
