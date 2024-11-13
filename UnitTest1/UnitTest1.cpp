#include "pch.h"
#include "CppUnitTest.h"

#include "../ConsoleApplication1/ConsoleApplication1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestCountProgrammingGrades)
        {
            
            Student students[3] = {
                { "Ivanenko", 1, KN, {5, 4, 5} },  
                { "Petrenko", 2, PM, {4, 4, 4} },  
                { "Shevchenko", 3, FI, {3, 3, 3} } 
            };

            int count5, count4, count3;
            CountProgrammingGrades(students, 3, count5, count4, count3);

           
            Assert::AreEqual(1, count5, L"Кількість оцінок '5' не співпадає.");
            Assert::AreEqual(1, count4, L"Кількість оцінок '4' не співпадає.");
            Assert::AreEqual(1, count3, L"Кількість оцінок '3' не співпадає.");
        }

      
        TEST_METHOD(TestCalculateHighPhysicsMathPercentage)
        {
            
            Student students[3] = {
                { "Ivanenko", 1, KN, {5, 4, 3} },
                { "Petrenko", 2, PM, {4, 4, 4} },
                { "Shevchenko", 3, FI, {3, 5, 5} }
            };

            double percentage = CalculateHighPhysicsMathPercentage(students, 3);

           
            Assert::AreEqual(66.67, percentage, 0.01, L"Відсоток студентів з оцінками '4' або '5' не співпадає.");
        }
    };
}
