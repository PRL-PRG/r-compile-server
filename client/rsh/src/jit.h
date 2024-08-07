#pragma once

#include <Rinternals.h>
#include <llvm/ExecutionEngine/Orc/Core.h>
#include <memory>
#undef PI
#include <llvm/ExecutionEngine/Orc/LLJIT.h>

namespace rsh {
class JIT {
  std::unique_ptr<llvm::orc::LLJIT> orc;
  llvm::orc::ResourceTrackerSP resource_tracker;

public:
  JIT(std::unique_ptr<llvm::orc::LLJIT> orc) : orc(std::move(orc)) {
    // auto &dylib = orc->getMainJITDylib();
    // resource_tracker = dylib.createResourceTracker();
  }

  static JIT *create();
  void add_object_file(const char *filename);
  void add_object(std::string const &vec);
  void *lookup(const char *name);
  void remove(const char *name);
};

extern JIT *GJIT;

} // namespace rsh
