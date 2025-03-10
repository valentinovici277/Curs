#include <iostream>
using namespace std;
/*
Sa se inlocuiasca primul element par din vector cu 0
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

    /*EDITARE VECTOR    v=[3][5][0][2][1] */
    for(int i=0;i<n;i++)
    {
        if(v[i]%2==0)
        {
            v[i]=0;   
            break;
        }
    }

    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}

