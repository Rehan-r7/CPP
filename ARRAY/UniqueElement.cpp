#include<iostream>
using namespace std;

int NonDuplicate(int A[],int n)
{
    int res= 0;
    for (int i = 0; i < n; i++)
    {
        res = res^A[i];
        cout<<i<<" "<<res<<" "<<endl;
    }
    cout<<endl;
    return res;
}
int main(){

    int A[] = {1,3,2,3,1};
    int n = 5;

    cout<<"Non Duplicate element is : "<<NonDuplicate(A,n);

return 0;
}
