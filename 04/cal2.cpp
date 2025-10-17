#include <iostream>
#include <sstream>
#include <string>

class DateProc
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
    DateProc()
    {
        year = 2025;
        month = 10;
        day = 10;
		weekday = 5;
    }

	~DateProc()
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

    int getAfterBirth(int y, int m, int d)
    {
        int bd=getSerialDay(y,m,d);
        int sd=getSerialDay(year,month,day);
        return sd-bd;
    }
    std::string getHoroscope(int m, int d)
    {
        std::string hn;
        int ds[]={20,19,21,20,21,22,23,23,23,24,23,24};
        switch(m)
        {
            case 1:return (d<ds[0]?"capricorn":"aquarius"); break;
            case 2:return (d<ds[1]?"aquarius":"pisces"); break;
            case 3:return (d<ds[2]?"pisces":"aries"); break;
            case 4:return (d<ds[3]?"aries":"taurus"); break;
            case 5:return (d<ds[4]?"taurus":"gemini"); break;
            case 6:return (d<ds[5]?"gemini":"cancer"); break;
            case 7:return (d<ds[6]?"cancer":"leo"); break;
            case 8:return (d<ds[7]?"leo":"virgo"); break;
            case 9:return (d<ds[8]?"virgo":"libra"); break; case 10:return (d<ds[9]?"libra":"scorpio"); break;
            case 11:return (d<ds[10]?"scorpio":"sagittarius"); break;
            case 12:return (d<ds[11]?"sagittarius":"capricorn"); break;
            default:return "Error"; break;
        }
    }
};

int main()
{
    int count=0;
    int by,bm,bd,ab;
    DateProc *dp;
    dp = new DateProc();
    std::cout << "Today" << std::endl;
    dp->setDate(); std::cout << dp->showSetDate() << std::endl << std::endl;
    std::cout << "BirthDay" << std::endl;
    std::cout << "Year:";
    std::cin >> by;
    std::cout << "Month:";
    std::cin >> bm;
    std::cout << "Day:";
    std::cin >> bd;
    std::cout << std::endl;
    ab = dp->getAfterBirth(by,bm,bd); std::cout << ab << "day(s) after birth" << std::endl;
    std::cout << dp->getHoroscope(bm,bd) << std::endl;
    return 0;
}