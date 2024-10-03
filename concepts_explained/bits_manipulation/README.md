# Readme for `bits_utils.h`

This header provides functions for simple bit manipulation in hardware registers, commonly used for controlling peripherals like GPIO pins in ARM microcontrollers.

## Including `bits_utils.h`

You can include the `bits_utils.h` file in your project using either a relative or absolute path.

### Relative Path

If `bits_utils.h` is in the same directory as your source file:

```c
#include "bits_utils.h"
```

If it is in a subdirectory, adjust the path accordingly:

```c
#include "path/to/bits_utils.h"
```

### Absolute Path

To include `bits_utils.h` using an absolute path, specify the full path:

```c
#include "/absolute/path/to/bits_utils.h"
```

Make sure the file is accessible in the given location to avoid compilation errors.

---

## Functions

### `toggle_bits`

Toggles the bits specified by the mask.

```c
toggle_bits(&GPIOA->DATA, B0 | B1);  // Toggles bits 0 and 1 of GPIOA
```

### `set_bits`

Sets the bits specified by the mask.

```c
set_bits(&GPIOA->DATA, B2 | B3);  // Sets bits 2 and 3 of GPIOA
```

### `clear_bits`

Clears the bits specified by the mask.

```c
clear_bits(&GPIOA->DATA, B2 | B3);  // Clears bits 2 and 3 of GPIOA
```

### `is_set`

Checks if the nth bit is set.

```c
if (is_set(&GPIOA->DATA, 4)) { /* Do something */ }
```

### `set_bit`

Sets the nth bit.

```c
set_bit(&GPIOA->DATA, 4);  // Sets bit 4 of GPIOA
```

### `clear_bit`

Clears the nth bit.

```c
clear_bit(&GPIOA->DATA, 4);  // Clears bit 4 of GPIOA
```

### `toggle_bit`

Toggles the nth bit.

```c
toggle_bit(&GPIOA->DATA, 4);  // Toggles bit 4 of GPIOA
```

---

## Bit Definitions

Masks for individual bits (0-31) are predefined:

```c
#define B0   0x00000001U
#define B1   0x00000002U
// ...
#define B31  0x80000000U
```

---

## Creating Masks

You can prepare masks by combining predefined bit values using the bitwise OR (`|`) operator.

### Example Mask Creation

To create a mask for bits 0, 2, and 4:

```c
uint32_t mask = B0 | B2 | B4;  // Combines bits 0, 2, and 4
```

Use the mask with any of the provided functions:

```c
set_bits(&GPIOA->DATA, mask);  // Sets bits 0, 2, and 4
clear_bits(&GPIOA->DATA, mask);  // Clears bits 0, 2, and 4
```

---

## Example: GPIOA Manipulation

```c
uint32_t mask = B0 | B1 | B4;  // Mask for bits 0, 1, and 4
set_bits(&GPIOA->DATA, mask);  // Set bits 0, 1, and 4
clear_bit(&GPIOA->DATA, 2);    // Clear bit 2
toggle_bit(&GPIOA->DATA, 3);   // Toggle bit 3
```

This header simplifies bit-level register manipulation, reducing code complexity when working with ARM microcontrollers.
