#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
        int n ;
        cin >> n ;
        int arr[n];
        for(int i = 0 ; i < n ; i++)
        {
            cin >> arr[i];
        }
        int c = 0 ;
        for(int i = 0 ; i < n ; i++)
        {
            c++;
            for(int j = i + 1 ; j < n ; j++)
            {
                if(arr[j]>=arr[j - 1])
                {
                    c++;
                }
                else
                {
                    break;
                }
            }
        }
        cout << c << endl;
    }
    return 0;
}
