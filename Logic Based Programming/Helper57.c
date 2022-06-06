#include "Header57.h"

ULONGINT Power(int iNo1, int iNo2)
{
  register int iCnt = 0;
  ULONGINT LMult = 1;
  
  for(iCnt = 1; iCnt <= iNo2; iCnt++)
  {
    LMult = iNo1 * LMult;
  }
  return LMult;
}


//Multiple functions with business logic helper file madhe  asatat
