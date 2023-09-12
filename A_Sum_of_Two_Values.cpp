<<<<<<< HEAD
#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    vector<int> a(n);

    // Read array elements
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    unordered_map<int, int> indices;

    for (int i = 0; i < n; ++i) {
        int complement = x - a[i];

        // Check if the complement value exists in the indices map
        if (indices.find(complement) != indices.end()) {
            cout << indices[complement] + 1 << " " << i + 1 << endl;
            return 0;
        }

        // Store the current value and its index in the map
        indices[a[i]] = i;
    }

    cout << "IMPOSSIBLE" << endl;

    return 0;
}
=======
#include <bits/stdc++.h>
#define vii vector<pair<int, int>> 
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr)
#define all(c) (c).begin(), (c).end()


using namespace std;

int n, x;
vii a;
bool flag = false;


int main(){
    cin>>n>>x;

    for(int i = 0; i < n; ++i){
        int aux;
        cin >> aux;
        a.push_back({aux, i+1});
    }

    sort(all(a));
    int l= 0, r = n-1;
    //for(auto i : a) cout << i.first << " ";

    while(l < r){
        if(a[r].first + a[l].first == x){ 
            cout << a[r].second<< " " << a[l].second <<endl;
            flag = true;
            break;
        }
        else if(a[r].first + a[l].first > x) r--;
        else l++;
    }
    if(!flag) cout <<"IMPOSSIBLE"<<endl;
    return 0;
}
>>>>>>> 0c34527 (feat: add new problems)
