

#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    for (int x = 0; x<=12; x++) {
        cout << cos(x*M_PI/6.) << endl;
    }
    return 0;
}


//ошибка при p/2 и 3p/2