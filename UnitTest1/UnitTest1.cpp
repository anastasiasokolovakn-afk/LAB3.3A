#include "pch.h"
#include "CppUnitTest.h"
#include "../LAB3.3A/Complex.h"
#include "../LAB3.3A/Complex.cpp"
#include "../LAB3.3A/ComplexPublic.h"
#include "../LAB3.3A/ComplexPublic.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestInitialization)
		{
			ComplexPublic obj(5.0, -2.5);

			Assert::AreEqual(5.0, obj.GetX());
			Assert::AreEqual(-2.5, obj.GetY());
		}

		TEST_METHOD(TestAdditionOperator)
		{
			ComplexPublic a(1.0, 2.0);
			ComplexPublic b(3.0, 4.0);

			ComplexPublic result = a + b;

			Assert::AreEqual(4.0, result.GetX());
			Assert::AreEqual(6.0, result.GetY());
		}
	};
}