#ifndef IR_DRIVER_H
#define IR_DRIVER_H

#include <stdint.h>

void ir_sensor_setup(
    uint8_t left_led,
    uint8_t left_photo,
    uint8_t forward_left_led,
    uint8_t forward_left_photo,
    uint8_t forward_right_led,
    uint8_t forward_right_photo,
    uint8_t right_led,
    uint8_t right_photo
);

uint16_t front_left_voltage(void);
uint16_t front_right_voltage(void);
uint16_t left_voltage(void);
uint16_t right_voltage(void);

#endif