#include<iostream>
using namespace std;

//**Simple right-half pyramid
int main(){
int n;
int k=1;
cin>>n;   
    cout<<"Simple :-"<<endl;
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=i;j++){
    
           cout<<"*";
    
        }
        cout<<endl;
    }
   return 0;
}
