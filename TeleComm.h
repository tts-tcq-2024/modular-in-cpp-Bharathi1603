#pragma once
#include "ColorPair.h"
#include <vector>

class TeleComm
{
  private:
    static const std::uint8_t maxColorPair = 25;
  public:
    static ColorPair getColorFromPairNumber(int pairNumber);
    static int getPairNumberFromColor(MajorColorHandler::Name major, MinorColorHandler::Name minor);
    static std::vector<ColorPair> getColorPairList(int pairNumber);
};
