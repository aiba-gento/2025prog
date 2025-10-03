#include <iostream>
#include <cmath>

int main(int argc, char const *argv[])
{
    double x, y, r;

    std::cout << "Length(x) = ";
    std::cin >> x;
    std::cout << "Length(y) = ";
    std::cin >> y;

    r = atan(y / x);
    std::cout << "Rad = " << r << std::endl;
    std::cout << "Deg = " << r * 180.0 / M_PI << std::endl;
    std::cout << "Sin = " << sin(r) << std::endl;
    std::cout << "Cos = " << cos(r) << std::endl;
    return 0;
}
