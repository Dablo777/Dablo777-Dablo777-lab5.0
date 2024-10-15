#include "pch.h"
#include "CppUnitTest.h"
#include "../lab 5.1/lab5.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestForK
{
    TEST_CLASS(UnitTestForK)
    {
    public:

        // ���� ��� ���������� ������� x � y
        TEST_METHOD(TestMethodPositivValues)
        {
            double result = k(2.0, 3.0);
            Assert::AreEqual(result, 2.56095, 0.00001, L"������� ��� �������� ���������� �������");  // �������� ��� ������� ��������
        }

        // ���� ��� �������� ������� x � y
        TEST_METHOD(TestMethodZeroValues)
        {
            double result = k(0.0, 0.0);
            Assert::AreEqual(result, 0.0, 0.00001, L"������� ��� �������� �������� �������");
        }

        // ���� ��� ���������� ������� x � y
        TEST_METHOD(TestMethodNegativValues)
        {
            double result = k(-1.0, -1.0);
            Assert::AreEqual(result, -1.08545, 0.00001, L"������� ��� �������� ���������� �������");
        }

        // ���� ��� ������� ���������� � ���������� ������� x � y
        TEST_METHOD(TestMethodMixedValues)
        {
            double result = k(-1.0, 2.0);
            Assert::AreEqual(result, 0.452601, 0.00001, L"������� ��� �������� ������� �������");
        }

        // ���� ��� ������� �������
        TEST_METHOD(TestMethodLargeValues)
        {
            double result = k(308, 309);
            Assert::AreEqual(result, 169.864, 0.001, L"������� ��� �������� ������� �������");
        }

        // ���� ��� ����� �������
        TEST_METHOD(TestMethodSmallValues)
        {
            double result = k(1e-308, 1e-308);
            Assert::AreEqual(result, 0.0, 0.00001, L"������� ��� �������� ����� �������");
        }
    };
}
