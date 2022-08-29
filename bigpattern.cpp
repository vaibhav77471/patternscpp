#include<iostream>
using namespace std;
int main(){
    int n;//n=5
    cin>>n;
    
    for(int i=n; i>=1;i--){
        for(int j=1; j<=i;j++){
            cout<<j;
    
        }
        int s=2*(n-i);
        for(int j=1; j<=s;j++){
            cout<<"*";
        }
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }

    return 0;
}