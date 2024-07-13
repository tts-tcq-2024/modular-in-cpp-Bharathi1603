#include "MinorColorHandler.h"

const std::map<MinorColorHandler::Name, std::uint8_t> MinorColorHandler::minorColorCodes = {
    {MinorColorHandler::Name::BLUE, 0x00},
    {MinorColorHandler::Name::ORANGE, 0x01},
    {MinorColorHandler::Name::GREEN, 0x02},
    {MinorColorHandler::Name::BROWN, 0x03},
    {MinorColorHandler::Name::SLATE, 0x04},
};

const std::map<MinorColorHandler::Name, std::string> MinorColorHandler::minorColorNames = {
    {MinorColorHandler::Name::BLUE, "Blue"},
    {MinorColorHandler::Name::ORANGE, "Orange"},
    {MinorColorHandler::Name::GREEN, "Green"},
    {MinorColorHandler::Name::BROWN, "Brown"},
    {MinorColorHandler::Name::SLATE, "Slate"},
};

int MinorColorHandler::getNumberOfColors()
{
    return minorColorNames.size();
}

std::string MinorColorHandler::getColorName(const Name colorName)
{
  auto iterator = minorColorNames.find(colorName);
  if (iterator != minorColorNames.end()) 
  {
      return iterator->second;
  }
  return "";
}

std::uint8_t MinorColorHandler::getColorCode(const Name colorName)
{
  auto iterator = minorColorCodes.find(colorName);
  if (iterator != minorColorCodes.end()) 
  {
      return iterator->second;
  }
  return 0;
}
