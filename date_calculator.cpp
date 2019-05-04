#include <iostream>
using namespace std;

class date2019
{
private:
  int day, month;

public:
  date2019()
  {
    day = 1;
    month = 1;
  }

  date2019(int dd)
  {
    day = 1;
    month = 1;
    int counter = 1;

    if(dd <= 365)
    {
      while (dd > 0 && dd > 30)
      {
        if ((counter == 1) || (counter == 3) || (counter == 5) || (counter == 7) || (counter == 8) || (counter == 10) || (counter == 12))
        {
          dd -= 31;
          month++;
        }
        else if (counter == 2)
        {
          dd -= 28;
          month++;
        }
        else
        {
          dd -= 30;
          month++;
        }
        counter++;
      }

      if (dd <= 30)
      {
        day = dd;
      }
        cout << month << " " << day;
      }
      else
      {
        cout << "Invalid number of days. Enter the days between 1 to 365." << endl;
      }
  }


};

int main()
{
  date2019 d1(366);
}
