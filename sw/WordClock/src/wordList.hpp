/*******************************************************************************
* FILENAME : WordList.h
*
* DESCRIPTION :
*     A mapping of words on the word clock to their corrisponding pixel numbers.
*
* AUTHOR : Iain Chalmers
*
* Copyright (c) 2016 Iain Chalmers
*
* START DATE : 24th October 2016
*
*******************************************************************************/
#include <stdint.h>
#include <vector>

// Non-numeric words
const std::vector<uint16_t> word_it { 1, 2 };
const std::vector<uint16_t> word_is { 4, 5 };
const std::vector<uint16_t> word_happy { 7, 8, 9, 10, 11 };
const std::vector<uint16_t> word_mum { 84, 83, 82 };
const std::vector<uint16_t> word_oclock { 116, 117, 118, 119, 120, 121 };
const std::vector<uint16_t> word_minutes { 34, 35, 36, 37, 38, 39, 40 };
const std::vector<uint16_t> word_to { 45, 46 };
const std::vector<uint16_t>
word_birthday { 47, 48, 49, 50, 51, 52, 53, 54 };
const std::vector<uint16_t> word_past { 66, 65, 64, 63 };

// Numeric words for displaying minutes
const std::vector<uint16_t> word_minutes_five { 30, 31, 32, 33 };
const std::vector<uint16_t> word_minutes_ten { 12, 13, 14 };
const std::vector<uint16_t>
word_minutes_quarter { 16, 17, 18, 19, 20, 21, 22 };
const std::vector<uint16_t> word_minutes_twenty { 23, 24, 25, 26, 27, 28 };
const std::vector<uint16_t> word_minutes_half { 41, 42, 43, 44 };

// Numeric words for displaying the hour
const std::vector<uint16_t> word_hours_one { 94, 95, 96 };
const std::vector<uint16_t> word_hours_two { 110, 109, 108 };
const std::vector<uint16_t> word_hours_three { 73, 74, 75, 76, 77 };
const std::vector<uint16_t> word_hours_four { 111, 112, 113, 114 };
const std::vector<uint16_t> word_hours_five { 81, 80, 79, 78 };
const std::vector<uint16_t> word_hours_six { 102, 101, 100 };
const std::vector<uint16_t> word_hours_seven { 107, 106, 105, 104, 103 };
const std::vector<uint16_t> word_hours_eight { 89, 90, 91, 92, 93 };
const std::vector<uint16_t> word_hours_nine { 88, 87, 86, 85 };
const std::vector<uint16_t> word_hours_ten { 97, 98, 99 };
const std::vector<uint16_t> word_hours_eleven { 67, 68, 69, 70, 71, 72 };
const std::vector<uint16_t> word_hours_twelve { 61, 60, 59, 58, 57, 56 };
