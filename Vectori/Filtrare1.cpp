#include <iostream>
using namespace std;
/*
Filtrare elemente
Se citesc n elemente. 
Sa se afiseze elementele pare 

*/
int main(){

    int n;
    cin>>n;
    int v[n];

    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    for(int i=0;i<n;i++)
    {
        if(v[i]%2==0)
        {
            cout<<v[i]<<" ";
        }
    }

    return 0;
}

