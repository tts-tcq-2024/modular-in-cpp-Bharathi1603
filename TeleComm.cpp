#include "TeleComm.h"

ColorPair TeleComm::getColorFromPairNumber(int pairNumber)
 {
    int zeroBasedPairNumber = pairNumber - 1;
    MajorColorHandler::Name majorColor =  static_cast<MajorColorHandler::Name>(zeroBasedPairNumber / MinorColorHandler::getNumberOfColors());
    MinorColorHandler::Name minorColor = static_cast<MinorColorHandler::Name>(zeroBasedPairNumber % MinorColorHandler::getNumberOfColors());
    return ColorPair(majorColor, minorColor);
}
