#include "data.h"
#include <stdint.h>
#include <stddef.h>
void print_cstd_type_sizes()
{
  size_t temp;
  temp  = sizeof(char);
  PRINTF(temp,"char");
  temp  = sizeof(short);
  PRINTF(temp,"short");
  temp  = sizeof(int);
  PRINTF(temp,"int");
  temp  = sizeof(long);
  PRINTF(temp,"long");
  temp  = sizeof(double);
  PRINTF(temp,"double");
  temp  = sizeof(float);
  PRINTF(temp,"float");
  temp  = sizeof(unsigned char);
  PRINTF(temp,"unsigned char");
  temp  = sizeof(unsigned int);
  PRINTF(temp,"unsigned int");
  temp  = sizeof(unsigned long);
  PRINTF(temp,"unsigned long");
  temp  = sizeof(signed char);
  PRINTF(temp,"signed char");
  temp  = sizeof(signed int);
  PRINTF(temp,"signed int");
  temp  = sizeof(signed long);
  PRINTF(temp,"signed long");
  return;
}

void print_stdint_type_sizes()
{
  size_t temp;
  temp  = sizeof(int8_t);
  PRINTF(temp,"int8_t");
  temp  = sizeof(uint8_t);
  PRINTF(temp,"uint8_t");
  temp  = sizeof(int16_t);
  PRINTF(temp,"int16_t");
  temp  = sizeof(uint16_t);
  PRINTF(temp,"uint16_t");
  temp  = sizeof(int32_t);
  PRINTF(temp,"int32_t");
  temp  = sizeof(uint32_t);
  PRINTF(temp,"uint32_t");
  temp  = sizeof(uint_fast8_t);
  PRINTF(temp,"uint_fast8_t");
  temp  = sizeof(uint_fast16_t);
  PRINTF(temp,"uint_fast16_t");
  temp  = sizeof(uint_fast32_t);
  PRINTF(temp,"uint_fast32_t");
  temp  = sizeof(uint_least8_t);
  PRINTF(temp,"uint_least8_t");
  temp  = sizeof(uint_least16_t);
  PRINTF(temp,"uint_least16_t");
  temp  = sizeof(uint_least32_t);
  PRINTF(temp,"uint_least32_t");
  temp  = sizeof(size_t);
  PRINTF(temp,"size_t");
  temp  = sizeof(ptrdiff_t);
  PRINTF(temp,"ptrdiff_t");
  return;
}
void print_pointer_sizes()
{ 
  size_t temp;
  temp  = sizeof(char*);
  PRINTF(temp,"char*");
  temp  = sizeof(short*);
  PRINTF(temp, "short*");
  temp  = sizeof(int*);
  PRINTF(temp,"int*");
  temp  = sizeof(long*);
  PRINTF(temp,"long*");
  temp  = sizeof(double*);
  PRINTF(temp,"double*");
  temp  = sizeof(float*);
  PRINTF(temp,"float*");
  temp  = sizeof(void*);
  PRINTF(temp,"void*");
  temp  = sizeof(int8_t*);
  PRINTF(temp,"int8_t*");
  temp  = sizeof(int16_t*);
  PRINTF(temp,"int16_t*");
  temp  = sizeof(int32_t*);
  PRINTF(temp,"signed char");
  temp  = sizeof(char**);
  PRINTF(temp,"char**");
  temp  = sizeof(int**);
  PRINTF(temp,"int**");
  temp  = sizeof(void*);
  PRINTF(temp,"void*");
  return;
}

