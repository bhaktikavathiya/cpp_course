#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter a number: "<<endl;
    cin>>n;
    int i = 1;
    while(i<=n){
        int j = 1;
        while(j<=n){
            cout<<"*";
            j = j + 1;
        }
        cout<<endl;
        i = i+1;
    }



    int m;
    cout<<"Enter a number: "<<endl;
    cin>>m;
    int k = 1;
    while(k<=m){
        int l = 1;
        while(l<=m){
            cout<<k;
            l = l + 1;
        }
        cout<<endl;
        k = k+1;
    }
}