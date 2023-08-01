#include <bits/stdc++.h>
#define ll long long
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)

using namespace std;


string flag = "NO";
int c = 0;
string palindrome(int a[], int b[], int s){
    if(s < 1) return flag;
    else{
        if(a[s -1] == b[c]) flag = "YES";
        else return "NO";
        c++;
        return palindrome(a, b, s-1);
        
    } 
}
int main(){
    fast;
    //freopen("R.in", "r", stdin);
    int n; cin>>n;
    int a[n];

    for(int i; i <n; i++)
        cin >>a[i];
    cout <<palindrome(a, a, n)<<endl;
    return 0;
}