#include <map>
#include <string>
#include <vector>
#include <iostream>

#include "assembler.hpp"
using namespace std;

void print_result(vector<string> instructions)
{
  map<string, int> programme = assembler(instructions);

  for (auto i = programme.begin(); i != programme.end(); ++i)
  {
    cout << i->first << ": " << i->second << endl;
  }
  cout << endl;
}

int main(void)
{
  print_result({ "mov a 5", "inc a", ";spanner", "dec a", "dec a", "jnz a -1", "inc a" });
  print_result({ "mov a -10", "mov b a", "inc a", "dec b", "jnz a -2" });
  print_result({ "mov d 100", "dec d", "mov b d", "jnz b -2", "inc d", "mov a d", "jnz 5 10", "mov c a" });

  return 0;
}
