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
#include <stdbool.h>

void trim (const char* str, char* trimmed)
{
    bool trimDone = false;

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
    
    size_t n = strlen(str);
    while(trimmed[n] == ' ' || trimmed[n] == '\0')
    {
        trimmed[n] = '\0';
        n--;
    }
}