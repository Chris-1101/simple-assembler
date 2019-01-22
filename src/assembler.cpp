#include <map>
#include <cctype>
#include <vector>
#include <string>
#include <sstream>

#include "assembler.hpp"

static std::vector<std::string> split(std::string const& str)
{
  std::string token;
  std::vector<std::string> result;
  std::istringstream iss(str, std::istringstream::in);

  while (iss >> token) result.push_back(token);

  return result;
}

std::map<std::string, int> assembler(std::vector<std::string> const& assembly)
{
  std::map<std::string, int> registers;

  auto get_val = [&](std::string ins) -> int
  {
    return isalpha(ins[0]) ? registers[ins] : std::stoi(ins);
  };
  for (unsigned i = 0; i < assembly.size(); i++)
  {
    std::vector<std::string> instruction = split(assembly[i]);

    if (instruction[0][0] == ';') continue;

    if (instruction[0] == "mov") registers[instruction[1]] = get_val(instruction[2]);
    if (instruction[0] == "inc") registers[instruction[1]]++;
    if (instruction[0] == "dec") registers[instruction[1]]--;

    if (instruction[0] == "add") registers[instruction[1]] += get_val(instruction[2]);
    if (instruction[0] == "sub") registers[instruction[1]] -= get_val(instruction[2]);
    if (instruction[0] == "mul") registers[instruction[1]] *= get_val(instruction[2]);
    if (instruction[0] == "div") registers[instruction[1]] /= get_val(instruction[2]);

    if (instruction[0] == "jnz" && get_val(instruction[1])) i += get_val(instruction[2]) - 1;
  }
  return registers;
}
