/*****************************************************************************/
/*                                                                            */
/* Project N�  :  RB0505                                                      */
/*                                                                            */
/*----------------------------------------------------------------------------*/
/*                                                                            */
/* Filename  : DRV_DIS_grSetPixel.c */
/*                                                                            */
/*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*/


/******************************************************************************/
/*%C                     Functionnal description :                            */
/*%C                  */
/******************************************************************************/
/*%I Input Parameter :  NONE                                            */
/*%IO Input/Output :    NONE	                                              */
/*%O Output Parameter : NONE       */
/******************************************************************************/

/******************************************************************************/
/*                                INCLUDE FILES		                          */
/******************************************************************************/

#include "typedef.h"
#include "Driver_Display_Data.h"
#include "DRV_DIS_grSetPixel.h"						 
/******************************************************************************/
/*                            FUNCTION BODY                                   */
/******************************************************************************/

void DRV_DIS_grSetPixel ( UWORD16 posx, UBYTE posy )
{
	DRV_DIS_grWriteDisplay(grESC);
	DRV_DIS_grWriteDisplay('P');
	DRV_DIS_grWriteDisplay(posx>>8);
	DRV_DIS_grWriteDisplay((UBYTE) posx);
	DRV_DIS_grWriteDisplay( posy);
}
