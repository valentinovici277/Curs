#include <iostream>
using namespace std;
/*
Sa se calculeze numarul de divizori al unui numar x
*/
int main(){

    int x;
    cin>>x;
    for(int d=1;d<=x;d++)//x=8 d=8 cnt=4
    {
        if(x%d==0)
        {
            cout<<d<<" ";
        }
    }
    return 0;
}


/*
x=8
[1,8]
d=8
*/