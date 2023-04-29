#include<iostream>
using namespace std;

// ** Incresing row && decreasing column
int main(){
int n,k;
cin>>n;

for(int i = 1;i<=n;i++){
     k=i; 
    for(int j = 1;j<=i;j++){
      
      cout<<k<<" ";
      --k;  
    }
       cout<<"\n";
}

return 0;
}
