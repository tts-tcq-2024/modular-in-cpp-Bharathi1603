#pragma once
#include "ColorPair.h"

class TeleComm
{
  public:
    static ColorPair getColorFromPairNumber(int pairNumber);
    static int getPairNumberFromColor(MajorColorHandler::Name major, MinorColorHandler::Name minor);
};
