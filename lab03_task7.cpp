#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double n, x, y,x1, y1, x2, y2, k=1, p = 0;
    cout << "Введите количество вершин и координаты первой вершины \n";
    cin >> n >> x >> y;
    x1 = x;
    y1 = y;
    while(k<n){
        cout << "Введите координаты следующей вершины \n";
        cin >> x2 >> y2;
        p += sqrt(pow(x2-x,2) + pow(y2-y,2));
        x = x2;
        y = y2;
        k +=1;
    }
    p += sqrt(pow(x1-x,2) + pow(y1-y,2));
    cout <<"Периметр = "<< p;
    return 0;
}