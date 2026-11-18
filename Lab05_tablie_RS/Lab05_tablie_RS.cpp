// Lab05_tablie_RS.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
using namespace std;

int main() { // pocz¹tek main()
    /*
    // tabliczka mno¿enia
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            cout << i * j << "\t";
        }
        cout << endl;
    }
    */

    /*
    // zadanie 1
    const int tableSize = 10;
    int tab[tableSize];
    for (int i = 0; i < 10; i++) {
        cin >> tab[i];
    }
    for (int i = 9; i >= 0;  i--) {
        cout << tab[i] << "\n";
    }
    */

    // zadanie 2
    int n;
    cout << "Podaj wielkosc tablicy: ";
    cin >> n;
    int* table = new int[n];
    table[0] = 0;
    table[1] = 1;
    cout << table[0] << endl;
    cout << table[1] << endl;
    for (int i = 2; i < n; i++) {
        table[i] = table[i - 1] + table[i - 2];
        cout << table[i] << endl;
    }
    return 0;
} // koniec main()