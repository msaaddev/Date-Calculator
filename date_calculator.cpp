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

  date2019(int dd, int mm)
  {

    if(mm > 12 || dd > 365)
    {
      cout << "Invalid month or date. Try Again." << endl;
    }
    else
    {
      bool check = true, check2 = false;
      month = mm;
      int counter = month;

      while (dd > 0 && dd > 30)
      {
        if(counter > 12)
        {
          cout << "Invalid number of days. Date cannot exceed to next year i.e 2020" << endl;
          check = false;
          break;
        }

        if(month == 12 && dd > 31)
        {
          cout << "Invalid number of days. Date can not exceed to next year i.e 2020" << endl;
          check = false;
          break;
        }

        if (month == 12 && dd == 31)
        {
          check2 = true;
          break;
        }

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

      if(check)
      {
        if(check2)
        {
          day = 31;
          check2 = false;
          cout << month << " " << day;
        }
        else
        {
          day = dd;
          cout << month << " " << day;
        }
      }
    }
  }

};

int main()
{
  date2019 d1(31, 12);
}
