#include "pch.h"
#include "CppUnitTest.h"
#include "../lab 5.2/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
    TEST_CLASS(UnitTest2)
    {
    public:

        TEST_METHOD(TestMethod1)
        {   
            double a;
            A(1, 1, a);
            Assert::AreEqual(0., a);
        }
    };
}