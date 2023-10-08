#ifndef _DISTANCES_H_
#define _DISTANCES_H_

#include "Addable.h"
#include "Printable.h"
#include "Swappable.h"
#include "StrongType.h"

template<typename T>
using Meter = StrongType<T, struct MeterTag, Addable, Printable, Swappable>;

template<typename T>
using Kilometer = StrongType<T, struct KilometerTag, Addable, Printable, Swappable>;

#endif