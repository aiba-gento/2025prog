#include <iostream>
#include <sstream>
#include <string>

class OLTest
{
public:
    OLTest()
    {
    }

    std::string showNum(int x)
    {
        std::stringstream rr;
        rr << x;
        return "Integer :" + rr.str();
    }

    std::string showNum(double x)
    {
        std::stringstream rr;
        rr << x;
        return "Double :" + rr.str();
    }
}

int main()
{
    std::string fn, sn;
    std::cout << "Surname:";
    std::cin >> sn;
    std::cout << "Name:";
    std::cin >> fn;
    James FN(fn);
    James SN(sn);
    std::cout << fn + sn << std::endl;
    std::cout << FN + SN << std::endl;
    return 0;
}