#include <stdlib.h>
#include "resistor_color.h"

unsigned int color_code(resistor_band_t c) {
    return c;
}
resistor_band_t* colors() {
    resistor_band_t * c = malloc(10* sizeof(resistor_band_t));
    for (size_t i = 0; i < 10; i++) {
        c[i] = i;
    }
    return c;
}
    