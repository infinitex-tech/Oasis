#include "include/softfloat.h"
#include "include/internals.h"

bool isNaNF128( const float128_t* f ) {
   const uint32_t* wptr = (const uint32_t*)f;
   return softfloat_isNaNF128M( wptr );
}
