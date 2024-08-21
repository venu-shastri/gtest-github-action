#include <gtest/gtest.h>
#include "StringCalculator.h"
class string_calculator_add_Fixture:public testing::Test{
  protected:
  StringCalculator calculator;

};
class string_calculator_add_Parameter_Fixture:
                                 public string_calculator_add_Fixture, 
                                 public testing::WithParamInterface<std::string>{
  protected:
  StringCalculator calculator;

};
INSTANTIATE_TEST_SUITE_P(SingleNumerParameter,
                         string_calculator_add_Parameter_Fixture,
                         testing::Values("1"));

TEST(string_calculator_add_when_passed_a_single_number,returns_0_for_empty_string){
 //Arrange
  StringCalculator calculator;
  string input=;
  int expectedsum=0;
  //Act
  int actualSum=calculator.Add(input);
  //Assert
  ASSERT_EQ(actualSum,expectedsum);
}

TEST_F(string_calculator_add_Fixture,when_passed_a_single_number_returns_0_for_zero){
 //Arrange
  string input="0";
  int expectedsum=0;
  //Act
  int actualSum=calculator.Add(input);
  //Assert
  ASSERT_EQ(actualSum,expectedsum);
}

TEST_P(string_calculator_add_Parameter_Fixture,when_passed_a_single_number_returns_1_for_one){
 //Arrange
  StringCalculator calculator;
  string input=GetParam();
  int expectedsum=1;
  //Act
  int actualSum=calculator.Add(input);
  //Assert
  ASSERT_EQ(actualSum,expectedsum);
}

TEST(string_calculator_add_when_passed_two_comma_delimited_numbers,returns_their_sum){
 //Arrange
  StringCalculator calculator;
  string input="1,2";
  int expectedsum=3;
  //Act
  int actualSum=calculator.Add(input);
  //Assert
  ASSERT_EQ(actualSum,expectedsum);
}
