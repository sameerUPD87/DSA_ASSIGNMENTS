#include <bits/stdc++.h>
using namespace std;

bool powof2(int n, int p){
    if(p > n){
        return false;
    }
    
    if(p == n){
        return true;
    }
    
    return powof2(n, p*2);
    
    
}

int main() {
    int n;
    cout<<"ENTER NUMBER: ";
    cin>>n;
    int p = 2;
    
    if(powof2(n, p)){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    

    return 0;
}
