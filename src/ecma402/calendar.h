/*
   +----------------------------------------------------------------------+
   | ecma_intl extension for PHP                                          |
   +----------------------------------------------------------------------+
   | Copyright (c) Ben Ramsey <ben@benramsey.com>                         |
   | This source file is subject to the MIT license that is bundled with  |
   | this package in the file LICENSE, and is available at the following  |
   | web address: https://opensource.org/license/mit/                     |
   +----------------------------------------------------------------------+
*/

#ifndef ECMA_INTL_ECMA402_CALENDAR_H
#define ECMA_INTL_ECMA402_CALENDAR_H

#include "src/common.h"

#define CALENDAR_CAPACITY 25

#ifdef __cplusplus
extern "C" {
#endif

/**
 * Returns a list of unique canonical calendar types supported by this
 * implementation.
 *
 * The values parameter should already be allocated on the stack with enough
 * memory to store all the values. Typically, this should use
 * CALENDAR_CAPACITY. For example:
 *
 *     malloc(sizeof(const char *) * CALENDAR_CAPACITY)
 *
 * @param values A pointer in which to store the resulting char array of
 * calendar values.
 *
 * @return The total count of the number of values stored to the char array.
 */
int getAvailableCanonicalCalendars(const char **values);

#ifdef __cplusplus
}
#endif

#endif /* ECMA_INTL_ECMA402_CALENDAR_H */
