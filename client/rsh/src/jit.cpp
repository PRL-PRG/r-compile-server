#include "jit.h"
#include "llvm/ExecutionEngine/Orc/DebugObjectManagerPlugin.h"
#include "llvm/ExecutionEngine/Orc/EPCDebugObjectRegistrar.h"
#include <R_ext/Error.h>
#include <llvm-17/llvm/ExecutionEngine/Orc/Core.h>
#include <llvm-17/llvm/Object/Binary.h>
#include <llvm/ExecutionEngine/Orc/LLJIT.h>
#include <llvm/Support/TargetSelect.h>

extern "C" {
#include "bc2c/runtime.h"
}
namespace rsh {

JIT *GJIT = JIT::create();

JIT *JIT::create() {
  Rsh_initialize_runtime();
  llvm::InitializeNativeTarget();
  llvm::InitializeNativeTargetAsmPrinter();

  auto mb = llvm::orc::JITTargetMachineBuilder::detectHost();

  if (auto err = mb.takeError()) {
    Rf_error("Unable to create JITTargetMachineBuilder: %s\n",
             toString(std::move(err)).c_str());
    return nullptr;
  }

  auto orc =
      llvm::orc::LLJITBuilder()
          .setJITTargetMachineBuilder(std::move(*mb))
          .setObjectLinkingLayerCreator([&](llvm::orc::ExecutionSession &ES,
                                            const llvm::Triple &TT) {
            auto layer = std::make_unique<llvm::orc::ObjectLinkingLayer>(ES);
            auto registrar = llvm::orc::createJITLoaderGDBRegistrar(ES);
            if (auto err = registrar.takeError()) {
              Rf_error("Unable to create registrar: %s\n",
                       toString(std::move(err)).c_str());
            }

            layer->addPlugin(
                std::make_unique<llvm::orc::DebugObjectManagerPlugin>(
                    ES, std::move(*registrar), false, true));

            return layer;
          })
          .create();

  if (auto err = orc.takeError()) {
    Rf_error("Unable to create LLVMJIT: %s\n",
             toString(std::move(err)).c_str());
    return nullptr;
  }

  auto o = std::move(*orc);
  // o->getMainJITDylib().addGenerator(
  //     cantFail(llvm::orc::DynamicLibrarySearchGenerator::GetForCurrentProcess(
  //         o->getDataLayout().getGlobalPrefix())));

  return new JIT(std::move(o));
}

void JIT::add_object_file(const char *filename) {
  auto buffer = llvm::MemoryBuffer::getFile(filename);
  if (!buffer) {
    Rf_error("Problem loading object file: %s\n",
             buffer.getError().message().c_str());
    return;
  }
  auto err = orc->addObjectFile(std::move(*buffer));
  if (err) {
    Rf_error("Problem with object file %s\n", toString(std::move(err)).c_str());
  }
}

void JIT::add_object(std::string const &vec) {
  auto obj_data = llvm::MemoryBuffer::getMemBuffer(vec);
  // here we need to reattach the code to the object file
  // if the response came with code
  // using the DWARFContext
  // llvm::object::createBinary(llvm::MemoryBufferRef(*buffer));
  auto err = orc->addObjectFile(std::move(obj_data));
  if (err) {
    Rf_error("Problem with object file %s\n", toString(std::move(err)).c_str());
  }
}

void *JIT::lookup(const char *name) {
  // orc->getMainJITDylib().dump(llvm::outs());
  auto v = orc->lookupLinkerMangled(name);
  if (auto err = v.takeError()) {
    Rf_error("Unable to load %s: %s\n", name, toString(std::move(err)).c_str());
    return nullptr;
  }

  return (void *)v->toPtr<void *>();
}

void JIT::remove(const char *name) {
  // FIXME: this is conceptually wrong.
  // we should use ResourceTracker to remove the function and its dependencies
  llvm::orc::SymbolNameSet names;
  names.insert(orc->getExecutionSession().intern(name));
  auto err = orc->getMainJITDylib().remove(names);
  if (err) {
    Rf_error("Problem removing %s: %s\n", name,
             toString(std::move(err)).c_str());
  }
  // orc->getMainJITDylib().dump(llvm::outs());
}
} // namespace rsh
