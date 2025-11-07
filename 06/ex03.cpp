#include <iostream>

int main(int argc, char const *argv[])
{
    int input_num;
    std::cout << "Input 1 or 2: " << std::flush;
    std::cin >> input_num;

    if (input_num != 1 && input_num != 2)
    {
        std::cout << "Invalid input!" << std::endl;
        return 0;
    }

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
                if (input_num == 1)
                {
                    std::cout << "*";
                }
                else if (input_num == 2)
                {
                    std::cout << "&";
                }
            }
        }
        std::cout << std::endl;
    }

    return 0;
}
