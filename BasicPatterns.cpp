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
void pattern9();
void pattern10();
void pattern11();
void pattern12();
void pattern13();
void pattern14();



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
    
 void pattern6(){
    int n;
    cout<<"enter the no. of rows to print : ";
    cin>>n;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            cout<<i-j+1<<" ";
        }
        cout<<endl;
    }

}

 void pattern7(){
    int n;
    cout<<"enter the no. of rows to print : ";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n;j++){
            char ch ='A'+i-1;
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
            
 void pattern8(){
    int n;
    cout<<"enter the no. of rows to print : ";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n;j++){
            char ch ='A'+j-1;
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
            
 void pattern9(){
    int n;
    cout<<"enter the no. of rows to print : ";
    cin>>n;
     char ch ='A';
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n;j++){
           
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
}
            
  void pattern10(){
    int n;
    cout<<"enter the no. of rows to print : ";
    cin>>n;
    
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i;j++){
            char ch= 'A'+i-1;
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
}
            
 void pattern11(){
    int n;
    cout<<"enter the no. of rows to print : ";
    cin>>n;
    
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i;j++){
            char ch= 'A'+j-1;
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
    
}

void pattern12(){
    int n;
    cout<<"enter no. of rows to print squar : ";
    cin>>n;
    int count=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(count<10)
            {
            cout<<count<<"  ";
            count++;
            }
            else
            {
                cout<<count<<" ";
                count++;
            }
        }
        cout<<endl;
    }
   
}

void pattern13(){
    int n;
    cout<<" Enter the value of rows : ";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            int sum= i+j;
            if(sum % 2 == 0){
                cout<<"1 ";
            }
            else{
                cout<<"0 ";
            }
           
        }
        cout<<endl;
    }
}
  
void pattern14(){
    int n;
    cout<<"Enter the value of rows : ";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(i==1 || j==1 || i ==n || j==n){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}


int main(){
    int n;
    cout<<"Select patterns from 1 to 14 : ";
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
        case 9:{
            pattern9();
            break;
        }
        case 10:{
                pattern10();
                break;
            }
        case 11:{
            pattern11();
            break;
        }
        case 12: {
            pattern12();
            break;
        }
        case 13:{
            pattern13();
            break;
        }
        case 14:{
            pattern14();
            break;
        }
            
        default:
            {
                cout<<"Invalid Option Selected";
            }
    
}
return 0;
}
