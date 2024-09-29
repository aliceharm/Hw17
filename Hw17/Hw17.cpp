// Hw17.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
using namespace std;


class Vector
{
private:
    double x;
    double y;
    double z;

public:
    Vector(): x(0), y(0), z(0)
    {}
    Vector(double _x, double _y, double _z): x(_x), y(_y), z(_z)
    {}

    void Show()
    {
        cout << "\n Vector : (" << x<< ", "<<y<< ", "<< z << ")\n";
    }

    void ShowSize()
    {
        cout << "\n Size vector : " << sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2)) << "\n";
    }
};


int main()
{
    Vector V;
    V.Show();
    V.ShowSize();
    double x, y, z;
    cout << "Enter x your vector "; cin >> x;
    cout << "Enter y your vector "; cin >> y;
    cout << "Enter z your vector "; cin >> z;
    Vector V2(x, y, z);
    V2.Show();
    V2.ShowSize();

}

