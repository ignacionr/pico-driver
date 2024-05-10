#include "pico/stdlib.h"

#define LED_PIN 25
#define GPIO_ON 1
#define GPIO_OFF 0

int main() {
    stdio_init_all();
    gpio_init(LED_PIN);
    gpio_set_dir(LED_PIN, GPIO_OUT);

    while (true) {
        gpio_put(LED_PIN, GPIO_ON);
        sleep_ms(500);
        gpio_put(LED_PIN, GPIO_OFF);
        sleep_ms(500);
    }

    return 0;
}
