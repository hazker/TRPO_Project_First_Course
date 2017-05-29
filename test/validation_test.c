#include "library.h"
//#include "struct.h"//?
#include "ctest.h"

CTEST(Cheak, InitWorld)
{
  	int result = initWorld(World);
    int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(Cheak, PrintWorld)
{
	initWorld(World);
  	int result = PrintWorld(World);
    int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(Cheak, CopyPast)
{
	initWorld(World);
  	int result = CopyPast(CopyWorld,World);
    int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(Cheak, LogicLifeFor2)
{
	initWorld(World);
  	int result = life(World);

    int expected = 2;
    ASSERT_EQUAL(expected, result);
}

CTEST(Cheak, LogicLife3)
{
	initWorld(World);
  	int result = life(World);
    int expected = 3;
    ASSERT_EQUAL(expected, result);
}

CTEST(Cheak, LogicLifeNotLifeFail)
{
	initWorld(World);
  	int result = life(World);
  	if(result<=1 || resul>=4){
  		int expected=result ;
	  }
    ASSERT_EQUAL(expected, result);
}
CTEST(Cheak, RulesOpenTrue)
 {
   	int result = rules();
     int expected = 1;
     ASSERT_EQUAL(expected, result);
 }

