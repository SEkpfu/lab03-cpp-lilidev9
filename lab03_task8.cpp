#include <iostream>

using namespace std;
int main()
{
    int x = 0, n; // 0-белые 1-черные
    cout << "Введите n, размер поля \n";
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int k = 1; k <= n; k++){
            cout << x;
            x = (x + 1)%2;
        }
        cout << "\n";
        x = (x+1)%2;
    }
    return 0;
}