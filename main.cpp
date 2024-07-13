#include <iostream>
#include <assert.h>
#include "TeleComm.h"

void testNumberToPair(int pairNumber,
    TelCoColorCoder::MajorColor expectedMajor,
    TelCoColorCoder::MinorColor expectedMinor)
{
    TelCoColorCoder::ColorPair colorPair =
        TelCoColorCoder::GetColorFromPairNumber(pairNumber);
    std::cout << "Got pair " << colorPair.ToString() << std::endl;
    assert(colorPair.getMajor() == expectedMajor);
    assert(colorPair.getMinor() == expectedMinor);
}

void testNumberToPair(int pairNumber, MajorColorHandle::Name expectedMajor, MinorColorHandle::Name expectedMinor)
{
    ColorPair colorPair = TeleComm::gtColorFromPairNumber(pairNumber);
    std::cout << "Got pair " << colorPair.ToString() << std::endl;
    assert(colorPair.getMajor() == expectedMajor);
    assert(colorPair.getMinor() == expectedMinor);
}

void testPairToNumber(MajorColorHandle::Name major, MinorColorHandle::Name minor, int expectedPairNumber)
{
    int pairNumber = TeleComm::getPairNumberFromColor(major, minor);
    std::cout << "Got pair number " << pairNumber << std::endl;
    assert(pairNumber == expectedPairNumber);
}

int main() {
    testNumberToPair(4, MajorColorHandler::Name::WHITE,  MinorColorHandle::Name::BROWN);
    testNumberToPair(5, MajorColorHandler::Name::WHITE,  MinorColorHandle::Name::SLATE);

    // testPairToNumber(MajorColorHandler::Name::BLACK,  MinorColorHandle::Name::ORANGE, 12);
    // testPairToNumber(MajorColorHandler::Name::VIOLET,  MinorColorHandle::Name::SLATE, 25);

    return 0;
}
