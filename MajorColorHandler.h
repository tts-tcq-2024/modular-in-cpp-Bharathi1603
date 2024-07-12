#pragma once

#include <iostream>
#include <map>
#include <string>

class MajorColorHandler 
{
    public:
        enum class Name : std::uint8_t 
        {
          WHITE = 0x00,
          RED = 0x01,
          BLACK = 0x02,
          YELLOW = 0x03,
          VIOLET = 0x04,
        };
    
    int getNumberOfColors() const;
    std::string getColorName(const Name colorName);
    std::uint8_t getColorCode(const Name colorName);
    
    private:
      static const std::map<Name, std::uint8_t> majorColorCodes;
      static const std::map<Name, std::string> majorColorNames;
};
