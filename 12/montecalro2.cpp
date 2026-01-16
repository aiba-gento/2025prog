#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

int main()
{
    double bx = 1.0;
    double by = 1.0;
    int in = 0;
    int a = 1;

    srand(static_cast<unsigned int>(time(NULL)));

    for (int i = 0; i < 10000; i++)
    {
        double x = ((double)(rand() % 10001) / 10000.0) * bx;
        double y = ((double)(rand() % 10001) / 10000.0) * by;

        if (std::pow(x, 2.0 / 3.0) + std::pow(y, 2.0 / 3.0) <= std::pow(a, 2.0 / 3.0))
        {
            in++;
        }
    }

    double s = (double)in / 10000.0;
    s *= 4.0;

    std::cout << "The area of asteroid: ";
    std::cout.unsetf(std::ios::floatfield);
    std::cout.precision(10);
    std::cout << s << std::endl;

    return 0;
}