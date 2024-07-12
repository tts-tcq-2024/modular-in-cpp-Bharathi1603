#pragma once
#include "ColorPair.h"

class TeleComm
{
  public:
    ColorPair getColorFromPairNumber(int pairNumber);
    int GetPairNumberFromColor(MajorColorHandler::Name major, MinorColorHandler::Name minor);
};
