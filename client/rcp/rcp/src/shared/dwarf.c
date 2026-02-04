#include "dwarf.h"
#include <string.h>

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
    // sign extend if neg
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

  // Sign extend if negative and sign bit of last byte is set
  if ((shift < 64) && (byte & 0x40))
    result |= -((int64_t)1 << shift);

  return result;
}

int dwarf_decode_cfi(const uint8_t **p, const uint8_t *end, DwarfCFI *out) {
  if (*p >= end)
    return 0;

  const uint8_t *start = *p;
  uint8_t byte = *(*p)++;

  out->operand1 = 0;
  out->operand2 = 0;

  uint8_t high = byte & 0xC0;

  if (high == 0x40) {
    // DW_CFA_advance_loc: delta in low 6 bits
    out->opcode = DW_CFA_advance_loc;
    out->operand1 = byte & 0x3F;
  } else if (high == 0x80) {
    // DW_CFA_offset: register in low 6 bits, ULEB128 offset follows
    out->opcode = DW_CFA_offset;
    out->operand1 = byte & 0x3F;
    out->operand2 = (int64_t)dwarf_decode_uleb128(p);
  } else if (high == 0xC0) {
    // DW_CFA_restore: register in low 6 bits
    out->opcode = DW_CFA_restore;
    out->operand1 = byte & 0x3F;
  } else {
    // Standard opcodes (high bits = 0x00)
    out->opcode = byte;
    switch (byte) {
    case DW_CFA_nop:
    case DW_CFA_remember_state:
    case DW_CFA_restore_state:
      // No operands
      break;

    case DW_CFA_set_loc:
      // 8-byte address (x86-64)
      if (*p + 8 <= end) {
        memcpy(&out->operand1, *p, 8);
        *p += 8;
      }
      break;

    case DW_CFA_advance_loc1:
      if (*p < end)
        out->operand1 = *(*p)++;
      break;

    case DW_CFA_advance_loc2: {
      uint16_t v;
      if (*p + 2 <= end) {
        memcpy(&v, *p, 2);
        out->operand1 = v;
        *p += 2;
      }
      break;
    }

    case DW_CFA_advance_loc4: {
      uint32_t v;
      if (*p + 4 <= end) {
        memcpy(&v, *p, 4);
        out->operand1 = v;
        *p += 4;
      }
      break;
    }

    case DW_CFA_def_cfa_offset:
      out->operand1 = dwarf_decode_uleb128(p);
      break;

    case DW_CFA_def_cfa_register:
    case DW_CFA_same_value:
    case DW_CFA_undefined:
    case DW_CFA_restore_extended:
      // Single ULEB128 register operand
      out->operand1 = dwarf_decode_uleb128(p);
      break;

    case DW_CFA_offset_extended:
    case DW_CFA_register:
    case DW_CFA_val_offset:
      // ULEB128 reg, ULEB128 value
      out->operand1 = dwarf_decode_uleb128(p);
      out->operand2 = (int64_t)dwarf_decode_uleb128(p);
      break;

    case DW_CFA_def_cfa:
      // ULEB128 reg, ULEB128 offset
      out->operand1 = dwarf_decode_uleb128(p);
      out->operand2 = (int64_t)dwarf_decode_uleb128(p);
      break;

    case DW_CFA_def_cfa_offset_sf:
      // Single SLEB128 offset
      out->operand2 = dwarf_decode_sleb128(p);
      break;

    case DW_CFA_def_cfa_sf:
    case DW_CFA_offset_extended_sf:
    case DW_CFA_val_offset_sf:
      // ULEB128 reg, SLEB128 value
      out->operand1 = dwarf_decode_uleb128(p);
      out->operand2 = dwarf_decode_sleb128(p);
      break;

    case DW_CFA_def_cfa_expression: {
      // ULEB128 block length, then skip that many bytes
      uint64_t len = dwarf_decode_uleb128(p);
      out->operand1 = len;
      *p += len;
      break;
    }

    case DW_CFA_expression:
    case DW_CFA_val_expression: {
      // ULEB128 reg, ULEB128 block length, then skip block
      out->operand1 = dwarf_decode_uleb128(p);
      uint64_t len = dwarf_decode_uleb128(p);
      out->operand2 = (int64_t)len;
      *p += len;
      break;
    }

    default:
      // Unknown opcode -- treated as zero-operand
      break;
    }
  }

  out->raw = start;
  out->raw_size = (size_t)(*p - start);
  return 1;
}
