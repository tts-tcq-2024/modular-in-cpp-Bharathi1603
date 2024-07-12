#pragma once

#include <iostream>
#include <map>
#include <string>

class MinorColorHandler 
{
    public:
        enum class Name : std::uint8_t 
        {
            BLUE = 0x00,
            ORANGE = 0x01,
            GREEN = 0x02,
            BROWN = 0x03,
            SLATE = 0x04,
        };
    
    static const int getNumberOfColors();
    static const std::string getColorName(const Name colorName);    
    static const std::uint8_t getColorCode(const Name colorName);
        
    private:
        static const std::map<Name, std::uint8_t> minorColorCodes;
        static const std::map<Name, std::string> minorColorNames;
};
