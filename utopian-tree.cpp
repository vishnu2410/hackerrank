#include <iostream>
using namespace std;

int height(int n) {
    int i,s=1;
    for(i=0;i<n;i++)
    {
        if(i%2==0)
            s = s*2;
        else
            s += 1;
    }
    return s;
}
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << height(n) << endl;
    }
}
