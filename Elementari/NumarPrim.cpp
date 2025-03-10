#include <iostream>
using namespace std;
/*
Sa se afiseze daca numarul x este prim
->daca are 2 divizori in total 
*/
int main(){

    int x;
    cin>>x;
    int cnt=0;
    for(int d=1;d<=x;d++)//x=8 d=8 cnt=4
    {
        if(x%d==0)
        {
            cnt++;
        }
    }
    if(cnt==2)
    {
        cout<<"ESTE PRIM";
    }
    else{
        cout<<"NU ESTE PRIM";
    }
    return 0;
}


/*
x=8
[1,8]
d=8
*/