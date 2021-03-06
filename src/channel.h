#ifndef VALVE_H
#define VALVE_H

#include <string>

#include "cal.h"
#include "gpio.h"

using namespace std;

// Type declaration
struct channel_t
{
    iCalValveControl vc;
    GpioRelay gpio;
    const string url;

    channel_t(string ical_url, int gpio_pin) : gpio(gpio_pin), vc(GT_DEFUALT), url(ical_url) {}

    string get_hash();
    string get_cache_filename();
    bool load_cached(int max_age = 360);
    int load_from_url(bool store_to_cache = true);


};

#endif