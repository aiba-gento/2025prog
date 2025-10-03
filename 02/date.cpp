#include <iostream>
#include <sstream>
#include <string>

class DataProc
{
private:
    int year;
    int month;
    int day;
    int weekday;

public:
    DataProc()
    {
        year = 2025;
        month = 10;
        day = 5;
    }

    void setDate()
    {
        std::cout << "Year:";
        std::cin >> year;
        std::cout << "Month:";
        std::cin >> month;
        std::cout << "Day:";
        std::cin >> day;
        std::cout << std::endl;
    }

    std::string showSetDate()
    {
        std::stringstream sy, sm, sd;
        sy << year;
        sm << month;
        sd << day;
        return sy.str() + "/" + sm.str() + "/" + sd.str();
    }
};

int main(int argc, char const *argv[])
{
    int count = 0;
    DataProc *dp;
    dp = new DataProc();

    do
    {
        dp->setDate();
        std::cout << dp->showSetDate() << std::endl
                  << std::endl;
        count++;
    } while (count < 5);

    delete dp;
    return 0;
}
