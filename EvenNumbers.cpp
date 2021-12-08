#include <iostream>
using namespace std;


int main()
{
    setlocale(LC_ALL, "Rus");
    int n;
    int c = 0;
    cout << "Введите длину массива: ";
    cin >> n;
    int* a = new int[n]; 
    for (unsigned int i = 0; i < n; i++) {
        c += 2;
        a[i] = c;
    }
    for (unsigned int i = 0; i < n; i++) {
        cout << a[i] << '\n';
    }
}


