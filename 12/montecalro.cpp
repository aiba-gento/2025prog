#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    double bx = 1.0;
    double by = 1.0;
    int in = 0;

    srand(static_cast<unsigned int>(time(NULL)));

    for (int i = 0; i < 10000; i++)
    {
        double x = ((double)(rand() % 10001) / 10000.0) * bx;
        double y = ((double)(rand() % 10001) / 10000.0) * by;

        if (x * x + y * y <= 1.0)
        {
            in++;
        }
    }

    double s = (double)in / 10000.0;
    s *= 4.0;

    std::cout << "The area of circles with radius 1[m] ";
    std::cout.unsetf(std::ios::floatfield);
    std::cout.precision(10);
    std::cout << s << std::endl;

    return 0;
}