#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_6.3 iter/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int actual;
			int expected = 8;
			int a[] = { 3, 5, 8, 4 };
			int size = 4;
			int max = a[0];
			for (int i = 1; i < size; i++)
				if (a[i] > max && a[i] % 2 == 0)
					max = a[i];
			actual = max;
			Assert::AreEqual(actual, expected);
		}
	};
}
