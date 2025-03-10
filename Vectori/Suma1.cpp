#include <iostream>
using namespace std;
/*
Sa se faca suma a n numere reale dintr-un vector. (vectorul contine doar numere reale)
*/
int main(){

    int n;
    cin>>n;
    float v[n];
    float s=0;

    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    for(int i=0;i<n;i++)//v=[1.2,6.4,1.3] s=1.2+6.4+1.3
    {
        s=s+v[i];
    }
    cout<<s;
    return 0;
}

