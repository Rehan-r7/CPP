#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,i=0;
    int ans=0;
    cin>>n;
    while (n!= 0)
    {
        int digit = n % 10;
        if (digit == 1)
        {
            ans+= pow(2,i);
        }
        n = n/10;
        i++;
    }
    cout<<"Answer : "<<ans<<endl;
return 0;
}