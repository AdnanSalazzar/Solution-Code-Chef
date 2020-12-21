#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int T, j, num,res , i , t   ;


    cin >> T ;

    for(i = 1 ; i <= T ; i++)
    {   t =1 ;
        res = 0 ;
        cin >> num ;
        while( num != 0)
        {
            res = res + ( (num % 10)  );

             num = num /10 ;
            if(num == 0)
                break ;

            res = res * 10 ;


        }

        cout << res <<endl;

    }
return 0 ;
}
//54321
