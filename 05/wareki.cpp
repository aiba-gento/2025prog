#include <iostream>

class Wareki
{
private:
    int meiji_s = 1897 - 29;
    int meiji_f = 1912;
    int taisho_s = meiji_f;
    int taisho_f = 1926;
    int showa_s = taisho_f;
    int showa_f = 1989;
    int heisei_s = showa_f;
    int heisei_f = 2018;
    int reiwa_s = heisei_f;

    std::string meiji_str = "明治";
    std::string taisho_str = "大正";
    std::string showa_str = "昭和";
    std::string heisei_str = "平成";
    std::string reiwa_str = "令和";
};