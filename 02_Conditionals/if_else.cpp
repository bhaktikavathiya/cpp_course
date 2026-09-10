#include<iostream>
using namespace std;

int main(){
    int a;
    cin>>a;

    if(a>0){
        cout<<"a is positive" << endl;
    } else {
        cout<<"a is negative" << endl;
    }

    int p,q;
    
    cout<<"Enter the value of p " <<endl;
    cin>>p;
    cout<<"Enter the value of q " <<endl;
    cin>>q;

    if(p<q){
        cout<<"q is greater " << endl;
    } if(p>q) {
        cout<<"q is greater " << endl;
    }

    int x;
    cout<<"Enter a number: "<<endl;
    cin>>x;

    if (x>0) {
        cout<<"x is positive"<< endl;
    } else if (x<0) {
        cout<< "x is negative"<< endl;
    } else if (x=0) {
        cout<<"x is zero"<< endl;
    }

    char ch;
    cout<<"Enter a charachter"<<endl;
    cin>>ch;

    if (ch >= 'a' && ch<= 'z'){
        cout << "Lowercase";
    } else if (ch >= 'A' && ch <= 'Z'){
        cout<<"Uppercase";
    } else if (ch >= '0' && ch<= '9'){
        cout<<"Number";
    } else {
        cout << "Special charachter";
    }
    
}