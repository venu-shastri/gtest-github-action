#include "PrintColorCode.h"
#include <gtest/gtest.h>

TEST(PrintColorCodeTestSuite, AssertColorCodeManualItemsCount){
//Arrange
  int expectedCount=25;
 //Act
  int actualCount=printColorCode();
  //Assert
  ASSERT_EQ(expectedCount,actualCount);
  
}

