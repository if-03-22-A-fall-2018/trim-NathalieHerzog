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
        if(str[i] == ' ' && !trimDone)
        {
            if(str[i+1] >= 'A' || str[i+1] <= 'Z')
            {
                for(int u = 0; u < STRLEN; u++)
                {
                    trimmed[u] = str[i+1];
                    i++;
                }

                trimDone = true;
            }
        }
    }

    trimDone = false;

    for(int i = STRLEN; i > 0; i--)
    {
        if(str[i] == ' ' && !trimDone)
        {
            if(str[i-1] >= 'A' || str[i-1] <= 'Z')
            {
                for(int u = STRLEN; u > 0; u++)
                {
                    trimmed[u] = '\0';
                }

                trimDone = true;
            }
        }
    }
}