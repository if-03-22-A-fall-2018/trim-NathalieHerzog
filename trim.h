/*----------------------------------------------------------
 *				HTBLA-Leonding / Klasse: 2AHIF
 * ---------------------------------------------------------
 * Exercise Number: 8
 * Title:			trim.h
 * Author:			N. Herzog
 * Due Date:		March 14, 2015
 * ----------------------------------------------------------
 * Description:
 * Interface for trim
 * ----------------------------------------------------------
 */

#ifndef __TRIM_H
#define __TRIM_H

//the smallest possible number (for it to work) is 16
//anything smaller than that would cause an "index out-of-range"
#define STRLEN 64

void trim (const char* str, char* trimmed);

#endif