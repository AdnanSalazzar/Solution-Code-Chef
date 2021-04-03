#include<iostream>
using namespace std ;
int main()
{

    int a[3];
    int i ;



    for(i = 0 ; i < 3 ; i++)
    {
        cin >> a[i];
    }

    if(a[0] == a[1] || a[0] == a[2] || a[1] == a[2])
        cout << "YES" <<endl;

    else
        cout << "NO" <<endl;



    return 0 ;


}
