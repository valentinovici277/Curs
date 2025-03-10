#include <iostream>
using namespace std;
/*
Sa se faca produsul a n numere intregi
*/
int main(){

    int n;
    cin>>n;
    int v[n];
    int p=1;

    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    for(int i=0;i<n;i++)
    {
        p=p*v[i];
    }
    cout<<s;
    return 0;
}

