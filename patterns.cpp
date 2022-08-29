#include<iostream>
using namespace std;

void pattern1();
void pattern2();
void pattern3();
void pattern4();
void pattern5();

int main(){
    int n;
    
    cout<<"Select patterns from 1 to 5: ";
    cin>>n;
    
    switch(n)
    {
        case 1:
            {
                pattern1();
                break;
            }
        case 2:
            {
                pattern2();
                break;
            }
        case 3:
            {
                pattern3();
                break;
            }
        case 4:
            {
                pattern4();
                break;
            }
        case 5:
            {
                pattern5();
                break;
            }
        default:
            {
                cout<<"Invalid Option Selected";
            }
    return 0;
}
//program of half tringle
void pattern1(){
    int n;
    cout<<"enter the no. of rows : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
   
}

void pattern2(){
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

}

//program of pyramid
void pattern3(){
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
   
}

void pattern4(){
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
   
}

void pattern5(){
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
   
}
