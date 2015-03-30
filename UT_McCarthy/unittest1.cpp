#include "stdafx.h"
#include "CppUnitTest.h"
#include <Header.h>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UT_McCarthy
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			// TODO: Ici, votre code de test
         for (int i = 0; i <= 100; i++)
            Assert::AreEqual(McCarthy(i), 91);

         for (int i = 101; i <= 120; i++)
            Assert::AreEqual(McCarthy(i), i - 10);
		}

	};
}