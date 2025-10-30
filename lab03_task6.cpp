#include <iostream>
using namespace std;

int main()
{
    int n,k=0,chet=0;
    cout << "Введите целые числа (одно и более) \nЧтобы отказаться от ввода, введите 0 \n";
    cin >> n;

    for (n; n!=0 ; cin >> n){
        k+=1;
        if( (n & 1) == 0)
            chet += 1;
    }
    
    cout << "Всего чисел " << k << ", из которых чётных " << chet << ". \n";

    return 0;

}