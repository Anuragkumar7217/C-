#include<bits/stdc++.h>
using namespace std;

void removeConsecutiveDuplicates(char input[]){
    int l=strlen(input);
    if(l==1 || l==0) return;
    if(input[0]==input[1]){
        for(int i=1; input[i]=='\0'; i++){
            input[i]=input[i+1];
        }
        removeConsecutiveDuplicates(input);
    }
    removeConsecutiveDuplicates(input+1);
}

int main(){
    char input[20];
    cin >> input;
    removeConsecutiveDuplicates(input);
    cout << input;
}