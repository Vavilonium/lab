#include <iostream>
using namespace std;
bool Simple(int N)
{
    bool rez = true;
    for (int k = 2; k <= N / 2; k++)
        if (N % k == 0) rez = false;
    return rez;
}

int main()
{
    setlocale(LC_ALL, "Rus");
    int n = 1000;
    bool leave = false;
    int* a = new int[n];
    int i = 0, number = 1;
    while (leave != true)
    {
        if (Simple(number))
        {
            a[i] = number;
            i++;
        }
        number++;
        if (i == n) leave = true;
    }
    int zapros;
    cout << "Введите кол-во запросов: ";
    cin >> zapros;
    int* mas = new int[n];
    for (int j = 0; j < zapros; j++)
    {
        int c;
        cin >> c;
        cout << "Простое число: " << a[c] << '\n';
    }
}