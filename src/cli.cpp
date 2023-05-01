#include <iostream>

// We can create Macros to avoid repetition
// Be abstemious tough, as its really only a dumb text replace
#define LOG(message) (std::cout << message << std::endl)

int main(int argc, char const *argv[])
{
  // argc is the number of arguments passed to the program
  // argv is a vector with the values of those arguments

  // First entry of argv is the name of the program
  LOG(argv[0]);

  for (int i = 1; i < argc; i++)
  {
    LOG(argv[i]);
  }

  return 0;
}
