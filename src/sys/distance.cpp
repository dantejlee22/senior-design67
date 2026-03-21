#include "distance.h"
#include "../drv/ir_driver.h"
#include <math.h>

/// @brief configures distance sensors and relevant pins, boots sensors
/// @param
void setup_distance(void)
{
    ir_sensor_setup(LED_LEFT, SENSOR_LEFT, LED_FORWARD_LEFT, SENSOR_FORWARD_LEFT, LED_FORWARD_RIGHT, SENSOR_FORWARD_RIGHT, LED_RIGHT, SENSOR_RIGHT);
}

/// @brief
/// @param
/// @return right sensor measurement in mm
uint16_t rightDistance(void)
{
    uint16_t volt = right_voltage();
    uint16_t millis = pow(volt/4751.13808,(1.0/-.606735));
    return volt;
}

/// @brief
/// @param
/// @return left sensor measurement in mm
uint16_t leftDistance(void)
{
    uint16_t volt = left_voltage();
    uint16_t millis = pow(volt/4375.04273,(1.0/-.594013));
    return volt;
}

/// @brief
/// @param
/// @return (right ) forward sensor measurement in mm
uint16_t forwardDistance(void)
{
    uint16_t volt = front_right_voltage();
    uint16_t millis = pow(volt/3179.19145,(1.0/-.315761));
    return volt;
}

// left forward sensor distance in mm
uint16_t forwardLeftDistance(void)
{
    uint16_t volt = front_left_voltage();
    uint16_t millis = pow(volt/2287.66907,(1.0/-.505933));
    return volt;
}
