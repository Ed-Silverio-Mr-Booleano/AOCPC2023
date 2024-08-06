#include <bits/stdc++.h>
using namespace std;
int sumDig(int num) {
    int sum = 0;
    num = abs(num);
    while (num > 0) {
        sum += num % 10;
        num /= 10;      
    }
    return sum;
}

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        cout<<sumDig(n)<<endl;
    }
   return 0;
}