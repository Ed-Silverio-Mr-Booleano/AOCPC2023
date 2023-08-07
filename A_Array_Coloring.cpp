#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr)


using namespace std;

bool isPossibleToColor(vector<int>& array) {
    int sum1 = 0, sum2 = 0;

    for (int i = 0; i < array.size(); i++) {
        if(i == 0) sum1 +=array[i];
        else{
            if(sum1 % 2 == 1 && array[i]%2 == 0) sum1 +=array[i];
            else sum1 +=array[i];
            
            if(sum1 %2 == 1 && array[i]%2 == 1) sum1+=array[i];
            else sum2 +=array[i];
            
            if(sum1%2 == 0 && sum2%2==1) sum2+=array[i];
            else sum2+=array[i];


        }        
    }

    if(sum1%2 == 0 && sum2%2 ==  0 && sum1!=0 && sum2!= 0) return true;
    else return false;

}

int main() {
    fast;
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> array(n);

        for (int i = 0; i < n; ++i) {
            cin >> array[i];
        }

        if (isPossibleToColor(array))
            std::cout << "YES" << std::endl;
        else
            std::cout << "NO" << std::endl;
    }

    return 0;
}
