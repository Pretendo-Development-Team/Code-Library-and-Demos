/*
 * SSD1963_Functions.h
 *
 * Created: 4/29/2017 11:58:58 AM
 *  Author: Chris Dickinson
 */ 

#ifndef	SSD1963_FUNCTIONS_DEFINED
	#define SSD1963_FUNCTIONS_DEFINED

	//--------------	DEPENDENCIES 	---------------------------
	#include "SSD1963_CommandLib.h"

	//--------------	CODE CONFIG		---------------------------


	//--------------	FUNCTION PROTOTYPES		--------------------
	void tft_init_configuration( void );
	
	void tft_write_pixel_val( uint8_t, uint8_t, uint8_t, uint8_t );

	void tft_write_screen( void );

#endif
