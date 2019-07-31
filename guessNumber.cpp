#include <iostream> 

using namespace std; 

int main()
{
  int my_number = 11; 
  int answer; 
  int count = 3; 

  cout << "You have " << count << " chances to guess my number bewteen 1 and 100." << endl; 
  for (int i = 0; i < 3; i++)
  {
    cout << "Enter a number: " << endl; 
    cin >> answer; 
    if (answer == my_number)
    {
      break; 
    }
    else 
    {
      count--; 
      cout << "Sorry that's not it...you have " << count << " chances left" << endl; 
    }
  }

  if (count > 0)
  {
    cout << "You win! Game over." << endl;
  }
  else 
  {
    cout << "You lose! Game over." << endl; 
  }
  return 0; 
}
