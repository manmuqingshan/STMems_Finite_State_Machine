/**
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */

#ifndef IIS2DULPX_FOUR_D_H
#define IIS2DULPX_FOUR_D_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

#ifndef MEMS_UCF_EXT_SHARED_TYPES
#define MEMS_UCF_EXT_SHARED_TYPES

/*
 * UCF extended format supports the following commands:
 * - MEMS_UCF_OP_READ: read the register at the location specified by the
 *   "address" field ("data" field is ignored
 * - MEMS_UCF_OP_WRITE: write the value specified by the "data" field at the
 *   location specified by the "address" field
 * - MEMS_UCF_OP_DELAY: wait the number of milliseconds specified by the "data"
 *   field ("address" field is ignored)
 * - MEMS_UCF_OP_POLL_SET: poll the register at the location specified by the
 *   "address" field until all the bits identified by the mask specified by the
 *   "data" field are set to 1
 * - MEMS_UCF_OP_POLL_RESET: poll the register at the location specified by the
 *   "address" field until all the bits identified by the mask specified by the
 *   "data" field are reset to 0
 */

#define MEMS_UCF_OP_READ       0
#define MEMS_UCF_OP_WRITE      1
#define MEMS_UCF_OP_DELAY      2
#define MEMS_UCF_OP_POLL_SET   3
#define MEMS_UCF_OP_POLL_RESET 4

typedef struct {
  uint8_t op;
  uint8_t address;
  uint8_t data;
} ucf_line_ext_t;

#endif /* MEMS_UCF_EXT_SHARED_TYPES */

/** Configuration array generated from Unico Tool **/
static const ucf_line_ext_t iis2dulpx_four_d[] = {
  { .op = MEMS_UCF_OP_WRITE, .address = 0x14, .data = 0x00 },
  { .op = MEMS_UCF_OP_WRITE, .address = 0x13, .data = 0x10 },
  { .op = MEMS_UCF_OP_DELAY, .address = 0, .data = 5 },
  { .op = MEMS_UCF_OP_WRITE, .address = 0x3F, .data = 0x80 },
  { .op = MEMS_UCF_OP_WRITE, .address = 0x04, .data = 0x00 },
  { .op = MEMS_UCF_OP_WRITE, .address = 0x05, .data = 0x00 },
  { .op = MEMS_UCF_OP_WRITE, .address = 0x39, .data = 0x4B },
  { .op = MEMS_UCF_OP_WRITE, .address = 0x1A, .data = 0x01 },
  { .op = MEMS_UCF_OP_WRITE, .address = 0x0A, .data = 0x00 },
  { .op = MEMS_UCF_OP_WRITE, .address = 0x0B, .data = 0x01 },
  { .op = MEMS_UCF_OP_WRITE, .address = 0x0E, .data = 0x00 },
  { .op = MEMS_UCF_OP_WRITE, .address = 0x0F, .data = 0x00 },
  { .op = MEMS_UCF_OP_WRITE, .address = 0x17, .data = 0x40 },
  { .op = MEMS_UCF_OP_WRITE, .address = 0x02, .data = 0x01 },
  { .op = MEMS_UCF_OP_WRITE, .address = 0x08, .data = 0x54 },
  { .op = MEMS_UCF_OP_WRITE, .address = 0x09, .data = 0x00 },
  { .op = MEMS_UCF_OP_WRITE, .address = 0x09, .data = 0x00 },
  { .op = MEMS_UCF_OP_WRITE, .address = 0x09, .data = 0x01 },
  { .op = MEMS_UCF_OP_WRITE, .address = 0x09, .data = 0x01 },
  { .op = MEMS_UCF_OP_WRITE, .address = 0x09, .data = 0x00 },
  { .op = MEMS_UCF_OP_WRITE, .address = 0x09, .data = 0x02 },
  { .op = MEMS_UCF_OP_WRITE, .address = 0x02, .data = 0x21 },
  { .op = MEMS_UCF_OP_WRITE, .address = 0x08, .data = 0x00 },
  { .op = MEMS_UCF_OP_WRITE, .address = 0x09, .data = 0x91 },
  { .op = MEMS_UCF_OP_WRITE, .address = 0x09, .data = 0x10 },
  { .op = MEMS_UCF_OP_WRITE, .address = 0x09, .data = 0x16 },
  { .op = MEMS_UCF_OP_WRITE, .address = 0x09, .data = 0x00 },
  { .op = MEMS_UCF_OP_WRITE, .address = 0x09, .data = 0x0F },
  { .op = MEMS_UCF_OP_WRITE, .address = 0x09, .data = 0x00 },
  { .op = MEMS_UCF_OP_WRITE, .address = 0x09, .data = 0x66 },
  { .op = MEMS_UCF_OP_WRITE, .address = 0x09, .data = 0x3A },
  { .op = MEMS_UCF_OP_WRITE, .address = 0x09, .data = 0x66 },
  { .op = MEMS_UCF_OP_WRITE, .address = 0x09, .data = 0x32 },
  { .op = MEMS_UCF_OP_WRITE, .address = 0x09, .data = 0xF0 },
  { .op = MEMS_UCF_OP_WRITE, .address = 0x09, .data = 0x00 },
  { .op = MEMS_UCF_OP_WRITE, .address = 0x09, .data = 0x00 },
  { .op = MEMS_UCF_OP_WRITE, .address = 0x09, .data = 0x0D },
  { .op = MEMS_UCF_OP_WRITE, .address = 0x09, .data = 0x00 },
  { .op = MEMS_UCF_OP_WRITE, .address = 0x09, .data = 0xEF },
  { .op = MEMS_UCF_OP_WRITE, .address = 0x09, .data = 0x33 },
  { .op = MEMS_UCF_OP_WRITE, .address = 0x09, .data = 0x05 },
  { .op = MEMS_UCF_OP_WRITE, .address = 0x09, .data = 0x73 },
  { .op = MEMS_UCF_OP_WRITE, .address = 0x09, .data = 0x99 },
  { .op = MEMS_UCF_OP_WRITE, .address = 0x09, .data = 0x08 },
  { .op = MEMS_UCF_OP_WRITE, .address = 0x09, .data = 0x22 },
  { .op = MEMS_UCF_OP_WRITE, .address = 0x04, .data = 0x00 },
  { .op = MEMS_UCF_OP_WRITE, .address = 0x05, .data = 0x01 },
  { .op = MEMS_UCF_OP_WRITE, .address = 0x17, .data = 0x00 },
  { .op = MEMS_UCF_OP_WRITE, .address = 0x3F, .data = 0x00 },
  { .op = MEMS_UCF_OP_WRITE, .address = 0x1F, .data = 0x01 },
  { .op = MEMS_UCF_OP_WRITE, .address = 0x14, .data = 0x33 }
};

#ifdef __cplusplus
}
#endif

#endif /* IIS2DULPX_FOUR_D_H */

