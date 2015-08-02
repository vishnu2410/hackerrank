#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    char str[100];
    cin>>str;
    int l = strlen(str);
    int r = floor(sqrt(l));
    int c = ceil(sqrt(l));
    if(r*c < l)
        r++;
    int cnt = 0,i,j;
    char arr[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
                while(str[cnt] == ' ')
                {
                   cnt++;    
                }
                if(str[cnt] == '\0')
                    arr[i][j] = str[cnt];
                else
                    arr[i][j] = str[cnt++];
                               
        
        }
    }
    //cout<<"rows: "<<r<<endl;
    //cout<<"cols: "<<c<<endl;
    for(i=0;i<c;i++)
    {
        for(j=0;j<r && arr[j][i] != '\0';j++)
        {
            cout<<arr[j][i];
        }
        cout<<" ";
    }
    return 0;
}
