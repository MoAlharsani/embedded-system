#ifndef BITS_UTILS_H
#define BITS_UTILS_H

#include <stdint.h>
#include <stdbool.h>

/* Function to toggle multiple bits in reg specified by mask */
static inline void toggle_bits(volatile uint32_t *reg, uint32_t mask) {
    /* Toggle the bits specified by mask in reg */
    *reg ^= mask;
}

/* Function to set multiple bits in reg specified by mask */
static inline void set_bits(volatile uint32_t *reg, uint32_t mask) {
    /* Set the bits specified by mask in reg */
    *reg |= mask;
}

/* Function to clear multiple bits in reg specified by mask */
static inline void clear_bits(volatile uint32_t *reg, uint32_t mask) {
    /* Clear the bits specified by mask in reg */
    *reg &= ~mask;
}

/* Function prototypes for uint32_t */
static inline bool is_set(volatile uint32_t *reg, uint8_t n) {
    /* Check if the nth bit in reg is set */
    return (*reg & (1U << n)) != 0;
}

static inline void set_bit(volatile uint32_t *reg, uint8_t n) {
    /* Set the nth bit in reg */
    *reg |= (1U << n);
}

static inline void clear_bit(volatile uint32_t *reg, uint8_t n) {
    /* Clear the nth bit in reg */
    *reg &= ~(1U << n);
}

static inline void toggle_bit(volatile uint32_t *reg, uint8_t n) {
    /* Toggle the nth bit in reg */
    *reg ^= (1U << n);
}



/* Bit definitions up to bit number 31 */
#define B0   0x00000001U  /* Bit 0 */
#define B1   0x00000002U  /* Bit 1 */
#define B2   0x00000004U  /* Bit 2 */
#define B3   0x00000008U  /* Bit 3 */
#define B4   0x00000010U  /* Bit 4 */
#define B5   0x00000020U  /* Bit 5 */
#define B6   0x00000040U  /* Bit 6 */
#define B7   0x00000080U  /* Bit 7 */
#define B8   0x00000100U  /* Bit 8 */
#define B9   0x00000200U  /* Bit 9 */
#define B10  0x00000400U  /* Bit 10 */
#define B11  0x00000800U  /* Bit 11 */
#define B12  0x00001000U  /* Bit 12 */
#define B13  0x00002000U  /* Bit 13 */
#define B14  0x00004000U  /* Bit 14 */
#define B15  0x00008000U  /* Bit 15 */
#define B16  0x00010000U  /* Bit 16 */
#define B17  0x00020000U  /* Bit 17 */
#define B18  0x00040000U  /* Bit 18 */
#define B19  0x00080000U  /* Bit 19 */
#define B20  0x00100000U  /* Bit 20 */
#define B21  0x00200000U  /* Bit 21 */
#define B22  0x00400000U  /* Bit 22 */
#define B23  0x00800000U  /* Bit 23 */
#define B24  0x01000000U  /* Bit 24 */
#define B25  0x02000000U  /* Bit 25 */
#define B26  0x04000000U  /* Bit 26 */
#define B27  0x08000000U  /* Bit 27 */
#define B28  0x10000000U  /* Bit 28 */
#define B29  0x20000000U  /* Bit 29 */
#define B30  0x40000000U  /* Bit 30 */
#define B31  0x80000000U  /* Bit 31 */


#endif /* BITS_UTILS_H */
