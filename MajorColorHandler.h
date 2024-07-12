#pragma once

#include <iostream>
#include <map>
#include <string>

class MajorColorHandler {
public:
    enum class Name : std::uint8_t {
      WHITE = 0x00,
      RED = 0x01,
      BLACK = 0x02,
      YELLOW = 0x03,
      VIOLET = 0x04,
    };

private:
  static const std::map<Name, std::uint8_t> majorColorCodes;
  static const std::map<Name, std::string> majorColorNames;

public:

static const std::string getMajorColorName(const Name colorName) {
  auto iterator = majorColorNames.find(colorName);
  if (iterator != majorColorNames.end()) {
    return iterator->second;
  }
  return "";
}

static const std::uint8_t getMajorColorCode(const Name colorName) {
  auto iterator = majorColorCodes.find(colorName);
  if (iterator != majorColorCodes.end()) {
    return iterator->second;
  }
  return 0;
}

};

const std::map<MajorColorHandler::Name, std::uint8_t> MajorColorHandler::majorColorCodes = {
        {MajorColorHandler::Name::WHITE, 0x00},
        {MajorColorHandler::Name::RED, 0x01},
        {MajorColorHandler::Name::BLACK, 0x02},
        {MajorColorHandler::Name::YELLOW, 0x03},
        {MajorColorHandler::Name::VIOLET, 0x04},
};


const std::map<MajorColorHandler::Name, std::string> MajorColorHandler::majorColorNames = {
        {MajorColorHandler::Name::WHITE, "WHITE"},
        {MajorColorHandler::Name::RED, "RED"},
        {MajorColorHandler::Name::BLACK, "BLACK"},
        {MajorColorHandler::Name::YELLOW, "YELLOW"},
        {MajorColorHandler::Name::VIOLET, "VIOLET"},
};
