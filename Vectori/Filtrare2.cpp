#include <iostream>
using namespace std;
/*
Filtrare elemente
Se citesc n elemente. 
Sa se afiseze elemente din vector cu ultima cifra para si a penultima cifra impara
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
        if(v[i]%10%2==0 && v[i]/10%10%2==1)
        {
            cout<<v[i]<<" ";
        }
    }

    return 0;
}
