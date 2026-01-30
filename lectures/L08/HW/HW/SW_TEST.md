# HW SW TEST

#### 1. Basic funktionalitet
* **Power-on test**: Uppload the code onto the Arduino uno and open the serialmonitor to check if the system is running correctly.
* The following should be printed: 


#### 2. Toggle-function
  * Press the toggle-button **(SWITCH3)** and verify that the LED starts flashing.
  * Press the button again and verify that the LED stops flashing
  * Meassure witch speed the LED is flashing
  * Press the button repetedly to check if the debounce is working properly - repeated button press with in **300 ms** should be ignored.

#### 3. Temperaturereading
* Press the temperature button and verify that the temp is printed in the seriall monitor
* Compare the temperature with normal room temperature is it resenable?
* Warm the tempreature sensor wtih your hand and verfiy that the temperautre rises.
* Verify that the autoumatic temperature printing follows the timer.
* Press the button repetedly to check if the debounce is working properly - repeated button press with in **300 ms** should be ignored.

#### 4. Watchdog timer
* Verify that the watchdog timer is aktive at power on. 
* To test watchdog-functionality introduce a bug in logic.cpp by commenting out line 109 myWatchdog.reset();.
* Verify that the system resetts automaticly after the watchdog-timeout **1024 ms**.
* Check that the system starts correctly after the watchdog reset.
* Remove the introduced bug and verify that the system runs as normal onesagain.

#### 5. EEPROM-persistens
* Activate the toggle-timer **(SWITCH 3)** so the LED starts falshing and then power off the system.
* Restart the system by pressing RESET-button on the Arduino Uno.and verify that the toggle-state resets from the **EEPROM** memory - LED should then start directly after the restart and the print `Toggle timer enabled!` will apeare in the terminal. 
* Deactivate the toggle-timer so the LED turns off and then power off the system.
* Restart onesagain and verify that the toggle-state still is deactivated - LED should be off.