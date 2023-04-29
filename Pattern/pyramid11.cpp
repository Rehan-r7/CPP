#include<iostream>
using namespace std;
int main(){

int n;
cin>>n;
cout<<"Inverted Left-Half(number increasing) :- "<<endl;
for(int i = 1;i<=n;i++){
    for (int k = 1; k <=i-1; k++)
    {
        cout<<" ";    
    }
   int k = i;
    for(int j = 1;j<=n-i+1;j++)
    {
       cout<<k;
       k++;
    }
   
      cout<<endl;
}
  return 0;
}    
