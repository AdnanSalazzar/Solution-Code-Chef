#include<bits/stdc++.h>
#include<list>
#include<iterator>
#include<algorithm>
#include<cmath>
#include<string.h>
#include<vector>


#define longpro int64_t ;
#define AMAI ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define MAX 1000000

using namespace std ;

int main()
{
    AMAI ;

    ll T ;

    cin >> T ;

    ll x ;

    while(T--)
    {
        cin >> x ;

        if(x & 1 )
            cout << 0 <<endl;

        else
        {
            ll counter = 0 ;
            while(x % 2 == 0 )
            {
                counter++ ;

                x =  x / 2 ;
            }
            cout << counter << endl;

        }

    }


    return 0 ;
}

