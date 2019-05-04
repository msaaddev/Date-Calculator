#include <iostream>
#include <string>
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

    if(dd < 365)
    {
      bool check = false;

      while (dd > 30)
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

      if(dd >= 365)
      {
        cout << "Invalid number of days. Enter the days between 1 to 365." << endl;
        month = -1;
        day = -1;
      }
      else
      {
        day += dd;
        cout << month << " " << day;
      }
    }
    else
    {
      cout << "Invalid number of days. Enter the days between 1 to 365." << endl;
      month = -1;
      day = -1;
    }
  }

  date2019(int dd, int mm)
  {

    if(mm > 12 || dd > 365)
    {
      cout << "Invalid month or date. Try Again." << endl;
      day = -1;
      month = -1;
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
          day = -1;
          month = -1;
          break;
        }

        if(month == 12 && dd > 31)
        {
          cout << "Invalid number of days. Date can not exceed to next year i.e 2020" << endl;
          check = false;
          day = -1;
          month = -1;
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
          if(dd == 0)
          {
            day = 1;
            cout << month << "   " << day;
          }
          else
          {
            day = dd;
            cout << month << " " << day;
          }
        }
      }
    }
  }

  void setDate(int, int);
  void print();

};

void date2019:: setDate(int dd, int mm)
{
  if(mm > 12 || dd > 365)
    {
      cout << "Invalid month or date. Try Again." << endl;
      day = -1;
      month = -1;
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
          day = -1;
          month = -1;
          break;
        }

        if(month == 12 && dd > 31)
        {
          cout << "Invalid number of days. Date can not exceed to next year i.e 2020" << endl;
          check = false;
          day = -1;
          month = -1;
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
          if (dd == 0)
          {
            day = 1;
            cout << month << "   " << day;
          }
          else
          {
            day = dd;
            cout << month << " " << day;
          }
        }
      }
    }
}

void date2019:: print()
{
  if(day != -1 && month != -1)
  {
    int monthStart, originalDay, daySub;
    string dayOfWeek;

    daySub = day;
    while (true)
    {
      originalDay = daySub;
      daySub = daySub - 7;
      if (daySub < 0)
      {
        break;
      }
    }

    cout << endl
         << "Day:  " << originalDay << endl;

    if (month == 4 || month == 7)
    {
      if (originalDay == 1)
      {
        dayOfWeek = "Monday";
      }
      else if (originalDay == 2)
      {
        dayOfWeek = "Tuesday";
      }
      else if (originalDay == 3)
      {
        dayOfWeek = "Wednesday";
      }
      else if (originalDay == 4)
      {
        dayOfWeek = "Thursday";
      }
      else if (originalDay == 5)
      {
        dayOfWeek = "Friday";
      }
      else if (originalDay == 6)
      {
        dayOfWeek = "Saturday";
      }
      else if (originalDay == 0)
      {
        dayOfWeek = "Sunday";
      }
      if (month == 4)
      {
        cout << endl
             << dayOfWeek << ", April " << day << ", 2019" << endl;
      }
      else
      {
        cout << endl
             << dayOfWeek << ", July " << day << ", 2019" << endl;
      }
    }

    else if (month == 1 || month == 10)
    {
      if (originalDay == 1)
      {
        dayOfWeek = "Tuesday";
      }
      else if (originalDay == 2)
      {
        dayOfWeek = "Wednesday";
      }
      else if (originalDay == 3)
      {
        dayOfWeek = "Thursday";
      }
      else if (originalDay == 4)
      {
        dayOfWeek = "Friday";
      }
      else if (originalDay == 5)
      {
        dayOfWeek = "Saturday";
      }
      else if (originalDay == 6)
      {
        dayOfWeek = "Sunday";
      }
      else if (originalDay == 0)
      {
        dayOfWeek = "Monday";
      }

      if (month == 1)
      {
        cout << endl
             << dayOfWeek << ", January " << day << ", 2019" << endl;
      }
      else
      {
        cout << endl
             << dayOfWeek << ", October " << day << ", 2019" << endl;
      }
    }
    else if (month == 5)
    {
      if (originalDay == 1)
      {
        dayOfWeek = "Wednesday";
      }
      else if (originalDay == 2)
      {
        dayOfWeek = "Thursday";
      }
      else if (originalDay == 3)
      {
        dayOfWeek = "Friday";
      }
      else if (originalDay == 4)
      {
        dayOfWeek = "Saturday";
      }
      else if (originalDay == 5)
      {
        dayOfWeek = "Sunday";
      }
      else if (originalDay == 6)
      {
        dayOfWeek = "Monday";
      }
      else if (originalDay == 0)
      {
        dayOfWeek = "Tuesday";
      }

        cout << endl << dayOfWeek << ", May " << day << ", 2019" << endl;
    }
    else if (month == 8)
    {
      if (originalDay == 1)
      {
        dayOfWeek = "Thursday";
      }
      else if (originalDay == 2)
      {
        dayOfWeek = "Friday";
      }
      else if (originalDay == 3)
      {
        dayOfWeek = "Saturday";
      }
      else if (originalDay == 4)
      {
        dayOfWeek = "Sunday";
      }
      else if (originalDay == 5)
      {
        dayOfWeek = "Monday";
      }
      else if (originalDay == 6)
      {
        dayOfWeek = "Tuesday";
      }
      else if (originalDay == 0)
      {
        dayOfWeek = "Wednesday";
      }


      cout << endl << dayOfWeek << ", August " << day << ", 2019" << endl;

    }
    else if (month == 2 || month == 3 || month == 11)
    {
      if (originalDay == 1)
      {
        dayOfWeek = "Friday";
      }
      else if (originalDay == 2)
      {
        dayOfWeek = "Saturday";
      }
      else if (originalDay == 3)
      {
        dayOfWeek = "Sunday";
      }
      else if (originalDay == 4)
      {
        dayOfWeek = "Monday";
      }
      else if (originalDay == 5)
      {
        dayOfWeek = "Tuesday";
      }
      else if (originalDay == 6)
      {
        dayOfWeek = "Wednesday";
      }
      else if (originalDay == 0)
      {
        dayOfWeek = "Thursday";
      }

      if (month == 2)
      {
        cout << endl
             << dayOfWeek << ", February " << day << ", 2019" << endl;
      }
      else if (month == 3)
      {
        cout << endl
             << dayOfWeek << ", March " << day << ", 2019" << endl;
      }
      else
      {
        cout << endl
             << dayOfWeek << ", November " << day << ", 2019" << endl;
      }
    }
    else if (month == 6)
    {
      if (originalDay == 1)
      {
        dayOfWeek = "Saturday";
      }
      else if (originalDay == 2)
      {
        dayOfWeek = "Sunday";
      }
      else if (originalDay == 3)
      {
        dayOfWeek = "Monday";
      }
      else if (originalDay == 4)
      {
        dayOfWeek = "Tuesday";
      }
      else if (originalDay == 5)
      {
        dayOfWeek = "Wednesday";
      }
      else if (originalDay == 6)
      {
        dayOfWeek = "Thursday";
      }
      else if (originalDay == 0)
      {
        dayOfWeek = "Friday";
      }

        cout << endl
             << dayOfWeek << ", June " << day << ", 2019" << endl;
    }
    else
    {
      if (originalDay == 1)
      {
        dayOfWeek = "Sunday";
      }
      else if (originalDay == 2)
      {
        dayOfWeek = "Monday";
      }
      else if (originalDay == 3)
      {
        dayOfWeek = "Tuesday";
      }
      else if (originalDay == 4)
      {
        dayOfWeek = "Wednesday";
      }
      else if (originalDay == 5)
      {
        dayOfWeek = "Thursday";
      }
      else if (originalDay == 6)
      {
        dayOfWeek = "Friday";
      }
      else if (originalDay == 0)
      {
        dayOfWeek = "Saturday";
      }

      if(month == 9)
      {
        cout << endl << dayOfWeek << ", September " << day << ", 2019" <<  endl;
      }
      else
      {
        cout << endl << dayOfWeek << ", December " << day << ", 2019" <<  endl;
      }
    }
  }
  else
  {
    cout << endl << "A date not in 2019." << endl;
  }

}

int main()
{
  date2019 d1;
  d1.setDate(32, 10);
  d1.print();
}
