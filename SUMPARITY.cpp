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

    ll T , n , a  ;

    cin >> T ;


    while(T--)
    {
        cin >> n >>  a ;

        if(a & 1 )
        {
            if(n & 1)
            {
                cout << "Odd" <<endl;
            }
            else
            {
                cout << "Even" <<endl;
            }
        }

        else
        {
            if(n == 1 ) cout<< "Even" <<endl;
            else cout << "Impossible" <<endl;
        }

    }



return 0 ;
}

