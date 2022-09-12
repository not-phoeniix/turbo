#pragma once
#include <pebble.h>

Window *main_window;
Layer *bg_layer, *time_ticks_layer, *time_hands_layer;

typedef struct ClaySettings {
    GColor color_background;
    GColor color_ticks_nums;
    GColor color_min_hand;
    GColor color_hour_hand;
} ClaySettings;

void update_stuff();

ClaySettings settings;