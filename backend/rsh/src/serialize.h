#pragma once

#include "rsh.h"
#include <Rinternals.h>
#include <vector>

namespace rsh {

std::vector<u8> serialize(SEXP obj);
SEXP deserialize(u8 const *data, usize size);

} // namespace rsh
