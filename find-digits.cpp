#include<iostream>

using namespace std;

int main()
{
    int i,T, N;
    cin>>T;
    for(i =0;i<T;i++)
    {
        int x, y,cnt=0;
        cin>>N;
        x = N;
        if(N>1 && N<10000000001)
        {
            while(x>1)
            {
                y = x%10;
                if(y && N%y == 0)
                    cnt++;
                x = x/10;    
            }
            if(x && N%x == 0)
                cnt++;
        }
        else
            cout<<"Error";
                
        cout<<cnt<<endl;
    }
       
}
