#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\Home\source\repos\Lab_5_4\Lab_5_4\Lab_5_4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest54I
{
	TEST_CLASS(UnitTest54I)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t = S2(0, 1, 1, 1);
			Assert::AreEqual(t, 0.);
		}
	};
}
