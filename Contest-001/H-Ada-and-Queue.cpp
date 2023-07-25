
#include <bits/stdc++.h>

using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("H.in", "r", stdin);
    deque<int> fila;
    int q, n;

    cin >> q;
    while(q--){
        string s;
        cin >> s;

        if(s == "back"){

            if(!fila.empty()){
                cout <<fila.back()<<endl;
                fila.pop_back();
            }else cout <<"No job for Ada?"<<endl;

        }else if(s == "front"){
            if(!fila.empty()){
                cout <<fila.front()<<endl;
                fila.pop_front();
            }else cout <<"No job for Ada?"<<endl;
        }else if(s == "reverse"){
            reverse(fila.begin(), fila.end());
        }else if(s == "push_back"){
            cin >> n;
            fila.emplace_back(n);
        }else if(s == "toFront"){
            cin >> n;
            fila.emplace_front(n);
        }
    }


    return 0;
}
