#include <iostream>

int main(int argc, char const *argv[])
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (i % 2 == 0)
            {
                std::cout << "*";
            }
            else
            {
                std::cout << "&";
            }
        }
        std::cout << std::endl;
    }

    return 0;
}
