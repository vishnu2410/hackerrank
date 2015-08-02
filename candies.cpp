#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int i,N;
    cin>>N;
    int a[N];
    int cnt ;
    for(i=0;i<N;i++)
    {
       cin>>a[i];
    }

    if(N==1)
    {   cout<<"1"<<endl;
        return 0;
    }
    int *b = (int *)calloc(N, sizeof(int));
    b[0] = 1; 
    cnt = 1;
    for(i=1;i<N;i++)
    {
       if(a[i] > a[i-1])
       {
           b[i] = b[i-1]+1;
           cnt += b[i];
       }
       else if(a[i] < a[i-1])
       {
           b[i] = 1;
           cnt++;  
           if(b[i-1] == 1 )
           {
               int j = i;
               while(j>0 && a[j]<a[j-1] && b[j]>=b[j-1])
                {
                    b[j-1] += 1;
                    cnt++;
                    j--;
                }
           }
   
       }
       else
       {
           b[i] =  1;
           cnt++;
       }
      // cout<<"count = "<<cnt<<endl;
            
    }
    cout<<cnt<<endl;
    return 0;
}
