#include<stdio.h>
#include<string.h>


int main() {
    int i, N;
    scanf("%d", &N);
    if(N <= 100) {
        char str[100];
        int alpha[26] ={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
        int count = 0;
        for(i = 0; i < N; i++) {
            scanf("%s", str);
            int al[26] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
            int j, k;
            for(k=0;k<strlen(str);k++) {
                al[str[k] - 97] = 1;
            }
            for(j=0;j<26;j++)
                alpha[j] = alpha[j] + al[j];        
        
        }
        for(i =0;i<26;i++) {
            if(alpha[i] == N)
                count++;
        
        }  
        printf("%d\n", count);
    }
    else
        printf("Error\n");
    return 0;
}
