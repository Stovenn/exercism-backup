#include <stdlib.h>
#include "resistor_color.h"

unsigned int color_code(resistor_band_t c) {
    return c;
}
resistor_band_t* colors() {
    static resistor_band_t c[10] = {
        BLACK, BROWN, RED, ORANGE, YELLOW,
        GREEN, BLUE, VIOLET, GREY, WHITE
    };
    return c;
}
