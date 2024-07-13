#include <iostream>
#include <assert.h>
#include "TeleComm.h"

void testNumberToPair(int pairNumber, MajorColorHandler::Name expectedMajor, MinorColorHandler::Name expectedMinor)
{
    TeleComm teleComm;
    ColorPair colorPair = teleComm.getColorFromPairNumber(pairNumber);
    std::cout << "Got pair " << colorPair.toString() << std::endl;
    assert(colorPair.getMajorColor() == expectedMajor);
    assert(colorPair.getMinorColor() == expectedMinor);
}

void testPairToNumber(MajorColorHandler::Name major, MinorColorHandler::Name minor, int expectedPairNumber)
{
    TeleComm teleComm;
    int pairNumber = teleComm.getPairNumberFromColor(major, minor);
    std::cout << "Got pair number " << pairNumber << std::endl;
    assert(pairNumber == expectedPairNumber);
}

int main() {
    testNumberToPair(4, MajorColorHandler::Name::WHITE,  MinorColorHandler::Name::BROWN);
    testNumberToPair(5, MajorColorHandler::Name::WHITE,  MinorColorHandler::Name::SLATE);

    testPairToNumber(MajorColorHandler::Name::BLACK,  MinorColorHandler::Name::ORANGE, 12);
    testPairToNumber(MajorColorHandler::Name::VIOLET,  MinorColorHandler::Name::SLATE, 25);

    return 0;
}
