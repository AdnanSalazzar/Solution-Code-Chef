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

vector <ll> a ;

void func()
{
    for(ll i = 1; a.size() < 1001 ; i++)
    {
        if(__builtin_popcountll(i) & 1 )
            continue ;
        else
        {
            a.push_back(i) ;
        }


    }
}


int main()
{
    AMAI ;

    func() ;

    ll T , num ;

    cin >> T ;

    while(T--)
    {
        cin >> num ;


        for(ll i = 0 ; i < num ; i++)
        {
            cout << a[i] << " " ;
        }
        cout << endl;
    }


return 0 ;
}

