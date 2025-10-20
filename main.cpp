#include <iostream>
#include <cmath>
using namespace std;

// декларації функцій
void task_if38();
void task_if14();
void task_geom18();

int main() {
    int menu;
    cout << "Task number: ";
    cin >> menu;

    // перемикання між задачами
    switch (menu) {
        case 1: task_if38(); break;
        case 2: task_if14(); break;
        case 3: task_geom18(); break;
        default: cout << "Wrong task! (Only 1,2,3)" << endl;
    }

    system("pause");
    return 0;
}

// If38. Для заданого дійсного x знайти r(x):
// r(x) = x^2 - 4, якщо x < -2;
// r(x) = x, якщо -2 ≤ x ≤ 2;
// r(x) = 4, якщо x > 2.
void task_if38() {
    double x;
    cout << "************* If38 *************" << endl;
    cout << "x = ";
    cin >> x;

    if (!cin) {
        cout << "Wrong input!" << endl;
        return;
    }

    double r;
    if (x < -2)
        r = x * x - 4;
    else if (x <= 2)
        r = x;
    else
        r = 4;

    cout << "r(x) = " << r << endl;
    return;
}

// If14. Дано три числа. Вивести найменше, потім найбільше.
void task_if14() {
    double a, b, c;
    cout << "************* If14 *************" << endl;
    cout << "Enter a, b, c: ";
    cin >> a >> b >> c;

    if (!cin) {
        cout << "Wrong input!" << endl;
        return;
    }

    double minv = a, maxv = a;
    if (b < minv) minv = b;
    if (c < minv) minv = c;
    if (b > maxv) maxv = b;
    if (c > maxv) maxv = c;

    cout << "Min = " << minv << endl;
    cout << "Max = " << maxv << endl;
    return;
}

// Геометр.18. Перевірити, чи точка належить області (приклад з методички)
void task_geom18() {
    double a, b, x, y;
    cout << "************* Геометр.18 *************" << endl;
    cout << "Enter a, b: ";
    cin >> a >> b;

    if (cin.fail() || b/2 < a || a <= 0 || b <= 0) {
        cout << "Wrong data!" << endl;
        return;
    }

    cout << "Enter x, y: ";
    cin >> x >> y;
    if (!cin) {
        cout << "Wrong input!" << endl;
        return;
    }

    double R2 = a * a / 4.0;
    double xc = b / 2.0, yc = a / 2.0;
    double circle = pow(x - xc, 2) + pow(y - yc, 2);

    bool inRectExCirc = x > b/2 && x < b && y > 0 && y < a && circle > R2;
    bool inHalfCirc = circle < R2 && x < b/2;

    if (inRectExCirc || inHalfCirc)
        cout << "Точка належить області 1 (темна частина)." << endl;
    else
        cout << "Точка НЕ належить області 1." << endl;

    return;
}
