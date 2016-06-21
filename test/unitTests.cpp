#include <gtest/gtest.h>
#include <iostream>

#include "../src/mathExamples.cpp"


using namespace std;

TEST (divideFunction, commmonDivide)
{
  MathFunction mathFuncion;

  ASSERT_EQ(mathFuncion.divide(10,2), 5);
}

TEST (divideFunction, divideByZero)
{
  MathFunction mathFuncion;
  
  ASSERT_DEATH(mathFuncion.divide(10,0), "Error: Denominator is equal to zero");
}


// -------------------------------

int main(int argc, char * argv[])
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
