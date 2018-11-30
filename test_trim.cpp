/*----------------------------------------------------------
 *				HTBLA-Leonding / Klasse: <your class>
 * ---------------------------------------------------------
 * Exercise Number: 8
 * Title:			test_trim.cpp
 * Author:			P. Bauer
 * Due Date:		March 15, 2015
 * ----------------------------------------------------------
 * Description:
 * Test functions for trim.
 * ----------------------------------------------------------
 */
#include <string.h>

#include "shortcut.h"
#include "trim.h"
#include "test_trim.h"

/******************************************************************************
 * empty_substring: tests that trimming an empty string yields an empty
 * string.
 *
 ******************************************************************************/
TEST(empty_substring)
{
	char str[STRLEN] = "";
	char trimmed[STRLEN] = "no content";

	trim(str, trimmed);
	ASSERT_EQUALS("", trimmed);
}

/******************************************************************************
 * total_string: returns the original string.
 *
 *
 ******************************************************************************/
TEST(total_string)
{
	char str[STRLEN] = "PRPR is fun";
	char trimmed[STRLEN] = "no content";

	trim(str, trimmed);
	ASSERT_EQUALS(str, trimmed);
}

/******************************************************************************
 * leading_blanks: cuts off blank space at the beginning.
 *
 *
 ******************************************************************************/
TEST(leading_blanks)
{
	char str[STRLEN] = "    PRPR is fun";
	char trimmed[STRLEN] = "no content";

	trim(str, trimmed);
	ASSERT_EQUALS("PRPR is fun", trimmed);
}

/******************************************************************************
 * trailing_blanks: cuts off blank space after the text.
 *
 *
 ******************************************************************************/
TEST(trailing_blanks)
{
	char str[STRLEN] = "PRPR is fun    ";
	char trimmed[STRLEN] = "no content";

	trim(str, trimmed);
	ASSERT_EQUALS("PRPR is fun", trimmed);
}

/******************************************************************************
 * leading_and_trailing_blanks: cuts off blank space before and after 
 * the text.
 *
 ******************************************************************************/
TEST(leading_and_trailing_blanks)
{
	char str[STRLEN] = " PRPR is fun ";
	char trimmed[STRLEN] = "no content";

	trim(str, trimmed);
	ASSERT_EQUALS("PRPR is fun", trimmed);
}
