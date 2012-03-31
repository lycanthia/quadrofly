/**
 * Quadrofly Software (http://quadrofly.ni-c.de)
 *
 * @file 	receiver/main.h
 * @brief 	Global header file.
 * @author 	Willi Thiel (wthiel@quadrofly.ni-c.de)
 * @date 	Mar 6, 2012
 */
#ifndef MAIN_H_
#define MAIN_H_

#include <inttypes.h>

#ifndef F_CPU
#define F_CPU 1000000UL /*!< Set CPU clock */
#endif

//#define SIMULAVR_AVAILABLE /*!< Compile for the simulavr simulator */
#define LOG_AVAILABLE /*!< Is Logging available */

#define UART_AVAILABLE /*!< Is UART available */
#define BAUD 9600UL /*!< UART Baudrate in bit per second */

//#define I2C_MASTER_AVAILABLE /*!< I2C is available as master */

#define RFM12B_AVAILABLE /*!< Is RFM12B available */

/* Dependencies */
#ifdef SIMULAVR_AVAILABLE
#undef UART_AVAILABLE /*!< UART doesn't work if the software runs on simulavr, deactivate it */
#endif /* SIMULAVR_AVAILABLE */

#endif
