/******************************************************************************/
/*																										*/
/* Project Number	: 	RB0505     			     		                       	  		*/
/*																										*/
/*----------------------------------------------------------------------------*/
/*                                                                 			  	*/
/* Filename	: DB_CurrentRead.c 			   				                  		*/
/*                                                           				  		*/
/*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*/


/******************************************************************************/
/*%C 			Functionnal description : 	this function reads the values in the	*/
/*%C         current base																		*/
/*                                                            				  		*/
/******************************************************************************/
/*%I 	Input Parameter : 			Id			        			                  	*/
/*%IO Input/Output Parameter : 	None 	        			                  		*/
/*%O 	Output Parameter : 			DB_Current[Id]               				  		*/
/******************************************************************************/

/******************************************************************************/
/*                                INCLUDE FILES		                          	*/
/******************************************************************************/
#include "typedef.h"

#define DECLARATION_CURRENT_BASE
#include "DB_Current.h"
/******************************************************************************/
/*                    EXTERNAL FUNCTION DECLARATION                          	*/
/******************************************************************************/
UWORD16 DB_CurrentRead(e_DB_ADJUST_CURRENT Id)
{
	return (DB_Current[Id]);	
}
