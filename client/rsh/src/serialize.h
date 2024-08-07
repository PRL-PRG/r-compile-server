#pragma once

#include "rsh.h"
#include <Rinternals.h>
#include <string>
#include <vector>

namespace rsh {

std::vector<u8> serialize(SEXP obj);
SEXP deserialize(u8 const *data, usize size);
SEXP deserialize(std::string data);

} // namespace rsh
