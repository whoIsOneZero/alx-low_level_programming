#ifndef BIT_HEADER
#define BIT_HEADER

#include <stddef.h>

/*--> FUNCTION PROTOTYPES <--*/
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int get_endianness(void);



#endif /*BIT_HEADER*/
