#include<bits/stdc++.h>
using namespace std;

int countZeros(int n){
    if(n==0){
        return 0;
    }
    int ans = countZeros(n/10);
    if(n%10 == 0){
        ans+=1;
    }
    return ans;
}

int main(){
    int n;
    cin >> n;

    cout << countZeros(n);
}