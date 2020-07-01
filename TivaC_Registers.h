

#ifndef TivaC_Registers_H
#define TivaC_Registers_H

#include "STD.h"

#define   APINT                   (*(volatile uint32*)( 0xE000ED0C ))

#define   Enable_Register_Base    (volatile uint32*)( 0xE000E100 )


#define   EN0                     (*(volatile uint32*)( 0xE000E100 ))


#define   EN1                     (*(volatile uint32*)( 0xE000E104 ))


#define   EN2                     (*(volatile uint32*)( 0xE000E108 ))


#define   EN3                     (*(volatile uint32*)( 0xE000E10C ))


#define   EN4                     (*(volatile uint32*)( 0xE000E110 ))


#define   Priority_Register_Base  (volatile uint32*)( 0xE000E400 )
 













#endif