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
    
    static const int getNumberOfColors();
    static const std::string geColorName(const Name colorName);
    static const std::uint8_t geColorCode(const Name colorName);
    
    private:
      static const std::map<Name, std::uint8_t> majorColorCodes;
      static const std::map<Name, std::string> majorColorNames;
};
