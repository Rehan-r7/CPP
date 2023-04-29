#include<iostream>
using namespace std;
int main(){

int n;
int k=1;
cin>>n;   
    cout<<"Cell nmuber :-"<<endl; // by cell number
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=i;j++){
    
           cout<<k;
            k++;
        }
        cout<<endl;
    }

return 0;
}
