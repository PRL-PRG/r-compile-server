#include "dwarf.h"

size_t dwarf_encode_uleb128(uint64_t val, uint8_t *out) {
  size_t count = 0;
  do {
    uint8_t byte = val & 0x7f;
    val >>= 7;
    if (val != 0)
      byte |= 0x80;
    out[count++] = byte;
  } while (val != 0);
  return count;
}

size_t dwarf_encode_sleb128(int64_t val, uint8_t *out) {
  size_t count = 0;
  int more = 1;
  while (more) {
    uint8_t byte = val & 0x7f;
    val >>= 7;
    /* sign extend if neg */
    int sign = (byte & 0x40);
    if ((val == 0 && !sign) || (val == -1 && sign)) {
      more = 0;
    } else {
      byte |= 0x80;
    }
    out[count++] = byte;
  }
  return count;
}

uint64_t dwarf_decode_uleb128(const uint8_t **data) {
  uint64_t result = 0;
  int shift = 0;
  while (1) {
    uint8_t byte = **data;
    (*data)++;
    result |= (uint64_t)(byte & 0x7f) << shift;
    if ((byte & 0x80) == 0)
      break;
    shift += 7;
  }
  return result;
}

int64_t dwarf_decode_sleb128(const uint8_t **data) {
  int64_t result = 0;
  int shift = 0;
  uint8_t byte;
  do {
    byte = **data;
    (*data)++;
    result |= (int64_t)(byte & 0x7f) << shift;
    shift += 7;
  } while (byte & 0x80);
  
  /* Sign extend if negative and sign bit of last byte is set */
  if ((shift < 64) && (byte & 0x40))
    result |= -((int64_t)1 << shift);
    
  return result;
}
