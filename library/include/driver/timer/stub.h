/**
 * @brief Timer stub.
 */
#pragma once

#include <stdint.h>

#include "driver/timer/interface.h"

namespace driver
{
namespace timer
{
/**
 * @brief Timer stub.
 */
class Stub final : public Interface
{
public:
    Stub() noexcept 
        : myInitialized{true}
        , myEnabled{false}
        , myTimeOut{false}
    {}

    /**
     * @brief Destructor.
     */
    ~Stub() noexcept override = default;

    /**
     * @brief Check if the timer is initialized.
     * 
     *        An uninitialized timer indicates that no timer circuit was available when the timer 
     *        was created.
     * 
     * @return True if the timer is initialized, false otherwise.
     */
    bool isInitialized() const noexcept override { return myInitialized; }

    /**
     * @brief Check whether the timer is enabled.
     *
     * @return True if the timer is enabled, false otherwise.
     */
    bool isEnabled() const noexcept override { return myEnabled; }

    /**
     * @brief Check whether the timer has timed out.
     *
     * @return True if the timer has timed out, false otherwise.
     */
    bool hasTimedOut() const noexcept override { return myTimeOut; }


    /**
     * @brief Get the timeout of the timer.
     * 
     * @return The timeout in milliseconds.
     */
    uint32_t timeout_ms() const noexcept override 
    { 
        // Timeout is irrelevant for the stub, return 0.
        return 0;
    }

    /**
     * @brief Set timeout of the timer.
     * 
     * @param[in] timeout_ms The new timeout in milliseconds.
     */
    void setTimeout_ms(uint32_t timeout_ms) noexcept override 
    {
        // Timeout is irrelevant for the stub, do nothing.
        (void) (timeout_ms);
    }

    /**
     * @brief Start the timer.
     */
    void start() noexcept override
    {
        // Do nothing if the timer is uninitialized.
        if (!myInitialized) { return; }
        myEnabled = true;
        myTimeOut = false;
    }

    /**
     * @brief Stop the timer.
     */
     void stop() noexcept override
    {
        // Do nothing if the timer is uninitialized.
        if (!myInitialized) { return; }
        myEnabled = false;
        myTimeOut = true;
    }

    /**
     * @brief Toggle the timer.
     */
    void toggle() noexcept override
    {
        // Do nothing if the timer is uninitialized.
        if (!myInitialized) { return; }

        // Toggle the timer.
        myEnabled = !myEnabled;
        myTimeOut = false;
    }

    /**
     * @brief Restart the timer.
     */
     void restart() noexcept override
     {
        // Do nothing if the timer is uninitialized.
        if (!myInitialized) { return; }
        myEnabled = true;
        myTimeOut = false;
     }

    /**
     * @brief Set timeout status.
     *
     * @param[in] timedout true if the timer has timedout else false.
     */
     void setTimedOut(bool timedout) noexcept 
     {
        if (!myInitialized) { return;} 
            myTimeOut = timedout; 
     }

    Stub(const Stub&)            = delete; // No copy constructor.
    Stub(Stub&&)                 = delete; // No move constructor.
    Stub& operator=(const Stub&) = delete; // No copy assignment.
    Stub& operator=(Stub&&)      = delete; // No move assignment.

private: 
    bool myInitialized;
    bool myEnabled;
    bool myTimeOut;
};
} // namespace timer
} // namespace driver
