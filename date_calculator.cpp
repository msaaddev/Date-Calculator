#include <iostream>
#include <string>
using namespace std;

class date2019
{
private:
  int day, month, var, mon;

public:
  date2019()
  {
    day = 1;
    month = 1;
  }

  date2019(int dd)
  {
    var = dd - 1;
    day = 1;
    month = 1;
    int counter = 1;

    if (dd < 365)
    {
      bool check = false;

      while (dd > 30)
      {
        if ((counter == 1) || (counter == 3) || (counter == 5) || (counter == 7) || (counter == 8) || (counter == 10) || (counter == 12))
        {
          if (dd == 31)
            break;
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

      mon = month;

      if (dd >= 365)
      {
        cout << "Invalid number of days. Enter the days between 1 to 365." << endl;
        month = -1;
        day = -1;
      }
      else
      {
        day = dd;
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
    var = dd;
    if (mm > 12 || dd > 365)
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
        if (counter > 12)
        {
          cout << "Invalid number of days. Date cannot exceed to next year i.e 2020" << endl;
          check = false;
          day = -1;
          month = -1;
          break;
        }

        if (month == 12 && dd > 31)
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
          mon = month;
          break;
        }

        if ((counter == 1) || (counter == 3) || (counter == 5) || (counter == 7) || (counter == 8) || (counter == 10) || (counter == 12))
        {
          if (dd == 31)
          {
            break;
          }
          else
          {
            dd -= 31;
            month++;
          }
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

      mon = month;

      if (check)
      {
        if (check2)
        {
          day = 31;
          check2 = false;
        }
        else
        {
          day = dd;
        }
      }
    }

    int x = 0, sum = 0, totalDays[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    ;
    while (x < mon)
    {
      sum = sum + totalDays[x];
      x++;
    }
    var = sum -
          totalDays[mon - 1] + day - 1;
  }

  void setDate(int, int);
  void print();
  void plusDay(int);
};

void date2019::setDate(int dd, int mm)
{
  var = dd;
  if (mm > 12 || dd > 365)
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
      if (counter > 12)
      {
        cout << "Invalid number of days. Date cannot exceed to next year i.e 2020" << endl;
        check = false;
        day = -1;
        month = -1;
        break;
      }

      if (month == 12 && dd > 31)
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
        mon = month;
        break;
      }

      if ((counter == 1) || (counter == 3) || (counter == 5) || (counter == 7) || (counter == 8) || (counter == 10) || (counter == 12))
      {
        if (dd == 31)
        {
          break;
        }
        else
        {
          dd -= 31;
          month++;
        }
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

    mon = month;

    if (check)
    {
      if (check2)
      {
        day = 31;
        check2 = false;
      }
      else
      {
        day = dd;
      }
    }
  }

  int x = 0, sum = 0, totalDays[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  ;
  while (x < mon)
  {
    sum = sum + totalDays[x];
    x++;
  }
  var = sum -
        totalDays[mon - 1] + day - 1;
}

void date2019::print()
{
  if (day != -1 && month != -1)
  {
    int originalDay;
    originalDay = (var + 1) % 7;

    string dayOfWeek[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    string monthOfYear[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

    cout << endl
         << dayOfWeek[originalDay] << ", " << monthOfYear[mon - 1] << " " << day << ", 2019" << endl;
  }
  else
  {
    cout << endl
         << "A date not in 2019." << endl;
  }
}

void date2019::plusDay(int dd)
{
  day = 1;
  month = 1;
  int counter = 1;

  if (dd < 365)
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

    if (dd >= 365)
    {
      cout << "Invalid number of days. Enter the days between 1 to 365." << endl;
      month = -1;
      day = -1;
    }
    else
    {
      day += dd;
    }
  }
  else
  {
    cout << "Invalid number of days. Enter the days between 1 to 365." << endl;
    month = -1;
    day = -1;
  }
}

int main()
{

  date2019 d1;
  // d1.plusDay(16);
  d1.setDate(16, 12);
  d1.print();
}
