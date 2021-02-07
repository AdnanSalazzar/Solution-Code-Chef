#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int N , i  , j ;

    cin >> N ;

    for(i = 10 ; i > 0 ; i--)
    {
        if(N % i == 0 )
        {
            cout << i <<endl;
            break;
        }
    }
    return 0 ;
}
