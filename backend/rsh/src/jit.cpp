#include "jit.h"
#include "llvm/ExecutionEngine/Orc/DebugObjectManagerPlugin.h"
#include "llvm/ExecutionEngine/Orc/EPCDebugObjectRegistrar.h"
#include <R_ext/Error.h>
#include <llvm/ExecutionEngine/Orc/LLJIT.h>
#include <llvm/Support/TargetSelect.h>
#include <memory>

JIT *JIT::create() {
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
    Rf_error("Unable to create LLVJIT: %s\n", toString(std::move(err)).c_str());
    return nullptr;
  }

  return new JIT(std::move(*orc));
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

void *JIT::lookup(const char *name) {
  orc->getMainJITDylib().dump(llvm::outs());
  auto v = orc->lookupLinkerMangled(name);
  if (auto err = v.takeError()) {
    Rf_error("Unable to load %s: %s\n", name, toString(std::move(err)).c_str());
    return nullptr;
  }

  return (void *)v->toPtr<void *>();
}
