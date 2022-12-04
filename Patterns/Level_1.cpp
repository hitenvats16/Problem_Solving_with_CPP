#include<iostream>

using namespace std;

void pattern1(int n);
void pattern2(int n);

int main(){
    int n;
    cout<<"Enter Value of n: ";
    cin>>n;
    pattern1(n);
    cout<<endl<<"-----------------"<<endl;
    pattern2(n);
}

void pattern1(int n){
    cout<<"Pattern 1:\n\n";
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout<<j;
        }
        cout<<'\n';
    }
}

void pattern2(int n){
    cout<<"Pattern 2:\n\n";
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<j;
        }
        cout<<'\n';
    }
}