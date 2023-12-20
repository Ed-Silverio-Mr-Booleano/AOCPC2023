#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr)

using namespace std;

int main(){
    int n;
    string a = "";

    cin>>n;

    for(int i = 1; i <=n; ++i){
        if(i%2 == 1 ){
            if(a.empty()) a = "I hate";
            else a +=" that I hate"; 
        }
        else{
            if(a.empty()) a = "I love";
            else a += " that I love";
        }  
    }

    a += " it";
    cout <<a<<endl; 
}