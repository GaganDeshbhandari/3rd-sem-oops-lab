#include<iostream>
#include<conio.h>
#include<process.h>

using namespace std;

// Arrays for days in each month (0-based index)
int a[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};  // Non-leap year
int b[13] = {0,31,29,31,30,31,30,31,31,30,31,30,31};  // Leap year

// Class to handle date operations
class date {
    private:
        int flag;  // Flag for leap year (1 if leap year, 0 otherwise)
        int dd;    // Day
        int mm;    // Month
        int yy;    // Year

    public:
        // Constructor with validation for leap year
        date(int d, int m, int y) {
            dd = d;
            mm = m;
            yy = y;
            flag = (y % 4 == 0 && (y % 100 != 0 || y % 400 == 0)) ? 1 : 0;  // Check for leap year

            // Validate February dates for non-leap years
            if (!flag && m == 2 && d > 28) {
                cout << "Error: Invalid date - Not a leap year" << endl;
                getch();
                exit(0);
            }
            // Validate February dates for leap years
            if (flag && m == 2 && d > 29) {
                cout << "Error: Invalid date - Leap year" << endl;
                getch();
                exit(0);
            }
            // Validate other months
            if (m > 12 || d > a[m]) {
                cout << "Error: Invalid date" << endl;
                getch();
                exit(0);
            }
        }

        int return_date(date d);           // Calculate days from year start
        int operator-(date d2);            // Calculate difference between dates
        date operator+(int n);             // Add days to a date
        friend ostream& operator<<(ostream& out, date d1);  // Output format
};

// Calculate difference between two dates
int date::operator-(date d2) {
    int a1, a2, x = 0;
    date d1(dd, mm, yy);
    if (d1.dd == d2.dd && d1.mm == d2.mm && d1.yy == d2.yy)
        return x;
    if (d1.dd < d2.dd && d1.mm == d2.mm && d1.yy == d2.yy) {
        cout << "Error: 2nd date is greater than 1st date" << endl;
        getch();
        exit(0);
    }
    if (d1.mm < d2.mm && d1.yy == d2.yy) {
        cout << "Error: 2nd date is greater than 1st date" << endl;
        getch();
        exit(0);
    }
    if (d1.yy < d2.yy) {
        cout << "Error: 2nd date is greater than 1st date" << endl;
        getch();
        exit(0);
    }
    a1 = return_date(d1);
    a2 = return_date(d2);
    for (int i = d1.yy - 1; i > d2.yy; i--) {
        if (i % yy == 0)
            x = x + 366;
        else
            x = x + 365;
    }
    if (d1.yy == d2.yy)
        x = x + a1 - a2;
    else {
        x = x + a1;
        if (d2.yy % 4 == 0)
            x = x + (366 - a2);
        else
            x = x + (365 - a2);
    }
    return x;
}

// Calculate days from start of year
int date::return_date(date d) {
    int int_val = d.dd;
    
    // Add extra day for leap year after February
    if (d.flag == 1 && d.mm > 2) {
        for(int i = 1; i < d.mm; i++)
            int_val += b[i];
        int_val++;
    } else {
        for(int i = 1; i < d.mm; i++)
            int_val += a[i];
    }
    return int_val;
}

// Add days to a date
date date::operator+(int n) {
    date d(dd, mm, yy);
    for (int i = 0; i < n; i++) {
        d.dd++;
        if (d.yy % 4 == 0) {
            d.flag = 1;
            if (d.dd > b[d.mm]) {
                d.dd = 1;
                d.mm++;
            }
        } else {
            d.flag = 0;
            if (d.dd > a[d.mm]) {
                d.dd = 1;
                d.mm++;
            }
        }
        if (d.mm > 12) {
            d.mm = 1;
            d.yy++;
        }
    }
    return d;
}

// Output operator overloading
ostream& operator<<(ostream& out, date d1) {
    out << d1.dd << "-" << d1.mm << "-" << d1.yy;
    return out;
}

int main() {
    int d, m, y, no_of_days;
    
    cout << "Enter a valid date (dd mm yyyy):\n";
    cin >> d >> m >> y;
    
    // Validate input date
    if (m > 12 || d > ((y % 4 == 0 && (y % 100 != 0 || y % 400 == 0)) ? b[m] : a[m])) {
        cout << "Error: Invalid date" << endl;
        getch();
        exit(0);
    }
    
    date d1(d, m, y);
    
    cout << "Enter a valid date which is lesser than the first date\n";
    cin >> d >> m >> y;
    
    // Validate second date
    if (m > 12 || d > ((y % 4 == 0 && (y % 100 != 0 || y % 400 == 0)) ? b[m] : a[m])) {
        cout << "Error: Invalid date" << endl;
        getch();
        exit(0);
    }
    
    date d2(d, m, y);
    
    no_of_days = d1 - d2;
    cout << "Difference between two dates in days: " << no_of_days << endl;
    
    cout << "Enter number of days to be added to first date:\n";
    cin >> no_of_days;
    
    d1 = d1 + no_of_days;
    cout << "The new date is: " << d1 << endl;
    
    getch();
    return 0;
}