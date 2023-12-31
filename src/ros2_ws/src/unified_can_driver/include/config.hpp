#ifndef UNIFIED_CONFIG_H
#define UNIFIED_CONFIG_H


/* Enable words for HW modules */
#define MODULE_MS5837_ENABLE		0b00000000000000000000000000000001
#define MODULE_DVL_ENABLE			0b00000000000000000000000000000010
#define MODULE_EMBEDSYS_ENABLE		0b00000000000000000000000000000100
#define MODULE_PWRSYS_ENABLE		0b00000000000000000000000000001000
#define MODULE_BRLIGHT_ENABLE		0b00000000000000000000000000010000
#define MODULE_BRPING1_ENABLE		0b00000000000000000000000000100000

/* Global settings */
extern	std::string can_bus_interface;
extern 	uint32_t module_enabled_field;
extern	bool do_device_polling;
#endif
