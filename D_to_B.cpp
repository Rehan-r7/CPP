#include<iostream>
#include<math.h>
using namespace std;
int D_to_B(int n)
{ 
      int ans =0,i=0;  
    while (n!=0)
    {
        int bit = n & 1;
        ans = (bit * pow(10,i)) + ans;
        n = n>>1;
        i++;
    }
    return ans;
}
int main(){

    int n;
    cin>>n;
    
    if (n<0)
    {
        n = -n;
        int ans = D_to_B(n);
        //1's compliment of answer
        int newAns = (~ans);
        //2's compliment of newAns
        newAns += 1;
        cout<<"Answer : "<<newAns<<endl; 
    }  
    else
    {   cout<<"Anser : "<<D_to_B(n);    }
return 0;
}