#include <iostream>

int WesternToShowa(int western)
{
    if (1989 <= western && western <= 2018)
    {
        return western - 1988;
    }
    else
    {
        return 0;
    }
}

void Showa()
{
    int western;
    std::cout << "西暦を入力してください >" << std::flush;
    std::cin >> western;
    int showa = WesternToShowa(western);
    if (showa == 0)
    {
        std::cout << "その年は平成ではありません" << std::endl;
    }
    else
    {
        std::cout << "その年は平成" << showa << "年です。" << std::endl;
    }
}

int main(int argc, char const *argv[])
{
    Showa();
    return 0;
}
