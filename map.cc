//cplusplus.com
//Stackoverflow
#include <unordered_map>
#include <iostream>
#include <string>
int main()
{
  std::unordered_map<std::string, int> mapInst;
  
  mapInst["Hello"] = 0;
  mapInst["World"] = 1;
  mapInst["Map"] = 2;
  mapInst["findMe"] = 3;
    auto search = mapInst.find("findMe");

    if (search == mapInst.end()) {
        std::cout << "Not found: " << std::endl;
    }

    else {
        std::cout << "Found: " << std::endl;
        std::cout << search->first << " " << search->second << std::endl;
    }
  return 0;
}
