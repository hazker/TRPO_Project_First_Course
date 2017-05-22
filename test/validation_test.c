#include "library.h"
#include "ctest.h"

CTEST(Cheak,InitWorld )
{
  const int result = initWorld(struct world[WorldH][WorldW]);
    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}
