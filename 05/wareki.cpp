#include <iostream>

class Wareki
{
private:
    int meiji_start = 1897 - 29;
    int meiji_end = 1912;
    int taisho_start = meiji_end;
    int taisho_end = 1926;
    int showa_start = taisho_end;
    int showa_end = 1989;
    int heisei_start = showa_end;
    int heisei_end = 2018;
    int reiwa_start = heisei_end;

    std::string meiji_str = "明治";
    std::string taisho_str = "大正";
    std::string showa_str = "昭和";
    std::string heisei_str = "平成";
    std::string reiwa_str = "令和";

public:
    void convert(int year)
    {
        if (year >= meiji_start && year < meiji_end)
        {
            std::cout << meiji_str << (year - meiji_start + 1) << "年" << std::endl;
        }
        else if (year >= taisho_start && year < taisho_end)
        {
            std::cout << taisho_str << (year - taisho_start + 1) << "年" << std::endl;
        }
        else if (year >= showa_start && year < showa_end)
        {
            std::cout << showa_str << (year - showa_start + 1) << "年" << std::endl;
        }
        else if (year >= heisei_start && year < heisei_end)
        {
            std::cout << heisei_str << (year - heisei_start + 1) << "年" << std::endl;
        }
        else if (year >= reiwa_start)
        {
            std::cout << reiwa_str << (year - reiwa_start + 1) << "年" << std::endl;
        }
        else
        {
            std::cout << "対応していない年号です。" << std::endl;
        }
    }
};

int main(int argc, char const *argv[])
{
    Wareki wareki;
    int input_year;

    std::cout << "西暦年を入力してください: " << std::flush;
    std::cin >> input_year;

    wareki.convert(input_year);

    return 0;
}