#include <bits/stdc++.h>
using namespace std;

int noofways(int n){
    if(n < 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }
    
    return noofways(n - 1) + noofways(n - 2) + noofways(n - 3);
    
    
}

int main() {
    int n;
    cout<<"ENTER NUMBER OF STAIRS: ";
    cin>>n;
    
    cout<<noofways(n);
    

    return 0;
}
