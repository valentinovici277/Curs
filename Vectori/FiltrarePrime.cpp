/*
Sa se afiseze toate numerele prime din vector
*/
#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int v[n];
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    for(int i=0;i<n;i++)//i=0 v[i]
    {
        int nrTotalDeDivizori = 0;//nrTotalDeDivizori=0
        for(int d=1;d<=v[i];d++)
        {
            if(v[i]%d==0)
            {
                nrTotalDeDivizori++;
            }
        }
        if(nrTotalDeDivizori==2)
        {
            cout<<v[i]<<" ";
        }
    }


    return 0;
}