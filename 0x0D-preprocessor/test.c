#ifndef FUNCTION_LIKE_MACRO_H
#define FUNCTION_LIKE_MACRO_H

#define ABS(x) ((x) ^ ((x) >> (sizeof(x) * CHAR_BIT - 1))) - ((x) >> (sizeof(x) * CHAR_BIT - 1))

#endif
