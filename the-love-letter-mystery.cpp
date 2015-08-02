#include<stdio.h>
#include<string.h>
int pallin(char *s);


int main() {
    int i, T;
    char str[10000];
    scanf("%d", &T);
    if(T > 0) {
        for(i = 0;i<T;i++) {
            scanf("%s", str);
            if(strlen(str) < 10000)
                printf("%d\n", pallin(str));
            else
                printf("Error\n");
        }
    }
    return 0;
}
int pallin(char *s) {
    int count = 0;
    char *p = s;
    char *q = s + strlen(s) - 1;
    while(p < q) {
         int x = *p - *q;
         if(x < 0)
             x = x*(-1);
         count = count + x; 
         p++;
         q--;
    }  
    return count;
}
