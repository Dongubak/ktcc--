#include <iostream>

using namespace std;

int main(){
    const long long SEC_PER_MIN = 60;
    const long long MIN_PER_HOUR = 60;
    const long long HOURS_PER_DAY = 24;

    long long totalsec;
    cout << "Enter the number of seconds: ";
    cin >> totalsec;

    long long days = totalsec / (SEC_PER_MIN * MIN_PER_HOUR * HOURS_PER_DAY);
    long long rsec = totalsec % (SEC_PER_MIN * MIN_PER_HOUR * HOURS_PER_DAY);
    long long hours = rsec / (SEC_PER_MIN * MIN_PER_HOUR);
    rsec %= (SEC_PER_MIN * MIN_PER_HOUR);
    long long min = rsec / SEC_PER_MIN;
    long long sec = rsec % SEC_PER_MIN;

    cout << endl;
    cout << totalsec << " seconds = " << days << " days, "
        << hours << " hours, " << min << " minutes, " << sec << " seconds" << endl;

    return 0;
}