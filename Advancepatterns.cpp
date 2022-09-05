#include<iostream>
using namespace std;

void pattern1();
void pattern2();
void pattern3();
void pattern4();
void pattern5();
void pattern6();
void pattern7();
void pattern8();

void pattern1(){
    cout<<" A butterfly pattern "<<endl;
    int n;
    cout<<" Enter the value of rows : ";
    cin>>n;

 //upper part of the pattern
for(int i=1; i<=n;i++){
    //first half triangle
    for(int j=1; j<=i; j++){
        cout<<"*";
    }

    //Middile space triangle
    for(int s=1; s<=2*(n-i);s++){
        cout<<" ";
    }

    //other half triangle
    for(int k=1; k<=i; k++){
        cout<<"*";
    }
    cout<<endl;
}

//lower part of the pattern
for(int i=n; i>=1;i--){
    //first half triangle
    for(int j=1; j<=i; j++){
        cout<<"*";
    }

    //Middile space triangle
    for(int s=1; s<=2*(n-i);s++){
        cout<<" ";
    }

    //other half triangle
    for(int k=1; k<=i; k++){
        cout<<"*";
    }
    cout<<endl;
}

}

void pattern2(){
    cout<<" Solid Rhombus "<<endl;
    int n;
    cout<<" Enter the value of rows : ";
    cin>>n;

    for(int i=1;i<=n;i++){
        //printing spaces
        for(int s=1; s<=n-i;s++){
            cout<<" ";
        }
        //printing rhombus
        for(int j=1; j<=n; j++){
            cout<<"*";
        }
        cout<<endl;

    }

}
void pattern3(){
    cout<<" Solid hollow Rhombus "<<endl;
    int n;
    cout<<" Enter the value of rows : ";
    cin>>n;

    for(int i=1;i<=n;i++){
        //printing spaces
        for(int s=1; s<=n-i;s++){
            cout<<" ";
        }
        //printing hollow rhombus
        for(int j=1; j<=n; j++){
            if(i==1 || j==1 || i==n || j==n){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;

    }

}

void pattern4(){
    cout<<" Number pyramid "<<endl;
    int n;
    cout<<"Enter the value of rows : ";
    cin>>n;
    for(int i=1; i<=n; i++){
        
        //printing spaces
        for(int s=1; s<=n-i; s++){
            cout<<" ";
        }
        //printing pyramid
        for(int j=1; j<=i;j++){
            cout<< (i + " ");
            
        }
        cout<<endl;
    }
}

void pattern5(){
    cout<<" Number pyramid "<<endl;
    int n;
    cout<<"Enter the value of rows : ";
    cin>>n;

    for(int i=1; i<=n; i++){
        //spaces
        for(int s=1; s<=n-i; s++){
            cout<<" ";
        }
        //ist half pyramid
        for(int j=i; j>=1;j--){
            cout<<i;
        }
        //2nd half of pyramid
        for(int j=2; j<=i; j++){
            cout<<i;
        }
        cout<<endl;
    }
}

void pattern6(){
    cout<<" palindromic number pyramid "<<endl;
    int n;
    cout<<"Enter the value of rows : ";
    cin>>n;

    for(int i=1; i<=n; i++){
        //spaces
        for(int s=1; s<=n-i; s++){
            cout<<" ";
        }
        //ist half pyramid
        for(int j=i; j>=1;j--){
            cout<<j;
        }
        //2nd half of pyramid
        for(int j=2; j<=i; j++){
            cout<<j;
        }
        cout<<endl;
    }
}

void pattern7(){
    cout<<" Solid Diamond"<<endl;
    int n;
    cout<<"Enter the value of rows : ";
    cin>>n;
    //upper part
    for(int i=1; i<=n;i++){
        //spaces
        for(int s=1; s<=n-i; s++){
            cout<<" ";
        }
        //1st half
        for(int j=i; j>=1;j--){
            cout<<"*";
        }
        //2nd half
        for(int j=2; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    //iower part 
    for(int i=n; i>=1;i--){
        //spaces
        for(int s=1; s<=n-i; s++){
            cout<<" ";
        }
        //1st half
        for(int j=i; j>=1;j--){
            cout<<"*";
        }
        //2nd half
        for(int j=2; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void pattern8(){
    cout<<" mixed pattern "<<endl;
    int n;
    cout<<" Enter the value of rows : ";
    cin>>n;

    for(int i=1; i<=n;i++){
        for(int j=1; j<=i;j++){
            cout<<j;
    
        }
        int s=2*(n-i);
        for(int j=1; j<=s;j++){
            cout<<"*";
        }
        for(int j=i;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
    }
    
    for(int i=n; i>=1;i--){
        for(int j=1; j<=i;j++){
            cout<<j;
    
        }
        int s=2*(n-i);
        for(int j=1; j<=s;j++){
            cout<<"*";
        }
        for(int j=i;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
    }

}

int main(){
    int n;
    cout<<"Select the pattern to print : ";
    cin>>n;

    switch(n){
        case 1:{
            pattern1();
            break;
        }
        case 2:{
            pattern2();
            break;
        }
        case 3:{
            pattern3();
            break;
        }
        case 4:{
            pattern4();
            break;
        }
        case 5:{
            pattern5();
            break;
        }
        case 6:{
            pattern6();
            break;
        }
        case 7:{
            pattern7();
            break;
        }
        case 8:{
            pattern8();
            break;
        }
        default:{
            cout<<"Invalid operation";
        }
    }
    return 0;
}
