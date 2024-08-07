#pragma once
#include "protocol.pb.h"
#include "rsh.h"
#include <R.h>
#include <Rinternals.h>
#include <cstdint>
#include <string>
#include <vector>
#include <zmq.hpp>

namespace rsh {

using namespace server::protocol;

// TODO: compiler a CLOSXP
CompileResponse remote_compile(std::string const &name,
                               std::vector<uint8_t> const &rds_closure,
                               u32 opt_level);

BcCompileResponse remote_compile_bc(std::string const &name,
                                    std::vector<uint8_t> const &rds_closure);
} // namespace rsh
