// Game setup like an RPG but using health data from smart watch

#include <iostream>
using namespace std;

int main() {
int playerxp = 0;
int steps = 0;
int level = 1;
int xpneeded = 1000;
cout << "Welcome to the world of health! Your current level is:" << level << endl;
cout << "Let's see how well you did today! Please enter the number of steps you took." << endl;
cin >> steps;
playerxp = playerxp + (steps/10);
if (playerxp >= 0 && playerxp <= 999) { level = 1; xpneeded = 1000; }
if (playerxp >= 1000 && playerxp <= 2199) { level = 2; xpneeded = 2200; }
if (playerxp >= 2200 && playerxp <= 3599) { level = 3; xpneeded = 3600; }
if (playerxp >= 3600 && playerxp <= 5199) { level = 4; xpneeded = 5200; }
if (playerxp >= 5200 && playerxp <= 6999) { level = 5; xpneeded = 7000; }
cout <<" Nice Job! You have earned:" << (steps/10) <<  "xp";

return 0;

}

