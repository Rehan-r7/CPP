#include<iostream>
using namespace std;
int main(){

int n;
cin>>n;
cout<<"Left-Half Pyramid(number increasing Order) :-"<<endl;
int c =1;
for(int i = 1;i<=n;i++){
    for(int j = 1;j<=n-i;j++)
    {
       cout<<" ";
    }
    
    for (int k = 1; k <=i; k++)
    {
        cout<<c;
        c++;    
    }
      cout<<endl;
 }
  return 0;
}    
