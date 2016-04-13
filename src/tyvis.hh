#ifndef TYVIS_GENERAL_CONFIG_HH
#define TYVIS_GENERAL_CONFIG_HH

#ifndef NULL
#define NULL 0
#endif

/*
 * Asserts
 */
#ifndef ASSERT
#include <cassert>
// #define ASSERT(x) assert( x || parse_error == true )
#define ASSERT(x) assert( x )
#endif

#endif // TYVIS_GENERAL_CONFIG_HH
