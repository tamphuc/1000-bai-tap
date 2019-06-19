
#include <iostream>
using namespace std;
#define minyear 1000
#define maxyear 10000

int main(int argc, const char * argv[]) {
    int month, year;
    do {
        cout << "Enter month : ";
        cin >> month;
        if (month<1 || month>12)
            cout << "Pls enter again!";
    }
    while (month<1 || month>12);
    
    do{
        cout << "Enter year : ";
        cin >> year;
        if (year<minyear || year>maxyear)
            cout << "Pls enter again!";
    }
    while (year<minyear || year>maxyear);
    
}
