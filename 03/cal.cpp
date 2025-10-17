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

	int getSerialDay(int dy, int dm, int dd)
	{
		int d=0, y=1900, m=1;
		while(y < dy)
		{
			d=d+((y%4==0)&&(y%100!=0)||(y%400==0)?366:365);
			y++;
		}
		while(m<dm)
		{
			d=d+(m==1||m==3||m==5||m==7||m==8||m==10||m==12?31:(m!=2?30:(dy%4==0)&&(dy%100!=0)||(dy%400==0)?29:28));
			m++;
		}
		return d+dd;
	}
	void setWeekdayNum()
	{
		int d;
		d=getSerialDay(year,month,day);
		weekday=d%7;
	}
	std::string getWeekdayStr(int w)
	{
		switch(w)
		{
			case 0: return "Sunday"; break;
			case 1: return "Monday"; break;
			case 2: return "Tuesday"; break;
			case 3: return "Wednesday"; break;
			case 4: return "Thursday"; break;
			case 5: return "Friday"; break;
			case 6: return "Saturday"; break;
			default: return "N"; break;
		}
	}
public:
    DataProc()
    {
        year = 2025;
        month = 10;
        day = 10;
		weekday = 5;
    }

	~DataProc()
	{
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
		setWeekdayNum();
    }

    std::string showSetDate()
    {
        std::stringstream sy, sm, sd;
        sy << year;
        sm << month;
        sd << day;
        return sy.str() + "/" + sm.str() + "/" + sd.str() + "/" + getWeekdayStr(weekday);
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