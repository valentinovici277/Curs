/*
Sa se afiseze cifrele unui numar de la dreapta la stanga
*/
#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n!=0)
    {
        cout<<n%10<<" ";
        n=n/10;
    }

    return 0;
}
/*
n=0
3 4 3 2 4 2

PAS1:Afisam ultima cifra // cout<<n%10
PAS2:Taiem ultima cifra //n=n/10
*/