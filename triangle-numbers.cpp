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
        int N;
        cin>>N;
        if(N%2 == 1)
            cout<<"2"<<endl;
        else
        {
            if((N/2)%2==0)
                cout<<"3"<<endl;
            else
                cout<<"4"<<endl;
        }
            
    }
    return 0;
}
