#include <atmel_start.h>

int main(void)
{
	/* Initializes MCU, drivers and middleware */
	atmel_start_init();

	/* Replace with your application code */
	while (1) {
		/* Check the status of SW0 */
		/* 0: Pressed */
		if (!SW0_get_level()) {
			/* LED0 on */
			LED0_set_level(true);
		}
		/* 1: Released */
		else {
			/* LED0 off */
			LED0_set_level(false);
		}
	}
}
