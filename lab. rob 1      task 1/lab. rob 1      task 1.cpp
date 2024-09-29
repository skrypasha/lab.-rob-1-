#include <iostream>
using namespace std;

int main()
{
    setlocale(0, ".1251");
    int length, width;
    cout << "Введiть довжину прямокутника: ";
    cin >> length;
    cout << "Введiть ширину прямокутника: ";
    cin >> width;
    int area = length * width;
    int perimeter = 2 * (length + width);
    cout << "Площа: " << area << endl;
    cout << "Периметр: " << perimeter << endl;
    double area_double = static_cast<double>(area);
    double perimeter_double = static_cast<double>(perimeter);
    cout << "Сума: " << area_double + perimeter_double << endl;
    cout << "Рiзниця: " << area_double - perimeter_double << endl;
    cout << "Добуток: " << area_double * perimeter_double << endl;
    if (perimeter_double != 0) {
        cout << "Частка: " << area_double / perimeter_double << endl;
    }
    else {
        cout << "Частка: не визначена (дiлення на нуль)" << endl;
    }

    cout << "Адреса змiнної length: " << &length << endl;
    cout << "Адреса змiнної width: " << &width << endl;
    cout << "Адреса змiнної area: " << &area << endl;
    cout << "Адреса змiнної perimeter: " << &perimeter << endl;
    cout << "Адреса змiнної area_double: " << &area_double << endl;
    cout << "Адреса змнної perimeter_double: " << &perimeter_double << endl;

    return 0;
}
