#pragma once
#include <R.h>
#include <Rinternals.h>
#include <cstdint>
#include <string>
#include <variant>
#include <vector>
#include <zmq.hpp>

using compile_result = std::variant<std::vector<uint8_t>, std::string>;

compile_result compile(std::vector<uint8_t> rds_closure);
