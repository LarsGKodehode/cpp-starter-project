#include <iostream>

// We can create Macros to avoid repetition
// Be abstemious tough, as its really only a dumb text replace
#define LOG(message) (std::cout << message << std::endl)

int main(int argc, char const *argv[])
{
  // argc is the number of arguments passed in
  // argv is an vector with the values of those arguments
  for (int i = 0; i < argc; i++)
  {
    LOG(argv[i]);
  }

  return 0;
}
