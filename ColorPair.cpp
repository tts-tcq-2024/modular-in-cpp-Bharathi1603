#include "ColorPair.h"

ColorPair::ColorPair(const MajorColorHandler::Name majorColor, const MinorColorHandler::Name minorColor)
    : majorColor(majorColor), minorColor(minorColor) {}

MajorColorHandler::Name ColorPair::getMajorColor() const { return majorColor; }

MinorColorHandler::Name ColorPair::getMinorColor() const { return minorColor; }

std::string ColorPair::toString() const 
{
  std::string colorPairStr = MajorColorHandler::getColorName(majorColor);
  colorPairStr += " ";
  colorPairStr += MinorColorHandler::getColorName(minorColor);
  return colorPairStr;
}
