#include "malloc.h"

#include <util/system/compiler.h>

////////////////////////////////////////////////////////////////////////////////

Y_WEAK extern "C" size_t nallocx(size_t size, int /*flags*/) noexcept
{
    return size;
}

Y_WEAK extern "C" size_t malloc_usable_size(void* /*ptr*/) noexcept
{
    return 0;
}

////////////////////////////////////////////////////////////////////////////////
