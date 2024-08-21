#include "PrintColorCode.h"
#include <gtest/gtest.h>

//TestDouble, FakeDependnecy, Stub , Dumb
void FakePrinter(int colorCode, const char* majorColor,const char* minorColor){

}

class FakePrinterTestDouble:public IPrinter{

public:
      void print(int colorCode, const char* majorColor,const char* minorColor){
      }
};
TEST(PrintColorCodeTestSuite, AssertColorCodeManualItemsCount){
//Arrange
  int expectedCount=25;
 //Act
  int actualCount=printColorMap(&FakePrinter);
  //Assert
  ASSERT_EQ(expectedCount,actualCount);
  
}
TEST(PrintColorCodeTestSuite, AssertColorCodeManualItemsCountUsingStub){
//Arrange
  int expectedCount=25;
  FakePrinterTestDouble dependency;
 //Act
  int actualCount=printColorMap(&dependency);
  //Assert
  ASSERT_EQ(expectedCount,actualCount);
  
}

