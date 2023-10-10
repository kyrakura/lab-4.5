// Lab_04_4.cpp
// < Цай Девід >
// Лабораторна робота № 4.5
// «Попадання» у плоску фігуру 
// Варіант 23
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

int main() {
    srand((unsigned)time(NULL));

    for (int i = 0; i < 10; i++) {
        double r, x, y;

        cout << " r = ";
        cin >> r;
        r = abs(r);

        cout << " x = ";
        cin >> x;

        cout << " y = ";
        cin >> y;

        if ((x >= 0) && (abs(x) <= r) && (y >= 0) && (abs(y) <= r)) {
            cout << "yes" << endl;
        }
        else if ((x <= 0) && (abs(x) <= r) && (y <= 0) && (abs(y) <= r)) {
            cout << "yes" << endl;
        }
        else if ((x <= 0) && (abs(x) <= r) && (y >= 0) && (abs(y) <= r) && (y <= -1 * sqrt(pow(r, 2) - pow(x + r, 2)) + r)) {
            cout << "yes" << endl;
        }
        else if ((x >= 0) && (abs(x) <= r) && (y <= 0) && (abs(y) <= r) && (y >= sqrt(pow(r, 2) - pow(x - r, 2)) - r)) {
            cout << "yes" << endl;
        }
        else
            cout << "no" << endl;
    }

    cout << endl << fixed;
    for (int i = 0; i < 10; i++) {
        double r, x, y;

        cout << " r = ";
        cin >> r;
        r = abs(r);

        x = (4 * r * rand() / RAND_MAX) - (2 * r); // Генерація випадкового x
        y = (4 * r * rand() / RAND_MAX) - (2 * r); // Генерація випадкового y

        cout << "x = " << x << ", y = " << y << " - ";

        if ((x >= -2 * r) && (x <= 2 * r) && (y >= -2 * r) && (y <= 2 * r)) {
            if ((x >= 0) && (abs(x) <= r) && (y >= 0) && (abs(y) <= r)) {
                cout << "yes" << endl;
            }
            else if ((x <= 0) && (abs(x) <= r) && (y <= 0) && (abs(y) <= r)) {
                cout << "yes" << endl;
            }
            else if ((x <= 0) && (abs(x) <= r) && (y >= 0) && (abs(y) <= r) && (y <= -1 * sqrt(pow(r, 2) - pow(x + r, 2)) + r)) {
                cout << "yes" << endl;
            }
            else if ((x >= 0) && (abs(x) <= r) && (y <= 0) && (abs(y) <= r) && (y >= sqrt(pow(r, 2) - pow(x - r, 2)) - r)) {
                cout << "yes" << endl;
            }
            else
                cout << "no" << endl;
        }
    }

    return 0;
}
