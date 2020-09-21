#include <iostream>
#include <stdlib.h> /* srand, rand */
#include <ctime>

using namespace std;

int main()
{
  int tries = 0;
  int maxTries = 3;
  int guess;

  srand(time(NULL)); // seed the random number generator by giving it the current time. Pseudo random, not really random, like all "randomly" generated numbers in computers
  int number = 1 + rand() % 10;

  cout << "I have a number 1-10.\n";
  cout << "Please guess it: ";
  cin >> guess;
  while (guess != number && tries < maxTries)
  {
    tries++;
    cout << "Wrong guess, try again.\n"
         << "You have " << maxTries - tries << " tries left.\n";
    cin >> guess;
    cout << number << "\n";
    /* code */
  }
  if (guess == number)
  {
    cout << "You got it!\n";
  }

  if (guess != number && tries == maxTries)
  {
    cout << "Sorry, that was your last try. :(\n";
  }
}