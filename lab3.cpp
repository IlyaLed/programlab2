#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RU");
    const int SIZE = 10;
    int arr[SIZE];
    int arrSum = 0;
    for (int i = 0; i < SIZE; i++)
    {
        arr[i] = i + 1;
        cout <<"arr[" << i << "] = " << arr[i] << endl;    
        arrSum += arr[i];    
    }
    cout << "Сумма = " << arrSum << endl;
}
