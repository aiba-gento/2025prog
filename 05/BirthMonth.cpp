#include <iostream>

void BirthMonth()
{
    int month;
    std::cout << "あなたは何月生まれ？>" << std::flush;
    std::cin >> month;

    if (1 <= month && month <= 12)
    {
        std::cout << "ほー、" << month << "月ですか。そうですか。" << std::endl;
    }
    else
    {
        std::cout << month << "月だって！？" << std::endl
                  << "そんな月ないわ！" << std::endl;
    }
}

int main(int argc, char const *argv[])
{
    BirthMonth();
    BirthMonth();
    return 0;
}
