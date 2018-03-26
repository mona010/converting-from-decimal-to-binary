#include <iostream>
using namespace std;
int main()
{
    string r, s = "" ;
    int sum ;
    for (int i = 0 ; i <= 10 ; i++)
    {
        sum = i ;
        s = "" ;
        do
        {
            if ((sum%2) == 0)
            {
                s += '0' ;
                sum = sum / 2 ;
            }
            else if ((sum%2) == 1)
            {
                s += '1' ;
                sum = sum / 2 ;
            }
        }
        while (sum != 0);
        reverse(s.begin(), s.end()) ;
        cout <<"The Binary number of (" << i << ") is : " <<  s ;
        cout << endl ;
    }
    return 0;
}

