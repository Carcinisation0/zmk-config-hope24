/* 24 KEY MATRIX / LAYOUT MAPPING (REDUCED)
   Mapowanie 38 fizycznych pozycji na 24 klawisze logiczne

   Układ logiczny:
   0  1  2  3      4  5  6  7    (Górny rząd)
   8  9 10 11     12 13 14 15    (Środkowy rząd / Home Row)
         16 17    18 19          (Dolny rząd wewnętrzny)
         20 21    22 23          (Kciuki)
*/

#pragma once

// --- LEWA STRONA ---
// Górny rząd (od małego palca do wskazującego)
#define KEY_0  1  // LT3
#define KEY_1  2  // LT2
#define KEY_2  3  // LT1
#define KEY_3  4  // LT0

// Środkowy rząd (od małego palca do wskazującego)
#define KEY_8  11 // LM3
#define KEY_9  12 // LM2
#define KEY_10 13 // LM1
#define KEY_11 14 // LM0

// Dolny rząd wewnętrzny
#define KEY_16 24 // LB1
#define KEY_17 25 // LB0

// Kciuki
#define KEY_20 33 // LH1
#define KEY_21 34 // LH0


// --- PRAWA STRONA ---
// Górny rząd (od wskazującego do małego palca)
#define KEY_4  5  // RT0
#define KEY_5  6  // RT1
#define KEY_6  7  // RT2
#define KEY_7  8  // RT3

// Środkowy rząd (od wskazującego do małego palca)
#define KEY_12 15 // RM0
#define KEY_13 16 // RM1
#define KEY_14 17 // RM2
#define KEY_15 18 // RM3

// Dolny rząd wewnętrzny
#define KEY_18 26 // RB0
#define KEY_19 27 // RB1

// Kciuki
#define KEY_22 35 // RH0
#define KEY_23 36 // RH1
