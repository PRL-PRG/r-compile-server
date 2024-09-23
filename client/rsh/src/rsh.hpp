#pragma once

#include "jit.hpp"
#include <cstdint>
#include <vector>

extern "C" {
// FIXME: can we avoid this
#include <Rinternals.h>
}

using u8 = uint8_t;
using u32 = uint32_t;
using i32 = int32_t;
using usize = std::size_t;

// R bytecode opcodes
#define PUSHCONSTARG_OP 34
#define BASEGUARD_OP 123
#define GETBUILTIN_OP 26
#define CALLBUILTIN_OP 39
#define RETURN_OP 1

namespace rsh {

using Bytes = std::vector<u8>;

// A tag to attach to the external pointer
extern SEXP RSH_JIT_FUN_PTR;

extern JIT *JIT;
}; // namespace rsh
