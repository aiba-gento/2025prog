#include <iostream>

constexpr int WIDTH = 23;
constexpr int HEIGHT = 11;

int main(int argc, char const *argv[])
{
    int center_x = WIDTH / 2;
    for (int h = 0; h < HEIGHT; h++)
    {
        for (int w = 0; w < WIDTH; w++)
        {
            if (w == center_x)
            {
                std::cout << "0";
            }
            else
            {
                std::cout << "*";
            }
        }
        std::cout << std::endl;
    }

    return 0;
}
