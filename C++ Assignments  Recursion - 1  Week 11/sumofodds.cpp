#include <bits/stdc++.h>
using namespace std;

int sumofodds(int a, int b, int s){
    if(a == b){
        if(b % 2 != 0){
            s += b;
        }
        return s;
    }
    if(a % 2 != 0){
        s += a;
        s = sumofodds(a + 1, b, s);
    }
    else{
        s = sumofodds(a + 1, b, s);
    }
    
    return s;
    
    
}

int main() {
    int a, b;
    cout<<"ENTER a: ";
    cin>>a;
    cout<<"ENTER b: ";
    cin>>b;
    int s = sumofodds(a, b, 0);
    cout<<s;
    

    return 0;
}
