/* Sample program illustrating input/output */
#include<iostream>
using namespace std;
int main(void){

//Helpers for input and output

   int N, K, i, j, amt=0;
   cin >> N >> K;
    int C[N];
    int a[K];
    int result;
    for(i=0;i<K;i++)
        a[i]=0;
   for(i= 0; i < N; i++){
      cin >> C[i];
   }
   for(i=0;i<N;i++)
   {
       for(j=i;j<N;j++)
       {
           if(C[i]<C[j])
               swap(C[i],C[j]);           
       }      
   }
   i=0;
   while(i<N)
   {
       if(N-i>=K)
       {
         for(j=0;j<K;j++)
         {
             
             amt += C[i]*(a[j]+1);
             a[j]++;
             i++;
             
         }
           
       }
       else
       {
         for(j=N-i;j>0;j--)
         {
             amt += C[i]*(a[j]+1);
             a[j]++;
             i++;
             
         } 
           
       }
   }
   result = amt;
   
   cout << result << "\n";
   
   return 0;
}
