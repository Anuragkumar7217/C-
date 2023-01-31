#include<iostream>
#include<string>
using namespace std;

void printSubs(string input,string output){
    if(input.size()==0){
        cout << output << endl;
        return;
    }
    printSubs(input.substr(1),output);
    printSubs(input.substr(1),output+input[0]);
}

int main(){
    string input;
    cin >> input;
    string output="";
    printSubs(input,output);
}