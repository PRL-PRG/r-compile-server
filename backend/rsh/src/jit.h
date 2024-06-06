#pragma once

#include <Rinternals.h>
#undef PI
#include <llvm/ExecutionEngine/Orc/LLJIT.h>

class JIT {
  std::unique_ptr<llvm::orc::LLJIT> orc;

public:
  JIT(std::unique_ptr<llvm::orc::LLJIT> orc) : orc(std::move(orc)) {}

  static JIT *create();
  void add_object_file(const char *filename);
  void *lookup(const char *name);
};
