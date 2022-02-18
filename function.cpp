#include "header.h"
#include <fstream>
#include <iostream>
#include <string>

std::string ReadmeReader()
{
  std::string line;
  std::String whole_file = "";
  ifstream read ("README.md");
  if (read.is_open())
  {
    while (getline(read, line))
    {
      whole_file = whole_file + line + "\n";
    }
    read.close();
  }
  return whole_file;
}
