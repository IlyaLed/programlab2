#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "RU");
    int m, n;
    int arr[100][100];
    cout << "Введите количество строк (m): ";
    cin >> m;
    cout << "Введите количество столбцов (n): ";
    cin >> n;
    cout << "Введите элементы матрицы:" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
    double avg[100]; 
    for (int i = 0; i < m; i++)
    {    
        double sum = 0;
        for (int j = 0; j < n; j++) {
            sum += arr[i][j];
        }
        avg[i] = sum / n;
    }
    cout << "Средние арифметические элементов строк:" << endl;
    for (int i = 0; i < m; i++) {
        cout << "Среднее для строки " << i + 1 << ": " << avg[i] << endl;
    }

    return 0;
}
