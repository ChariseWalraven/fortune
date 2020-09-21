#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <string>

using namespace std;

int main()
{
  string fortunes[10] = {
      "Flattery will go far tonight.",
      "Don't behave with cold manners.",
      "May you someday be carbon neutral",
      "You have rice in your teeth.",
      "A conclusion is simply the place where you got tired of thinking.",
      "No snowflake feels responsible in an avalanche.",
      "He who laughs last is laughing at you.",
      "If you look back, you'll soon be going that way.",
      "You will die alone and poorly dressed.",
      "The fortune you seek is in another cookie."};

  srand(time(NULL));
  int fortune = rand() % 10;

  cout << fortunes[fortune] << "\n";
}