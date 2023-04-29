#include<iostream>
using namespace std;
int main(){

int n;
int k=1;
cin>>n;   
  
    cout<<"Row number :-"<<endl; // by row number
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=i;j++){          
           cout<<i;
        }
        cout<<endl;
    }
  return 0;
}
