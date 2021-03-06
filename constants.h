#ifndef GAME_H
#define GAME_H

#include "pio.h"

/**Blink rate for cursor*/
#define BLINK_RATE 200

uint8_t no_ships;
uint8_t pos_x;
uint8_t pos_y;
uint8_t prev_pos_x;
uint8_t player;
uint8_t map_view;
uint16_t time;
uint8_t my_ship_count;
uint8_t ur_ship_count;
uint8_t current_column;
uint16_t blink_timer_count;
uint8_t ship_map[5];
uint8_t cursor_map[5];
uint8_t hit_map[5];
uint8_t empty_map[5];

/** Define PIO pins driving LED matrix rows.
*   from lab2-ex5
*/
const pio_t rows[7];

/** Define PIO pins driving LED matrix columns.
*   from lab2-ex5
*/
const pio_t cols[5];


#endif
