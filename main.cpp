#include <iostream>


using namespace std;

int main()
{
    
    int x[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    
    for ( auto i : x )
    {
        cout << i << " ";
    }
    
    cout  << endl;
    
    for ( auto i : x )
    {
        if (i % 2 == 0)
            cout << i * 10 << " ";
        else
             cout << i << " ";
    }
    
    cout  << endl;
    return 0;
}

