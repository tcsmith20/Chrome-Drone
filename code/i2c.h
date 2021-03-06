/*
 *             i2c.h
 *
 *   Created on:  February 18, 2017
 *  Last Edited:  February 18, 2018
 *       Author:  Nick Gorab
 *        Board:  5994
 */


#ifndef I2C_H_
#define I2C_H_

#include "system.h"

/* Initializes both UCB1 and UCB2 */
void i2c_init(void);

/* UCB2 Functions */
void i2c_UCB2_single_write(char slave_address, char memory_address, char *tx_data);
void i2c_UCB2_single_read(int slave_address, char memory_address, char *rx_data);
void i2c_UCB2_multiple_write(char slave_address, char memory_address, int size, char *tx_data);
void i2c_UCB2_multiple_read(int slave_address, char memory_address, int size, char *rx_data);

/* UCB1 Functions */
void i2c_UCB0_single_write(char slave_address, char memory_address, char *tx_data);
void i2c_UCB0_single_read(int slave_address, char memory_address, char *rx_data);
void i2c_UCB0_multiple_write(char slave_address, char memory_address, int size, char *tx_data);
void i2c_UCB0_multiple_read(int slave_address, char memory_address, int size, char *rx_data);

#endif /* I2C_H_ */
