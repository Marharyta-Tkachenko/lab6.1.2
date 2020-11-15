#include "pch.h"
#include "CppUnitTest.h"
#include "../Project6.1.2/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest11
{
	TEST_CLASS(UnitTest11)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int c;
			int a[20]{27,-5,35,-3,-9,33,-16,46,-5,37,16,2,10,-2,-11,-1,-6,-12,48,45};
			c = Sum(a, 20, 1);
			Assert::AreEqual(c, 190);
		}
	};
}
