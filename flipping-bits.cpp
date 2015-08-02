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
        unsigned int n;
        cin>>n;
        unsigned int b=4294967295;
        unsigned int c = n^b;
        cout<<c<<endl;
    }
    return 0;
}
