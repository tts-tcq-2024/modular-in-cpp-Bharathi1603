#pragma once
#include <iostream>
#include <map>
#include <string>

class MinorColorHandler {
public:
    enum class Name : std::uint8_t {
        BLUE = 0x00,
        ORANGE = 0x01,
        GREEN = 0x02,
        BROWN = 0x03,
        SLATE = 0x04,
    };
private:
    static const std::map<Name, std::uint8_t> minorColorCodes;
    static const std::map<Name, std::string> minorColorNames;
public:
    static const std::string getMinorColorName(const Name colorName) {
        auto iterator = minorColorNames.find(colorName);
        if (iterator != minorColorNames.end()) {
            return iterator->second;
        }
        return "";
    }

    static const std::uint8_t getMinorColorCode(const Name colorName) {
        auto iterator = minorColorCodes.find(colorName);
        if (iterator != minorColorCodes.end()) {
            return iterator->second;
        }
        return 0;
    }
};

const std::map<MinorColorHandler::Name, std::uint8_t> MinorColorHandler::minorColorCodes = {
    {MinorColorHandler::Name::BLUE, 0x00},
    {MinorColorHandler::Name::ORANGE, 0x01},
    {MinorColorHandler::Name::GREEN, 0x02},
    {MinorColorHandler::Name::BROWN, 0x03},
    {MinorColorHandler::Name::SLATE, 0x04},
};

const std::map<MinorColorHandler::Name, std::string> MinorColorHandler::minorColorNames = {
    {MinorColorHandler::Name::BLUE, "BLUE"},
    {MinorColorHandler::Name::ORANGE, "ORANGE"},
    {MinorColorHandler::Name::GREEN, "GREEN"},
    {MinorColorHandler::Name::BROWN, "BROWN"},
    {MinorColorHandler::Name::SLATE, "SLATE"},
};
