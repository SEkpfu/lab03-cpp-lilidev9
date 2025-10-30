#include <iostream>
using namespace std;

int main()
{
    int n,k,mx=0;
    cout << "Введите натуральные числа (одно и более) \nЧтобы отказаться от ввода, введите 0 \n";
    cin >> n;

    while(n!=0){
        if(n == mx){
            k += 1;
        }

        else if(n > mx){
            mx = n;
            k = 1;
        }
        cin >> n;
    }
    
    cout << "Чисел равных максимальному " << k << ", максимальное число = " << mx << ". \n";

    return 0;
}
