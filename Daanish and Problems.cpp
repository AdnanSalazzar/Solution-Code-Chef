#include<iostream>
using namespace std ;

int main()
{
    int i , j , T ;
    cin >> T ;
    int a[10];
    int num ;
    while(T--)
    {
        for(i = 0 ; i < 10 ; i++)
        {
            cin >> a[i];

        }
        cin >> num ;


        i = 9 ;
        while( 1 )
        {
            if( num - a[i] > 0)
            {
                 num = num - a[i];
                a[i] = 0 ;

               // printf(" num = %d\n " , num );
            }

            else if ( num - a[i] <= 0)
            {

                a[i] = a[i] - num ;

                // printf("i = %d\n " , i );
                break ;
            }


            i--;
        }
/*
        for(j = 0 ; j < 10 ; j++)
        {
            printf("%d " , a[j]);
        }
        cout << endl;
*/
        i = 9 ;
        while( i >=0 )
        {
           // printf("i = %d " , i  );
            if(a[i] != 0 )
            {
                cout << i+1 <<endl;
                break ;
            }
            else if(i == 0)
            {
                cout << i+1 <<endl;
            }

            i--;
        }
    }
    return 0 ;
}
