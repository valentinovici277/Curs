#include <iostream>
using namespace std;

int main()
{
    int n,i;
    cin>>n;
    int x[n];
    for(i=0;i<n; i++) {
        cin>>x[i];
    }
    for(i=0; i<n; i++){
        cout<<x[i]<<" ";
    }

    return 0;
}