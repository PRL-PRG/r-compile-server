#pragma once
#include "compiler.hpp"
#include "protocol.pb.h"

namespace rsh {

using namespace server::protocol;

// TODO: compiler a CLOSXP
CompileResponse remote_compile(std::vector<uint8_t> const &rds_closure,
                               CompilerOptions const &opts);

} // namespace rsh
