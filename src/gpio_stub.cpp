#include "gpio.h"
#include "log.h"

GpioRelay::GpioRelay(int GpioPIN)
{
	this->pin_id = GpioPIN;
}

GpioRelay::~GpioRelay()
{
	this->SetStatus(false);
	DEBUG_PRINT(LOG_INFO, "Delete Gpio device #" << this->pin_id);
}

int GpioRelay::SetStatus(bool on)
{
	is_on = on;

	DEBUG_PRINT(LOG_INFO, "Change pin #" << this->pin_id << " state to " << on );

	return 1;
}

