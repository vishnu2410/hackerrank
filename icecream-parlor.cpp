#include<iostream>


using namespace std;

int main()
{
 int i, T, M, N,j,k;
    cin>>T;
    for(i=0;i<T;i++)
    {
        cin>>M;
        cin>>N;
        int a[N];
        for(j=0;j<N;j++)
        {
            cin>>a[j];
            //cout<<a[j]<<" ";
        }
       // cout<<endl;
        for(j=0;j<N;j++)
        {
            for(k=j+1;k<N;k++)
            {
                if(a[j]+a[k]==M)
                {
                    cout<<j+1<<" "<<k+1<<endl;
                    break;
                }
                                
            }
            
        }
                
    }    
    return 0;
}
