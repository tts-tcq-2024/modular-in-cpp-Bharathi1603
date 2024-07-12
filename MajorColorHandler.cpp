#include "MajorColorHandler.h"

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

const int MajorColorHandler::getNumberOfColors()
{
    return majorColorNames.size();
}

const std::string MajorColorHandler::geColorName(const Name colorName) 
{
  auto iterator = majorColorNames.find(colorName);
  if (iterator != majorColorNames.end()) {
    return iterator->second;
  }
  return "";
}

const std::uint8_t MajorColorHandler::getColorCode(const Name colorName) 
{
  auto iterator = majorColorCodes.find(colorName);
  if (iterator != majorColorCodes.end()) {
    return iterator->second;
  }
  return 0;
}
