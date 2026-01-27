/**
 * @brief Temperature sensor stub.
 */
#pragma once

#include <stdint.h>

#include "driver/tempsensor/interface.h"

namespace driver
{
namespace tempsensor
{
/**
 * @brief Temperature sensor stub.
 */
class Stub final : public Interface 
{
public:
    /**
     * @brief Constructor.
     */

     Stub() noexcept
         : myRead{}
         , myInitialized{true}
     {}

    /**
     * @brief Destructor.
     */
     ~Stub() noexcept override = default;

    /**
     * @brief Check if the temperature sensor is initialized.
     * 
     * @return True if the temperature sensor is initialized, false otherwise.
     */
     bool isInitialized() const noexcept override  { return myInitialized; }

    /**
     * @brief Read the temperature sensor.
     *
     * @return The temperature in degrees Celsius.
     */
    int16_t read() const noexcept override { return myRead; }

    void setTemperature (int16_t temperature) noexcept 
    {
       myRead = temperature;
    }

    Stub(const Stub&)            = delete; // No copy constructor.
    Stub(Stub&&)                 = delete; // No move constructor.
    Stub& operator=(const Stub&) = delete; // No copy assignment.
    Stub& operator=(Stub&&)      = delete; // No move assignment.

private:

     int16_t myRead;
     bool myInitialized;
     
};
} // namespace tempsensor
} // namespace driver