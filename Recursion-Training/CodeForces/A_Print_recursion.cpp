#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)

using namespace std;

string iLoveRecursion(int n){
    
    if(n < 0) return "I Love Recursion";
    else return iLoveRecursion(n-1);
}

int main(){
    int n = 3;
    cout << iLoveRecursion(n) <<endl;
    return 0;
}