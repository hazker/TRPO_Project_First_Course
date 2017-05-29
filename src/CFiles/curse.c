#include <stdlib.h>
#include "library.h"
void curse(int XPos, int YPos)
{
 printf("\033[%d;%dH", YPos+1, XPos+1);
}
