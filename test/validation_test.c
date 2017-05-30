#include "library.h"

#include "ctest.h"


/*
CTEST(Cheak, InitWorld)
{
	int result = initWorld(World);
	int expected = 0;
	ASSERT_EQUAL(expected, result);
}

CTEST(Cheak, PrintWorld)
{
	initWorld(World);
  	int result = PrintWorld(world);
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
	initWorld(world);
	int result = life(world);
	int expected = 2;
	ASSERT_EQUAL(expected, result);
}

CTEST(Cheak, LogicLife3)
{
	initWorld(world);
  	int result = life(world);
	int expected = 3;
	ASSERT_EQUAL(expected, result);
}

CTEST(Cheak, LogicLifeNotLifeFail)
{
	initWorld(world);
	int expected = 0;
  	int result = life(world);
  	if(result<=1 || result>=4){
	expected=result ;}
	ASSERT_EQUAL(expected, result);
}*/
CTEST(Cheak, RulesOpenTrue)
 {
	int result = rules();
	int expected = 1;
	ASSERT_EQUAL(expected, result);
 }

