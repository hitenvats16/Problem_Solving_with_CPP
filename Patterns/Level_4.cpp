#include<iostream>

using namespace std;

void pattern1(int n);
void pattern2(int n);
void pattern3(int n);

int main(){
    int n;
    cout<<"Enter Value of n: ";
    cin>>n;
    pattern1(n);
    cout<<endl<<"-----------------"<<endl;
    pattern2(n);
    cout<<endl<<"-----------------"<<endl;
    pattern3(n);
}

void pattern1(int n){
    cout<<"Pattern 2:\n\n";
    for(int i=1; i<=n; i++){
        for(int k=1; k<=(n-i); k++) cout<<" ";
        for(int j=i; j>=1; j--){
            cout<<"*";
        }
        for(int j=2; j<=i; j++){
            cout<<"*";
        }
        cout<<'\n';
    }
    for(int i=n; i>=1; i--){
        for(int k=1; k<=(n-i); k++) cout<<" ";
        for(int j=i; j>=1; j--){
            cout<<"*";
        }
        for(int j=2; j<=i; j++){
            cout<<"*";
        }
        cout<<'\n';
    }
}

void pattern2(int n){
    cout<<"Pattern 2:\n\n";
    for(int i=1; i<=n; i++){
        for(int k=1; k<=(n-i); k++) cout<<" ";
        for(int j=i; j>=1; j--){
            cout<<"*";
        }
        for(int j=2; j<=i; j++){
            cout<<"*";
        }
        cout<<'\n';
    }
    for(int i=n-1; i>=1; i--){
        for(int k=1; k<=(n-i); k++) cout<<" ";
        for(int j=i; j>=1; j--){
            cout<<"*";
        }
        for(int j=2; j<=i; j++){
            cout<<"*";
        }
        cout<<'\n';
    }
}

void pattern3(int n){
    cout<<"Pattern 3:\n\n";
    for(int i=1; i<=n; i++){
        for(int k=1; k<=(n-i); k++) cout<<" ";
        if(i==1){
            cout<<"*"<<endl;
            continue;
        }
        cout<<"*";
        for(int j=1; j<=((i-1)*2-1); j++){
            cout<<" ";
        }
        cout<<"*";
        cout<<'\n';
    }
    for(int i=n-1; i>=1; i--){
        for(int k=1; k<=(n-i); k++) cout<<" ";
        if(i==1){
            cout<<"*"<<endl;
            continue;
        }
        cout<<"*";
        for(int j=1; j<=((i-1)*2-1); j++){
            cout<<" ";
        }
        cout<<"*";
        cout<<'\n';
    }
}