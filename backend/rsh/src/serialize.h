#pragma once
#include "rsh.h"
#include <Rinternals.h>

SEXP deserialize(u8 const *data, usize size);
