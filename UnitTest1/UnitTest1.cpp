#include "pch.h"
#include "CppUnitTest.h"
#include "../3.3(B)/Vector2D.h"
#include "../3.3(B)/Vector2D.cpp"
#include "../3.3(B)/Pair.h"
#include "../3.3(B)/Pair.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Vector2D a(3, 4);
			Assert::AreEqual(a.Modul(), 5.0);
		}
	};
}
