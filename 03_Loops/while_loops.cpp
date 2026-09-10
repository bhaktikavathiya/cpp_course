#include<iostream>
using namespace std;

int main(){

    //printing n numbers
    int n;
    cout<<"Enter a number: "<<endl;
    cin>>n;
    int i = 1;
    while(i<=n){
        cout<<i<<endl;
        i=i+1;
    }

   
    //printing sum of m numbers
    int m;
    int j = 1;
    cout<<"Enter a number: "<<endl;
    cin>>m;
    int sum = 0;
    while(j <= m){
        sum = sum + j;
        j = j+1;
    }
    cout<<"Value of sum is "<< sum <<endl;

    
    //printing sum of even numbers till o numbers
    int o;
    int k = 0;
    cout<<"Enter a number: "<<endl;
    cin>>o;
    int even_sum = 0;
    while(k <= o){
        even_sum = even_sum + k;
        k = k+2;
    }
    cout << "Value of sum of even numbers is " << even_sum << endl;
    

    //if the number p is prime or not
    int p;
    cout<<"Enter a number: "<<endl;
    cin>>p;
    int l = 2;
    while(l<p){

        if(p%1 == 0){
            cout << "Not prime for "<< l << endl;
        } else {
            cout << "Prime for "<< l << endl;
        }
        l = l+1;
    }

}