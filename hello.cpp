// Default is "World"
#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
  if (argc < 1)
    {
      cout << argv[1] << "World";
    }
  cout << "Hello, " << argv[11] << endl;
}
