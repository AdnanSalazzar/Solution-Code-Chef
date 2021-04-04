#include<iostream>
using namespace std ;
int main()
{
    int T ;
    int N , K , i ;

    cin >> T ;

    while(T--)
    {
        int counter = 0  ;
        bool flag = true ;
        cin >> N >> K ;

        string a;

        cin >> a ;
/*
        for(i = 1 ; i < N ; i++)
        {
            if(a[i] == '*')
            {
                counter = 1;
                break;
            }
            else counter = 0 ;

        }
*/

        for(i = 0 ; i < N ; i++)
        {
           // printf("Counter = %d\n" , counter );

            if(a[i-1] != '*' && a[i] == '*')
                counter++;

            if(a[i - 1] == '*' && a[i] == '*' )
            {
                counter++ ;
            }

            else if(a[i] != '*')
            {
                counter = 0 ;
            }

            if(counter >= K)
            {
                cout << "YES" <<endl;
                flag = false;

                break;
            }

        }

        if(flag)
        {
            cout << "NO" <<endl;

        }




    }

return 0 ;
}
