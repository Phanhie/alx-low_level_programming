#include <stdint.h>

int32_t get_bit(uint64_t n, uint32_t index)
{
    if (index >= (sizeof(uint64_t) * 8))
        return (-1);

    if ((n & (1ULL << index)) == 0)
        return (0);

    return (1);
}

