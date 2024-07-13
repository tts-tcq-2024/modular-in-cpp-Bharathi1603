#include "MajorColorHandler.h"

const std::map<MajorColorHandler::Name, std::uint8_t> MajorColorHandler::majorColorCodes = {
        {MajorColorHandler::Name::WHITE, 0x00},
        {MajorColorHandler::Name::RED, 0x01},
        {MajorColorHandler::Name::BLACK, 0x02},
        {MajorColorHandler::Name::YELLOW, 0x03},
        {MajorColorHandler::Name::VIOLET, 0x04},
};

const std::map<MajorColorHandler::Name, std::string> MajorColorHandler::majorColorNames = {
        {MajorColorHandler::Name::WHITE, "White"},
        {MajorColorHandler::Name::RED, "Red"},
        {MajorColorHandler::Name::BLACK, "Black"},
        {MajorColorHandler::Name::YELLOW, "Yellow"},
        {MajorColorHandler::Name::VIOLET, "Violet"},
};

int MajorColorHandler::getNumberOfColors()
{
    return majorColorNames.size();
}

std::string MajorColorHandler::getColorName(const Name colorName)
{
  auto iterator = majorColorNames.find(colorName);
  if (iterator != majorColorNames.end()) 
  {
    return iterator->second;
  }
  return "";
}

std::uint8_t MajorColorHandler::getColorCode(const Name colorName)
{
  auto iterator = majorColorCodes.find(colorName);
  if (iterator != majorColorCodes.end()) 
  {
    return iterator->second;
  }
  return 0;
}
