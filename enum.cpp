#include <iostream>
// Typ wyliczeniowy Enum
using namespace std;
int main()
    {
        enum Days {Sunday, Monday, Tuesday, Wednesday,Thursday,Friday,Saturday };
Days today;
today = Monday;

        if (today == Saturday || today == Sunday)

            cout << " \nUwielbiam weekday!\n";
             else {
            cout << " \nWracam do roboty . \n";
        }
return 0;
}
