/*----------------------------------------------------------
 *				HTBLA-Leonding / Klasse: 2AHIF
 * ---------------------------------------------------------
 * Exercise Number: 8
 * Title:			trim.cpp
 * Author:			N. Herzog
 * Due Date:		March 14, 2015
 * ----------------------------------------------------------
 * Description:
 * Test functions for trim.h
 * ----------------------------------------------------------
 */

#include "trim.h"
#include <stdio.h>
#include <string.h>

void trim (const char* str, char* trimmed)
{
    bool trimDone = false;

    /*if(strlen(str) == 0)
    {
        trimmed = strdup("");
    }*/

    for(int i = 0; i < STRLEN; i++)
    {
        if(str[i] != ' ' && !trimDone)
        {
            for(int u = 0; i < STRLEN; u++)
            {
                trimmed[u] = str[i];
                i++;
            }

            trimDone = true;
        }
    }

    trimDone = false;

    for(int i = STRLEN; i > 0; i--)
    {
        if(str[i] == ' ' && !trimDone)
        {
            trimmed[i] = '\0';   

            if(str[i-1] != ' ')
            { 
                trimDone = true;       
            }
        }
    }
}