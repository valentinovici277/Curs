#include <iostream>
using namespace std;
/*
Filtrare elemente
Se citesc n elemente. 
Sa se afiseze cele care sunt multiplii ultimului element din vector
*/
int main(){

    int n;
    cin>>n;
    int v[n];

    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    for(int i=0;i<n;i++)//v=[4,7,8,5,2]
    {
        if(v[i]%v[n-1]==0)
        {
            cout<<v[i]<<" ";
        }
    }

    return 0;
}
