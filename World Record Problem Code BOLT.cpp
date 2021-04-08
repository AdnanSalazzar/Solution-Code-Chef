#include<bits/stdc++.h>
#include<iomanip>
using namespace std ;

int main()
{

    // std:: cout << std::setprecision(2)<<std::fixed;
    double T ;

    cin >> T ;

    double a, b, c,d, res;

    while(T--)
    {
        cin >> a >> b >> c >> d;

        res = a * b * c  * d ;
        res = 100 / res ;
        //cout << res << endl;

        int ans = res * 1000;
       // printf("ans =  %d\n" , ans);

        int rem = ans % 10 ;

        if(rem >= 5)
            ans += 10;


        if(ans >= 9580)
            cout << "NO" <<endl;
        else
            cout << "YES" <<endl;


    }
    return 0 ;
}
