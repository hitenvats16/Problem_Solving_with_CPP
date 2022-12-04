#include<iostream>

using namespace std;

void pattern1(int n);
void pattern2(int n);
void pattern3(int n);
void pattern4(int n);

int main(){
    int n;
    cout<<"Enter Value of n: ";
    cin>>n;
    pattern1(n);
    cout<<endl<<"-----------------"<<endl;
    pattern2(n);
    cout<<endl<<"-----------------"<<endl;
    pattern3(n);
    cout<<endl<<"-----------------"<<endl;
    pattern4(n);
}

void pattern1(int n){
    cout<<"Pattern 1:\n\n";
    for(int i=1; i<=n; i++){
        for(int k=1; k<=(n-i); k++) cout<<" ";
        for(int j=1; j<=i; j++){
            cout<<j;
        }
        cout<<'\n';
    }
}

void pattern2(int n){
    cout<<"Pattern 2:\n\n";
    for(int i=1; i<=n; i++){
        for(int k=1; k<=(n-i); k++) cout<<" ";
        for(int j=1; j<=i; j++){
            cout<<j<<" ";
        }
        cout<<'\n';
    }
}

void pattern3(int n){
    cout<<"Pattern 3:\n\n";
    for(int i=1; i<=n; i++){
        for(int k=1; k<=(n-i); k++) cout<<" ";
        for(int j=(n-i+1); j<=n; j++){
            cout<<j;
        }
        cout<<'\n';
    }
}

void pattern4(int n){
    cout<<"Pattern 4:\n\n";
    for(int i=1; i<=n; i++){
        int numnberOfElements = n-i+1;
        for(int j=1; j<=numnberOfElements; j++){
            cout<<j;
        }
        cout<<'\n';
    }
}

