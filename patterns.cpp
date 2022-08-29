#include<iostream>
using namespace std;

//program of half tringle
int main(){
    int n;
    cout<<"enter the no. of rows : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;

}

int main(){
    int n;
    cout<<"enter no. of rows : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int s=1;s<=n-i;s++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}

//program of pyramid
int main(){
    int n;
    cout<<"enter the no. of rows : ";
    cin>>n;
    for(int i=1; i<=n;i++){
        for(int s=1;s<=n-i;s++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        for(int k=1;k<=i; k++){
            cout<<"*";
        }
        cout<<endl;

    }
    return 0;
}

int main(){
    int n;
    cout<<"enter the no. of rows : ";
    cin>>n;
    int count=1;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            cout<<count;
            count++;
        }
    cout<<endl;
    }
    return 0;
}

int main(){
    int n;
    cout<<"enter no. of rows to print squar : ";
    cin>>n;
    int count=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
    return 0;
}
