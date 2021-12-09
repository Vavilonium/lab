#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    int n;
    cout << "Введите число до которого нужно искать простые числа: ";
    cin >> n;
    int *a = new int[n + 1];
    for (int i = 0; i <= n; i++)
        a[i] = i;
    for (int i = 2; i * i <= n; i++)
    {
        if (a[i])
            for (int j = i * i; j <= n; j += i)
                a[j] = 0;
    }
    for (int i = 2; i < n; i++)
    {
        if (a[i])
        {
            cout << a[i] << ' ';
        }
    }
}

