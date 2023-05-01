#include <iostream>

#include "AppConfig.h"

#define LOG(message) (std::cout << message << std::endl)

int main(int argc, char const *argv[])
{
  std::cout << argv[0] << "Version " << CPPStarter_VERSION_MAJOR << "." << CPPStarter_VERSION_MINOR << std::endl;

  LOG("Hello World");
  LOG("FuzzBazz");
  LOG("Ninja");

  return 0;
}
