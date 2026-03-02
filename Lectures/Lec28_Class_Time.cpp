#include <iostream>
#include <ctime>
using namespace std;

// Class definition
class Time {
private:
    int hours;
    int minutes;
    int seconds;

public:
    // Function to get current system time
    void getCurrentTime() {
        time_t now = time(0);          // Get current time
        tm *ltm = localtime(&now);     // Convert to local time

        hours = ltm->tm_hour;
        minutes = ltm->tm_min;
        seconds = ltm->tm_sec;
    }

    // Function to display time
    void displayTime() {
        cout << "Current System Time: "
             << hours << " : "
             << minutes << " : "
             << seconds << endl;
    }
};

// Main function
int main() {
    Time t1;                 // Create object of Time class
    t1.getCurrentTime();     // Fetch current system time
    t1.displayTime();        // Display time

    return 0;
}
