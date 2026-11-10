# Repository map

One line per file. Generated, vendored, and data trees have one line per directory.
Paths are from the repository root. Keep this file current when you add, move, or delete files.

## Root

- `AGENTS.md` — Instructions for agents: structure, conventions, tests.
- `README.md` — Project overview and setup.
- `LICENSE` — License.
- `Makefile` — Sets up the vendored GNU-R and the sub-projects.
- `repo-map.md` — This index.
- `.gitignore`, `.gitmodules`, `.git-blame-ignore-revs` — Git configuration (`R` is a submodule).
- `.gitattributes`, `.lfsconfig` — The `stdlib_*` snapshots are in git LFS, and not downloaded by default.
- `.githooks/pre-commit.sh` — Pre-commit hook (formatting).
- `.devcontainer/` — Dev container (`Dockerfile`, `devcontainer.json`).
- `.github/actions/setup-gnur/action.yml` — CI action: build the vendored GNU-R.
- `.github/actions/setup-rsh/action.yml` — CI action: build and install `rsh`.
- `.github/workflows/maven.yml` — CI: build and test the server.
- `.github/workflows/rcp-benchmarks.yml` — CI: build rcp, run its tests and the benchmarks.
- `.idea/`, `.vscode/`, `.serena/`, `.claude/` — Editor and agent configuration.
- `out/`, `target/` — Build output (not tracked).
- `R/` — Vendored GNU-R (submodule). `RCP=1 ./tools/build-gnur.sh R` builds the RCP variant.

## proto

- `proto/messages.proto` — Protocol buffer messages between client and server.
- `proto/routes.proto` — gRPC service `CompileService` (Init, Compile, CompileFirVersion, CompileFirClosure).
- `proto/Makefile` — Generates the client's `*.pb.*` files and copies the protos to the server.
- `proto/README.md` — How to change the protocol.

## tools

- `tools/build-gnur.sh` — Builds the vendored GNU-R (`RCP=1` for the rcp variant).
- `tools/Makefile` — Targets that the other Makefiles call.
- `tools/compile-package.R` — Compiles every function of a package and reports failures.
- `tools/message-sizes.R` — Measures protocol message sizes for some packages.
- `tools/rdscat.R`, `tools/rdscat.sh` — Print the structure of an RDS file.

## client

- `client/Makefile` — Builds `rsh`.
- `client/rcp/` — The copy-and-patch JIT (rcp) R package and its Docker images (see `client/rcp/README.md`).
- `client/rsh/DESCRIPTION`, `client/rsh/NAMESPACE` — R package metadata and exports of `rsh`.
- `client/rsh/Makefile` — Builds, installs, and tests `rsh`.
- `client/rsh/make_linux.sh`, `client/rsh/make_macos.sh` — Install `rsh` into the vendored R.
- `client/rsh/README.md` — Building, the JIT tiers, and FIŘ stubs.
- `client/rsh/R/rsh.R` — R API: `rsh_jit_enable`, `rsh_cmpfun`, `rsh_jit_tier`, `rsh_compile`, `rsh_fir_connect`, `rsh_fir_drain`.
- `client/rsh/benchmarks.Rmd` — Notebook that plots benchmark results.
- `client/rsh/inst/benchmarks/` — Benchmark harness (`harness.R`, `run-benchmarks.sh`) and suites (`simple`, `shootout`, `areWeFast`, `RealThing`, ...); rcp uses it too.
- `client/rsh/tests/` — R tests (`test-basic-jit.R`, `test-remote-compilation.R`) and their `Rprofile.site`.
- `client/rsh/src/init.cpp` — Registers the `.Call` entry points.
- `client/rsh/src/client.cpp`, `client.hpp` — gRPC client for the `Init` and `Compile` RPCs.
- `client/rsh/src/compiler.cpp`, `compiler.hpp` — bc2c path: `rsh_compile`, loading native closures.
- `client/rsh/src/fir_stubs.cpp`, `fir_stubs.hpp` — JIT tiers (counting body, `rsh_tier`) and the worker thread that sends stub and closure requests.
- `client/rsh/src/jit.cpp`, `jit.hpp` — LLVM ORC JIT that loads object files.
- `client/rsh/src/serialize.cpp`, `serialize.hpp` — R serialization to and from bytes.
- `client/rsh/src/util.cpp`, `util.hpp` — SEXP helpers.
- `client/rsh/src/rsh.hpp` — Shared declarations of the package.
- `client/rsh/src/Makevars` — Compiler and linker flags of the package.
- `client/rsh/src/*.pb.*` — Generated protocol buffer code (from `proto/`).
- `client/rsh/src/common2c/gnur_symbols.h` — GNU-R internal symbols that compiled code uses.
- `client/rsh/src/common2c/rsh_utils.h` — Helpers shared by both runtimes and the server's generated C.
- `client/rsh/src/bc2c/runtime.c`, `runtime.h`, `runtime_impl.h`, `runtime_internals.h` — Runtime of bc2c's generated C.
- `client/rsh/src/bc2c/opcodes.h`, `opcodes_internals.h` — Bytecode operation implementations for bc2c's generated C.
- `client/rsh/src/fir2c/runtime.c`, `runtime.h` — Runtime of fir2c's generated C: values, calls, stubs, bytecode baselines, recordings; with `-DFIR_STATS`, copy and promise counters (`Fir_stats_get`).
- `client/rsh/src/fir2c/runtime_inline.h` — The runtime's scalar builtins and intrinsics and subscript reads and writes, `static inline` so that modules inline them (C only; included by `runtime.h`).
- `client/rsh/src/fir2c/print_sexp.c`, `print_sexp.h` — Debug printer for SEXPs.

## fir-intellij-plugin

- `fir-intellij-plugin/` — IntelliJ plugin for FIŘ files (Gradle project, see its `README.md`).

## server

- `server/pom.xml` — Maven build.
- `server/Makefile` — Build and test targets (calls Maven).
- `server/mvnw`, `server/mvnw.cmd`, `server/.mvn/` — Maven wrapper and JVM options.
- `server/.idea/`, `server/.settings/`, `server/.claude/`, `server/.aiignore`, `server/.tool-versions` — Editor and agent configuration.
- `server/.jqwik-database` — JQwik's saved property-test state.
- `server/doc/README.md` — Index of the server's documentation.
- `server/doc/FIR.md` — The FIŘ IR.
- `server/doc/grammar.typ`, `grammar.pdf` — FIŘ grammar.
- `server/doc/design-decisions.md` — Design decisions of FIŘ.
- `server/doc/lazy-versions.md` — Lazy versions, stubs, patches, and the JIT's closure compilation.
- `server/doc/bytecode-baseline-feedback.md` — What rcp records and how the server translates it.
- `server/doc/speculation-and-deoptimization.md` — Speculation and deoptimization.
- `server/doc/variadic-and-default-arguments.md` — `...` and default arguments.
- `server/src/main/protobuf/` — Copies of `proto/*.proto` (Maven generates Java from them).
- `server/src/main/resources/logging.properties` — Logging configuration.
- `server/src/main/resources/org/prlprg/fir/builtins.fir`, `intrinsics.fir` — FIŘ signatures of builtins and intrinsics.
- `server/src/main/resources/org/prlprg/session/` — GNU-R's function table and builtin lists (`R_FunTab.txt`, `*.RDS`).

## server/src/main/java/org/prlprg

### `./` — R compiler server.

- `App.java` — Hello-world main class (unused).
- `AppConfig.java` — Environment variables to configure the application.
- `RVersion.java` — Major.Minor.Patch version number with an optional suffix for things like "Beta" and "RC".

### `bc/` — GNU-R typed bytecode representation and AST-to-BC compiler.

- `BCCompiler.java` — The R bytecode compiler that aims to be byte-to-byte compatible with GNU-R's bytecode compiler.
- `Bc.java` — A complete R bytecode: version, instructions, and constants.
- `BcCode.java` — An array of bytecode instructions, which make up the code of a closure or promise.
- `BcInstr.java` — A single bytecode instruction, consists of an operation and arguments (`HasAst`: it carries its source call).
- `BcLabel.java` — A branch instruction destination.
- `BcOp.java` — Bytecode operations.
- `BcOptLevel.java` — Optimization levels of the bytecode compiler.
- `BindingCell.java` — Annotation for instruction arguments that GNU-R caches a binding cell for.
- `CompilerException.java` — Error of the bytecode compiler, with a source location.
- `ConstPool.java` — A pool (array) of constants.
- `ConstantFolding.java` — Implements constant folding for some of the R functions.
- `Context.java` — Compiler context of the bytecode compiler: environment, loops, and tail position.
- `LabelName.java` — Annotation that gives a label in a BcInstr a name for bc2fir's block names.
- `Loc.java` — Source location: expression and srcref.
- `NeedsRho.java` — Annotation for instructions that need the environment (rho).
- `StackEffect.java` — Annotation for an instruction's stack pops and pushes.

### `bc2c/` — The GNU-R bytecode to C compiler.

- `BC2CCompiler.java` — Entry point of the bytecode-to-C compiler.
- `BC2CModule.java` — The C unit and constant pool that bc2c builds for one closure.
- `BCell.java` — A binding cell local of the generated C.
- `ByteCodeStack.java` — Names the C locals that model the bytecode stack.
- `ClosureCompiler.java` — Compiles one closure's bytecode to C.
- `CompiledItem.java` — A compiled C function name and its constant pool.
- `Constant.java` — A constant of the generated C.
- `UnsupportedBcInstrException.java` — Error for a bytecode instruction that bc2c can't compile.

### `bc2fir/` — The GNU-R bytecode to FIŘ compiler.

- `BC2FirCFGCompiler.java` — Stores state to compile a promise or closure's code from GNU-R bytecode into FIŘ.
- `BC2FirCFGCompilerException.java` — Exception thrown when BC2FirCFGCompiler fails to compile a Bc into a CFG.
- `BC2FirCFGCompilerUnsupportedException.java` — BC2FirCFGCompilerException for an unsupported bytecode instruction.
- `BC2FirClosureCompiler.java` — Compiles R closures into FIŘ functions.
- `BC2FirClosureCompilerUnsupportedException.java` — Error for a closure or promise that bc2fir can't compile.
- `BcRecordingFeedback.java` — Translates a raw rcp recording into FIŘ feedback.
- `FunctionBcOrigin.java` — A function's GNU-R bytecode and formals, its recorded instructions' registers, and its parameter reads.
- `ModuleBcOriginMap.java` — Maps FIR code to the GNU-R bytecode it was compiled from.

### `fir/` — Featherweight IR.

- `GlobalModules.java` — The base and builtins FIŘ modules, parsed from the resources.

### `fir/analyze/` — FIŘ static analyses used by check and opt.

- `Analyses.java` — A group of analyses to be shared between many optimizations.
- `Analysis.java` — A static analysis on an Abstraction.
- `AnalysisConstructor.java` — Annotation for the constructor that Analyses calls to create an analysis.
- `AnalysisTypes.java` — A collection of Analysis and CfgAnalysis classes.
- `CfgAnalysis.java` — A static analysis on a CFG.

### `fir/analyze/cfg/` — FIŘ analyses for general control-flow-graph structure.

- `ActiveAssumeLoadAnalysis.java` — Dataflow analysis of which load assumptions are active at each instruction.
- `CfgDominatorTree.java` — Dominator tree of one CFG's blocks.
- `CfgHierarchy.java` — Computes CFG parent-child relationships.
- `CfgReachability.java` — Computes reachable blocks in a control-flow graph.
- `DominatorTree.java` — Dominator tree across a version's CFG and its promise CFGs.
- `Liveness.java` — Computes liveness information for a control-flow graph.
- `Loads.java` — Maps each named variable to the statements that load it.
- `Loops.java` — Tracks loops in the control-flow graph.
- `StrictnessAnalysis.java` — Forward must-force dataflow analysis.

### `fir/analyze/generic/` — Common functionality of analyses (abstract interpretation).

- `AbstractInterpretation.java` — Generic abstract interpretation over an Abstraction.

### `fir/analyze/resolve/` — FIŘ analyses to infer non-type information for expressions.

- `EnvironmentLiveness.java` — Tracks the environments that exist at each instruction.
- `NamedVariablesOf.java` — Simple analysis that gets all named variables that are loaded or stored in a scope.
- `OriginAnalysis.java` — Computes the register or constant each variable comes from.
- `TopEnvironmentLiveness.java` — Analysis that returns the top environment range at a position, or `null`.

### `fir/analyze/type/` — FIŘ analyses to infer type, effect, and provenance.

- `InferEffects.java` — Infer the effects of CFGs, Instructions, and Statements.
- `InferType.java` — Infer the Type of CFGs and Statements.
- `Provenance.java` — Compute which registers are read, written, `consume`d, or captured at any point in a CFG.

### `fir/check/` — Verify FIŘ invariants.

- `CFGChecker.java` — Checks structural CFG invariants.
- `CheckException.java` — Error that a checker reports, with the function and position.
- `Checker.java` — Base class of the checkers; runs all of them.
- `DispatchReturnTypeChecker.java` — Checks that every dispatch call's signature returns SEXP.
- `EnvironmentChecker.java` — Checks environment invariants (mkenv and popenv).
- `ProvenanceChecker.java` — Checks flow-sensitive provenance (ownership) invariants.
- `StrictnessChecker.java` — Checks that strict parameters are forced on all paths.
- `TypeAndEffectChecker.java` — Checks type and effect soundness.

### `fir/feedback/` — FIŘ type feedback.

- `AbstractionFeedback.java` — Feedback for a closure version (Abstraction).
- `MockModuleFeedback.java` — ModuleFeedback implemented by a simple hash-map.
- `ModuleFeedback.java` — Request AbstractionFeedbacks for closure versions.
- `TypeFeedback.java` — Type feedback for a single register.

### `fir/interpret/` — FIŘ interpreter interface (Interpreter).

- `InterpretException.java` — Error of the FIŘ interpreter.
- `Interpreter.java` — FIŘ interpreter interface.

### `fir/interpret/internal/` — Evaluate FIŘ programs by providing definitions.

- `Builtins.java` — Java implementations of GNU-R builtins for the interpreter.
- `CheckpointTrace.java` — Records the interpreter's state at each checkpoint, for deoptimization tests.
- `DeoptSnapshot.java` — The bytecode state (pc, stack, environment) that a deopt produces.
- `ExternalVersion.java` — Function version that executes Java code which can be called from the interpreter.
- `InternalInterpretException.java` — Exception thrown during FIŘ interpretation.
- `InternalInterpretUnsupportedException.java` — Thrown when an unsupported operation is encountered during FIŘ interpretation.
- `InternalInterpreter.java` — FIŘ interpreter.
- `PrintStack.java` — Prints the interpreter's stack.
- `PromiseCode.java` — Interpreter-side data for a promise.
- `StackFrame.java` — Runtime stack frame for FIŘ interpretation, managing register and environment bindings.

### `fir/ir/` — Data structures, builders, and parsers/printers.

- `Comments.java` — Comments attached to IR nodes.

### `fir/ir/abstraction/` — Versions and their bodies (mutable).

- `Abstraction.java` — A version of a function: parameters, signature, and (lazy) body.
- `LazyBody.java` — A version's body, computed on first access, with an optional fallback.

### `fir/ir/abstraction/substitute/` — Helpers to substitute registers in an Abstraction.

- `AbstractSubstituter.java` — Base class of the batched register substituters.
- `DomineeSubstituter.java` — Batched register substitution limited to dominated uses.
- `Substituter.java` — Batched register substitution.

### `fir/ir/argument/` — Immutable data structures.

- `Argument.java` — A statement or jump argument.
- `Constant.java` — Argument that is a constant.
- `Consume.java` — Register argument whose register isn't used afterwards (moves ownership).
- `NamedArgument.java` — An argument with an optional name.
- `Read.java` — Argument that is a register.

### `fir/ir/assumption/` — Immutable data structures.

- `AssumeConstant.java` — Assume that the target argument equals a specific constant.
- `AssumeFunction.java` — Assume that the target argument is a closure of the specific function and a global environment.
- `AssumeLoadFun.java` — Assume that a function lookup yields a specific function.
- `AssumeLoadVar.java` — Assume that a variable lookup of variable yields constant (has no argument).
- `AssumeType.java` — Assume that the target argument has a certain type.
- `Assumption.java` — The metadata of an Assume operation.

### `fir/ir/callee/` — Immutable data structures.

- `Callee.java` — The metadata of a Call.
- `DynamicCallee.java` — A call to a dynamically-determined callee.
- `FallbackCallee.java` — A fallback's call to another version of the same function.
- `StaticFnCallee.java` — A call to a statically-known function.

### `fir/ir/cfg/` — Mutable data structures.

- `BB.java` — A basic block.
- `BBRef.java` — A reference to a BB, which may not be resolved yet.
- `CFG.java` — FIŘ control-flow-graph.

### `fir/ir/cfg/cursor/` — Helpers to mutate a CFG.

- `BBSplitter.java` — Splits a basic block in two.
- `CFGCopier.java` — Deep-copies a CFG, with fresh registers.
- `CFGCursor.java` — Stores a location within a CFG and updates when operations are performed on it.
- `CFGInliner.java` — Utility for inlining CFGs at specific instruction positions.
- `JumpInsertion.java` — Constructs a Jump to be inserted in the middle of a BB, splitting it into two.

### `fir/ir/cfg/iterator/` — CFG block iterators.

- `Abstract.java` — Base class of the block iterators.
- `BBIterator.java` — Abstract iterator over a CFG's basic blocks.
- `BbDfs.java` — Depth-first iterator over a CFG's basic blocks.
- `BbReverseDfs.java` — Reverse-depth-first iterator over a CFG's basic blocks.

### `fir/ir/expression/` — Immutable data structures.

- `Assume.java` — An assumption that the next checkpoint checks.
- `Call.java` — Call a function.
- `Cast.java` — Cast the target argument to a different type.
- `Closure.java` — Create a closure of the given function.
- `Dup.java` — Duplicate the argument, yielding a fresh value.
- `Expression.java` — The operation of a Statement.
- `Force.java` — Force the promise argument.
- `Load.java` — Load a named environment variable (or function).
- `MkEnv.java` — Creates a closure environment.
- `MkVector.java` — Create a vector (or `...`/dots).
- `Noop.java` — An elided expression.
- `PopEnv.java` — Destroys the last environment created by mkenv and sets rho to its parent.
- `Promise.java` — A lazily-evaluated promise.
- `ReflectiveLoad.java` — Reflectively load variable from the environment of the promise argument.
- `ReflectiveStore.java` — Reflectively store the value argument into variable of the promise argument's environment.
- `Store.java` — Store the argument into the named environment variable.
- `SubscriptRead.java` — Read an element from a vector.
- `SubscriptWrite.java` — Write an element into a vector.

### `fir/ir/instruction/` — Immutable data structures.

- `Checkpoint.java` — Checks all assumptions in success and jumps to it if all pass, otherwise to deopt.
- `Deopt.java` — Deoptimize to GNU-R bytecode.
- `Goto.java` — Unconditional jump to target; the owning jump's arguments are the target's phi arguments.
- `If.java` — Conditional jump.
- `Instruction.java` — A FIŘ instruction: a statement or a jump.
- `Jump.java` — The instruction that terminates a block.
- `JumpExpression.java` — The operation of a jump.
- `Raise.java` — Throw an exception, exiting all compiled code.
- `Return.java` — Return the single argument (`args0`) from the enclosing version or promise.
- `Statement.java` — An instruction that evaluates an expression into an optional register, with an optional source call.
- `Unreachable.java` — Marks unreachable code; the default terminator of a fresh BB.
- `Use.java` — One use of a register.

### `fir/ir/instruction/iterator/` — CFG instruction iterators.

- `Abstract.java` — Abstract iterator over a CFG's instructions.
- `InstructionDfs.java` — Depth-first iterator over a CFG's instructions.
- `InstructionIterator.java` — Abstract iterator over a CFG's instructions.

### `fir/ir/module/` — Mutable data structures.

- `Function.java` — A FIŘ function: its baseline and other versions.
- `FunctionRef.java` — A reference to a Function, which may not be resolved yet.
- `Module.java` — A FIŘ module: functions, and pinning for the interpreter.

### `fir/ir/observer/` — Observers can record IR mutations.

- `Observer.java` — Callback that observes IR mutations.

### `fir/ir/phi/` — Immutable data structures.

- `Target.java` — A jump target: block and phi arguments.

### `fir/ir/properties/` — Immutable data structures.

- `FunctionUserProperties.java` — User-set function properties (strict, lite special).

### `fir/ir/type/` — Immutable data structures.

- `Concreteness.java` — Type component: whether a value is definitely or maybe concrete.
- `Effects.java` — Effects of code: none, impure, reflective.
- `Kind.java` — Type component: what kind of value (vector, closure, environment, ...).
- `Ownership.java` — Type component: ownership of a vector.
- `PrimitiveKind.java` — Primitive element kinds (logical, integer, real, string, ...).
- `Promisity.java` — Type component: value, promise, or maybe promise.
- `Repr.java` — Machine representation of a value (boxed SEXP or unboxed scalar).
- `Signature.java` — A version's parameter types, return type, and effects.
- `Type.java` — A FIŘ type: kind, promisity, ownership, and concreteness.

### `fir/ir/value/` — Immutable data structures.

- `Value.java` — A constant value in FIŘ (SEXP or unboxed scalar).

### `fir/ir/variable/` — Immutable data structures.

- `AssigneeOf.java` — The Register defined by a Statement's result (`r = e`).
- `BlockParameter.java` — The Register defined by a BB's phi parameter (MLIR-style block argument).
- `FunctionParameter.java` — The Register defined by an Abstraction's parameter.
- `NamedVariable.java` — An R variable name in an environment.
- `OptionalNamedVariable.java` — `Optional` but slightly more ergonomic.
- `Register.java` — An SSA value definition.
- `Variable.java` — A variable: interns named variables.

### `fir/opt/` — FIŘ optimizations.

- `AbstractionOptimization.java` — An optimization that runs on an Abstraction.
- `CallOwnedVersion.java` — Makes a static call use a version that owns its vector parameters.
- `Cleanup.java` — Removes unused code, blocks, and registers.
- `ConsumeDeadDup.java` — Makes a dup of a vector that isn't used afterwards a move.
- `CopyBaseline.java` — Creates a lazy copy of the baseline, which can speculate.
- `CreateBestVersion.java` — Creates a version for a call's static argument types.
- `CreateBorrowedParameterVersion.java` — Creates a version that borrows a vector parameter it doesn't need to own.
- `CreateOwnedParameterVersion.java` — Creates a version that owns a vector parameter it duplicates.
- `DeferIntoPromise.java` — Defers pure instructions that only affect registers used inside a promise into that promise.
- `ElideConsumedDup.java` — Removes a dup that only moves one owned vector into another.
- `ElideRedundantBoxUnbox.java` — Elides redundant `box`/`unbox` calls by substituting their results with an equivalent register.
- `ElideUnforcedPromise.java` — Replaces promises that are never forced with a deopt stub (`Promise#isDeoptStub`), which fir2c usually compiles to one promise for the site.
- `ElideUnusedCheckpoints.java` — Removes checkpoint jumps whose success BB has no Assume statements.
- `HoistLoopAssume.java` — Moves the loop-invariant assumptions of a loop header's checkpoint to a new checkpoint on the loop's entry edge.
- `Inline.java` — Inline forces, maybe-forces, and static calls when possible.
- `LazyCopy.java` — Creates lazy copies of versions, and optimizes them when evaluated.
- `MergeAssumeLoadVar.java` — Merges a load and an assumption into a load assumption.
- `MergeConsecutiveCheckpoints.java` — Merge consecutive checkpoints whose deopt branches are effectively the same.
- `Optimization.java` — An optimization that runs on a Function.
- `Optimizations.java` — The default optimization pipeline, variants of it without some optimizations, and `REQUIRES` (which removals make others no-ops).
- `PromoteStaticallyKnownVariables.java` — Promotes local named variables into registers when every direct load is statically known.
- `SchedulePure.java` — Hoists and defers specific pure instructions.
- `Specialize.java` — Groups SpecializeOptimizations into one pass.
- `SpeculateAssume.java` — Insert assumptions that feedback suggests will always pass.
- `SpeculateDispatch.java` — Compile a new version with feedback from parameters on an existing version.
- `StrictifyPhi.java` — Retypes a phi of trivial promises into a value phi.
- `StrictifyPromise.java` — Inlines every promise before each non-dynamic call that can.
- `Unbox.java` — Unboxes v1(X) arguments and return values into scalar versions.
- `UnboxPhi.java` — Unboxes phi parameters of type `v1(X)` into scalar `X` phis.

### `fir/opt/sequence/` — Optimization sequences.

- `AbstractionFixpointSequence.java` — ModuleFixpointSequence but (instead of an entire Module) runs on an Abstraction.
- `GenFixpointSequence.java` — Runs sub-optimizations in a sequence repeatedly until a fixpoint.
- `ModuleFixpointSequence.java` — An optimization that runs sub-optimizations in a sequence repeatedly until a fixpoint.
- `Sequence.java` — Run the optimizations in order, then don't re-run.

### `fir/opt/specialize/` — Optimizations that replace individual expressions with those that are faster and/or have better types.

- `DefiniteForce.java` — Makes maybe-forces definite, or removes them, by static type; forwards a force to a dominating force of the same SEXP.
- `ElideBuiltinClosure.java` — Removes the closure argument from static builtin and intrinsic calls.
- `ElideCheckMissing.java` — Removes checkMissing calls on values that can't be missing.
- `ElideDeadStore.java` — Optimization that removes Stores in non-reflective contexts which are never loaded after.
- `ElideEnv.java` — Marks unnecessary environments as elided.
- `ElideRedundantAssumeLoad.java` — Removes load assumptions that an identical one dominates.
- `ElideTrivialAssume.java` — Optimization that removes Assumes that statically succeed, also unused maybe-promise type assumptions after a dominating force.
- `ElideTrivialCast.java` — Optimization that removes Casts that statically succeed.
- `ElideUseSubscriptWrite.java` — Removes subscript writes on values that are consumed.
- `ImproveSignatures.java` — Narrows the return types, effects, and strictness of promises and versions.
- `OptimizeCallee.java` — Optimization pass that replaces every dispatch and static callee with a better one.
- `ResolveDynamicCallee.java` — Replaces DynamicCallees that statically resolve to Closures and global-/base-function Loads.
- `ResolveLoad.java` — Replaces Loads that statically resolve (via OriginAnalysis) to registers or constants.
- `SpecializeEmptyDots.java` — Passes an empty `...` to a builtin as the missing value.
- `SpecializeLiteSpecial.java` — Makes a call to a lite special take the values of its symbol arguments.
- `SpecializeLocalPromise.java` — Marks promises local when feedback says they never escape.
- `SpecializeNonReflectiveEnv.java` — Marks environments non-reflective when feedback says so and no symbol promise reaches an opaque callee.
- `SpecializeOptimization.java` — Base class of the optimizations that replace one statement.
- `SpecializeRealIndex.java` — Converts a real subscript into an integer subscript.
- `SpecializeSubscript.java` — Rewrites simple subscript calls into direct subscript reads and writes.
- `StaticClosure.java` — Makes closures static when they can't observe their environment.

### `fir/parseprint/` — All FIR parsing and printing logic.

- `IrPrintContext.java` — Prints FIŘ IR.
- `ModuleFeedbackParseContext.java` — Parses printed module feedback (MockModuleFeedback).
- `ModuleFeedbackPrintContext.java` — Prints recorded feedback (specifically MockModuleFeedback, the serializable implementation).
- `ModuleParseContext.java` — Parses FIŘ modules.

### `fir2c/` — FIŘ to C compiler.

- `ConstantPool.java` — Closure constant pool builder.
- `Fir2CCompiler.java` — Compiles FIŘ modules into C translation units.
- `Fir2CSession.java` — What one client has of a module's compiled C.
- `Option.java` — Configuration flags for the FIŘ to C compiler.

### `gen2c/` — C code structures shared by bc2c and fir2c.

- `CCode.java` — Builder for C statements.
- `CExternFunction.java` — An extern C function declaration.
- `CExternGlobalVariable.java` — An extern C global variable declaration.
- `CFunction.java` — A C function definition.
- `CFunctionSignature.java` — A C function signature.
- `CGlobalVariable.java` — Embeds a static array of bytes into a C translation unit.
- `CUnit.java` — A C translation unit.
- `CompiledModule.java` — Compiled C and its constant pool.
- `CompiledPatch.java` — C code that adds to a module the client already has.
- `EscapeForC.java` — Escapes text for C string literals and comments.

### `parseprint/` — General-purpose Parser and Printer for text serialization.

- `BuiltinParseMethods.java` — Provides ParseMethods for types outside of prlprg.
- `BuiltinPrintMethods.java` — Print methods for types outside org.prlprg.
- `ClassProvidingContext.java` — A Parser context which provides classes to parse records.
- `EnumSerialCaseIs.java` — Determines the case of the enum constant in the serialized form.
- `ParseException.java` — Thrown when the Parser or Scanner expects something different than what it finds.
- `ParseMethod.java` — Annotation for a static method that parses a type.
- `Parser.java` — Parse objects from a stream of text whose classes have a registered static ParseMethod.
- `Position.java` — Offset, line, and column.
- `PrettyPrintWriter.java` — Adapts a Writer to preserve indents and dedents.
- `PrintMethod.java` — Annotation for a method that prints a type.
- `Printer.java` — Prints objects with their registered print methods.
- `Scanner.java` — Reads tokens and structure from text.
- `SkipWhitespace.java` — Whitespace policy: determines whether to skip all whitespace, all except newlines, or nothing.
- `TypeclassMap.java` — A Rust/Haskell-style typeclass system, built lazily using reflection.
- `TypeclassMethod.java` — Checks invariants and caches metadata for a "typeclass method".
- `TypeclassMethodLoader.java` — Check invariants and then compute cached values for a "typeclass method".

### `primitive/` — Simple struct datatypes and values in R which aren't SEXPs or contexts.

- `BuiltinId.java` — Identifies an R "builtin" or "special" function.
- `Complex.java` — Complex number.
- `Constants.java` — Constants for R runtime primitives.
- `FunTabEntry.java` — An entry of GNU-R's R_FunTab.
- `IsTypeCheck.java` — Possible runtime type to be tested by GNU-R `is`.
- `Logical.java` — R logical: TRUE, FALSE, or NA.
- `Names.java` — Special symbols, and utilities for symbol string quoting and validating.
- `RMath.java` — Real arithmetic as GNU-R computes it (`log`, `logbase`, `R_pow`), keeping `NA` and `NaN`.

### `rds/` — Deserialize (and later serialize) SEXPs.

- `AltRep.java` — Reads ALTREP objects from RDS.
- `BaseAltrRep.java` — For all the altrep classes defined for base.
- `CharsxpCodec.java` — Converts a `CHARSXP`'s bytes and encoding flags to and from a Java string, losslessly.
- `Flags.java` — The bitflags describing a `SEXP` in RDS.
- `GNURByteCodeDecoderFactory.java` — Decodes GNU-R's encoded bytecode into Bc.
- `GNURByteCodeEncoderFactory.java` — Encodes Bc into GNU-R's encoded bytecode.
- `LabelMapping.java` — Maps between GNU-R bytecode offsets and Bc instruction indices.
- `RDSException.java` — Thrown when deserializing R objects from malformed RDS.
- `RDSInputStream.java` — Low-level RDS input stream.
- `RDSItemType.java` — RDS item types (SEXP types and special items).
- `RDSOutputStream.java` — Low-level RDS output stream.
- `RDSReader.java` — Reads SEXPs from R's serialization format.
- `RDSWriter.java` — Writes SEXPs in R's serialization format.

### `server/`

- `CompileServer.java` — The gRPC server and its main: serves CompileService on a port.
- `CompileService.java` — The gRPC service: Init, Compile, CompileFirVersion, CompileFirClosure.
- `FirModules.java` — The FIŘ modules that clients run, by module id.

### `service/`

- `NativeClosure.java` — A natively compiled closure: code, name, constant pool.
- `RshCompiler.java` — Runs the C compiler on generated C with rsh's headers.

### `session/` — R sessions: the R installation and packages that compilation uses.

- `DESCRIPTION.java` — DESCRIPTION file parser.
- `GNURSession.java` — RSession for a GNU-R installation (R_HOME and its library).
- `PackageDatabase.java` — Read a package database.
- `RSession.java` — Interface to an R session: base environment, builtins, packages.

### `sexp/` — SEXPs: R runtime objects.

- `AbstractEnvSXP.java` — Base class of environments with bindings.
- `AbstractListSXP.java` — R list-like structure.
- `ArgumentMatcher.java` — The argument matching algorithm as described in The R manual.
- `Attributes.java` — Attributes on an SEXP.
- `BCodeSXP.java` — GNU-R compiled code SEXP, such as a promise or closure body.
- `BaseEnvSXP.java` — R's base environment.
- `BuiltinOrSpecialSXP.java` — A builtin or special function SEXP.
- `BuiltinSXP.java` — Builtin function SEXP.
- `CloSXP.java` — Closure SEXP.
- `Coercions.java` — R's type coercions.
- `ComplexSXP.java` — Complex vector SEXP.
- `DotsListSXP.java` — A `...` list SEXP.
- `EmptyEnvSXP.java` — R's empty environment.
- `EnvSXP.java` — Environment SEXP.
- `EnvType.java` — Sub-categorization of EnvSXPs.
- `ExprSXP.java` — R expression vector.
- `ExtptrSxp.java` — External pointer SEXP.
- `GlobalEnvSXP.java` — R's global environment.
- `IntSXP.java` — Integer vector SEXP.
- `LangOrListSXP.java` — Either ListSXP (AST identifier) or LangSXP (AST call).
- `LangSXP.java` — AST function call ("language object") SEXP.
- `LglSXP.java` — Logical vector SEXP.
- `ListOrVectorSXP.java` — A list or vector SEXP (the 2 main collection types in R).
- `ListSXP.java` — R "list".
- `NamespaceEnvSXP.java` — A package namespace environment.
- `NilSXP.java` — R `NULL`.
- `NumericSXP.java` — Integer, real, or complex vector SEXP.
- `PrimVectorSXP.java` — SEXP vector of a single data type.
- `PromSXP.java` — Promise SEXP.
- `RawSXP.java` — Raw (byte) vector SEXP.
- `RealSXP.java` — Real vector SEXP.
- `RegSymSXP.java` — Symbol which isn't "unbound value" or "missing arg".
- `S4SXP.java` — Non-vector S4 object (`OBJSXP`); its slots are its attributes.
- `SEXP.java` — R runtime object.
- `SEXPOrEnvType.java` — Since EnvType implies ENV, a union of both enums that can be encoded in a single identifier.
- `SEXPType.java` — SEXP type returned by R `typeof`.
- `SEXPs.java` — All global SEXPs and methods to create SEXPs are here so they're easy to find.
- `SpecialSXP.java` — Special function SEXP.
- `SpecialSymSXP.java` — Unique symbol (equality by identity).
- `StaticEnvSXP.java` — A global, namespace, or base environment.
- `StrOrRegSymSXP.java` — Literally either a string vector or symbol with a name.
- `StrSXP.java` — String vector SEXP.
- `SymOrLangSXP.java` — Either SymSXP (AST identifier) or LangSXP (AST call).
- `SymSXP.java` — R Identifier.
- `TaggedElem.java` — An R "list" element which consists of an optional string tag (name) and SEXP value.
- `UserEnvSXP.java` — An environment inside a closure or explicitly defined by the user.
- `VecSXP.java` — Generic vector SEXP = vector which contains SEXPs.
- `VectorSXP.java` — SEXP vector (immutable list).

### `sexp/parseprint/` — Parsing and printing of SEXPs.

- `SEXPParseContext.java` — Maps potentially-recursive SEXPs to integers so they can be deserialized.
- `SEXPPrintContext.java` — Maps potentially-recursive SEXPs to integers to they can be serialized.
- `SEXPPrintOptions.java` — Options for printing SEXPs.

### `util/` — Misc stuff which could go in any package.

- `Arithmetic.java` — R arithmetic on Java values, for constant folding.
- `CacheMap.java` — Map that computes missing values on access.
- `Characters.java` — Character class helpers for identifiers.
- `Classes.java` — Reflection helpers for classes and sealed hierarchies.
- `Collections2.java` — Lazy collection views.
- `ConcatListView.java` — Readonly view created by concatenating two lists.
- `DisambiguatorMap.java` — Generates unique strings from prefixes.
- `Either.java` — Left or right value.
- `EmptyIterator.java` — An iterator which has no elements.
- `ExceptionRaiser.java` — Throws an exception from an expression.
- `Files.java` — File system helpers.
- `ForwardRef.java` — A value that is set once, after creation.
- `IO.java` — IO utilities.
- `ImmutableBoolArray.java` — Immutable array of booleans.
- `InvalidAnnotationError.java` — Error for an annotation whose invariants are broken.
- `Iterables.java` — Iterable helpers.
- `Lists.java` — List helpers.
- `MapIterableView.java` — Read-write view created by applying a function to each of another iterable's elements.
- `MapListView.java` — Readonly view created by applying a function to each of another list's elements.
- `MapSequencedCollectionView.java` — Readonly mapped view of a sequenced collection.
- `Maybe.java` — 3-way boolean.
- `NotImplementedError.java` — Error for code that isn't implemented yet.
- `Nothing.java` — A type with no instances, it can't be constructed.
- `OptionalFunction.java` — Function variant which may explicitly return `null`.
- `OptionalSupplier.java` — Supplier variant which may explicitly return `null`.
- `Pair.java` — A pair of values.
- `Reflection.java` — Reflection helpers.
- `SequencedCollections.java` — Sequenced collection helpers.
- `SmallBinarySet.java` — A small set backed by an array and stores elements in order based on the given comparator.
- `SmallListSet.java` — A small set that stores its elements in an ArrayList and does linear search.
- `Streams.java` — Stream helpers and gatherers.
- `StringCase.java` — String cases (camel, snake, ...) and conversion between them.
- `Strings.java` — String helpers.
- `ThrowingRunnable.java` — Runnable that may throw an error or exception.
- `ThrowingSupplier.java` — Supplier that may throw an error or exception.
- `Triple.java` — A triple of values.
- `Unit.java` — A type with one instance, SINGLETON.
- `UnreachableError.java` — Error for code that should be unreachable.
- `UntilNullIterator.java` — Call a function to generate the next elements, stop when said function returns `null`.
- `WeakHashSet.java` — Set with weak references to its elements.
- `YCombinator.java` — Helper to create a recursive anonymous function.

### `util/cc/`

- `CCCompilationBuilder.java` — Builds and runs a C compiler command.
- `CCompilationException.java` — Error of a C compilation.

## server/src/test

- `server/src/test/java/org/prlprg/` — `TestConfig` (environment variables of the tests), `TestOrderer`.
- `.../bc/` — Bytecode compiler tests (`BCCompilerTest`, `ConstantFoldingTest`, `ConstPoolTest`, ...).
- `.../bc2fir/NeedsContextTest.java` — Which closures `bc2fir` marks `@needsContext` and `@needsPromises`, and the properties' parse/print round trip.
- `.../bc2fir/ForLoopTest.java` — A `for` loop's index is `forIndex` (no overflow warning), and the loop ends when it is `NA` (`naToTrue`).
- `.../bc2fir/BaseGuardTest.java` — `bc2fir` compiles a `BASEGUARD` into an assumption whose deopt is the guard.
- `.../bc2fir/GnurBytecodeTest.java` — `bc2fir` compiles the inlined subscripts of GNU-R compiler bytecode (what the rsh JIT sends) into static calls.
- `.../examples/` — Example providers and stores for snapshot tests (R and FIŘ examples), and their per-test timeout (`ExampleTimeout`).
- `.../fir/analyze/`, `.../fir/check/`, `.../fir/feedback/`, `.../fir/ir/` — Unit tests of FIŘ analyses, checkers, feedback, and IR.
- `.../fir/interpret/` — Interpreter tests (lazy versions, speculation, promises, deopt into a baseline with a base-function guard, mocks of builtins against GNU-R).
- `.../fir/opt/`, `.../fir/opt/specialize/` — One unit test class per optimization (`AbstractionOptimizationUnitTest`, `OptimizationUnitTest`), and `OptimizationsTest` (pipeline variants, `REQUIRES`).
- `.../fir2c/BytecodeBaselineFeedbackTest.java` — Recording translation and baseline pool layout.
- `.../fir2c/Fir2CCompilerTest.java` — FIŘ→C unit tests.
- `.../fir2c/FallbackEquivalentVersionTest.java` — Redundant versions: the stub keeps its fallback, and compiled ones are reverted.
- `.../parseprint/`, `.../primitive/`, `.../rds/`, `.../sexp/`, `.../util/` — Unit and property tests of utilities.
- `.../sexp/AllEqual.java` — R's `all.equal` for test oracles: compares our computed SEXP with GNU-R's (real/complex tolerance 1.5e-8; NA, NaN, infinities and everything else exact).
- `.../server/FirTestServer.java` — The in-JVM compile server of the tests.
- `.../server/ServerTests.java` — RPC tests (`Compile`, `CompileFirVersion`, `CompileFirClosure`).
- `.../server/JitTieringTest.java` — End-to-end test of the JIT tiers with an R process.
- `.../server/RshConstants.java` — Constants shared with `rsh`.
- `.../service/RshCompilerTest.java` — Modules compile without floating-point contraction (`-ffp-contract=off`).
- `.../session/`, `.../session/gnur/` — R session tests, and `GNUR`, the R processes that tests evaluate in.
- `.../snapshot/` — Snapshot framework (`Query`, `SnapshotStore`, `DeterminismTest`).
- `.../snapshot/bc/`, `bc2c/`, `bc2fir/`, `fir/ir/`, `fir/opt/`, `fir/interpret/`, `fir2c/`, `gen2c/`, `bench/` — Snapshot queries and tests of each pipeline stage (`EvalQuery` runs compiled code in R; `StubThresholdTest` runs it with a higher stub threshold; `ManualFirServer` serves one example by hand; `bench/VersionBenchmark` counts the versions per function after the benchmark call runs on the lazy module).
- `.../snapshot/bench/PromiseBenchmark.java`, `PromiseBenchmarkQuery.java` — Counts the promises (created, forced, reflected) and copies of each benchmark call, in `-DFIR_STATS` builds without and with the FIŘ optimizations.
- `.../snapshot/bench/` (timed) — `Benchmark` (every representation, with the FIŘ rows' code size), `OptimizationBenchmark` (without each optimization), `SynergyBenchmark` (without sets of optimizations, against the product of single removals), `OwnershipBenchmark` (without each ownership optimization, with the copy counts of each variant); `VariantBenchmark` compiles, times and deduplicates their variants by generated C.
- `server/src/test/resources/org/prlprg/examples/` — R and FIŘ example programs (data).
- `.../examples/R/bench_simple_promise_reflect.R` — A benchmark whose argument promises reflect (`environment()`) and exit by an error (`stop`), to check the promise benchmark's reflection detection.
- `.../examples/R/complex_assign_aliasing.R` — Setter calls on vectors that something else holds (a variable, a parameter, a closure, the index or value), which the assignment protocol must copy.
- `.../examples/R/dots_{order,reuse,promise,env}.R` — Regressions for `...` in the fir2c runtime: element order, reuse after a closure call, forced elements for a builtin, and the `DOTSXP` binding.
- `.../examples/R/internal_op_{choose_stopifnot,primval}.R` — Regressions for a direct `.Internal` call in the fir2c runtime: its `op` must be its own entry, since a shared `do_*` selects the operation by `PRIMVAL(op)`.
- `.../examples/R/eval_compiled_body_in_live_frame.R` — `eval` of a compiled closure's body in a live frame: its pop must not mark that frame as returned (`FIR_FRAME_RETURNED`).
- `.../examples/R/closure_called_from_inlined_frame_in_elided_frame.R` — A closure made in a real frame inside an elided frame, called with its own elided frame: no cycle in the parent chain.
- `.../examples/R/closure_from_frame_nested_in_elided_frame.R` — A closure from a real frame that an elided frame contains: its lookups reach the elided frame's parent, not the elided environment's current parent.
- `.../examples/R/elided_frame_after_caught_error.R` — An elided frame whose callee, called from R, catches an error past a pushed elided frame: the from-R exit restores the elided environment's parent.
- `.../examples/R/attributes_fail_type_guard.R` — A value with attributes (a name) fails the type guard of a version typed from plain values (`Fir_value_kind_matches`), and deopts.
- `.../examples/R/length_object_deopts.R` — The unboxed `length` deopts for an object, which can dispatch a `length` method.
- `.../examples/R/unused_length_runs_method.R` — An unused `length(o)` stays (`@signals`), since GNU-R dispatches it to a `length` method that prints.
- `.../examples/R/missing_argument_error_names_it.R` — The error for a missing argument names it (`checkMissing`), also in a compiled version.
- `.../examples/R/missing_arg_forced_in_branch.R` — `if (b) a` forces a missing `a` or its default after a warmup that passed `a` only with a TRUE `b`: the type assumption that elided `checkMissing` and the force must stay.
- `.../examples/R/logical_operand_type_error.R` — `&&` and `||` raise GNU-R's errors for an operand that isn't a number (a string, a factor) or is longer than 1, in optimized code.
- `.../examples/R/as_logical_one.R` — The unboxed `as.logical` deopts where the result isn't one logical (a version that speculates on `v1(L)`, and `&&`).
- `.../examples/R/for_seq_object.R` — A `for` loop over a factor or another object (`toForSeq`): the labels, no `length` or `[[` dispatch, and the error for an environment (`gcTorture`).
- `.../examples/R/colon_real_bounds.R` — The unboxed `:` of reals (GNU-R's `seq_colon`): the end of a real `to`, `NA`/`NaN` errors, and a deopt where a `v(I)` version's range is real.
- `.../examples/R/subscript_nonpositive.R` — Scalar subscript reads with an index below 1: GNU-R's results and errors, or a deopt where `x[i]` isn't one element.
- `.../examples/R/box_na_string.R` — `box` of the unboxed string `NA` is `NA_character_`.
- `.../examples/R/lgamma_negative.R` — The unboxed `lgamma` is R's `lgammafn` (negative non-integers).
- `.../examples/R/as_integer_real_range.R` — The unboxed `as.integer` of a real at the ends of the integer range, with the warning out of it; a real subscript there is silent (`realToIndex`).
- `.../examples/R/sign_nan.R` — The unboxed `sign` returns `NaN` and `NA` unchanged.
- `.../examples/R/deopt_elided_env_store.R` — A deopt branch of a version with an elided environment stores the parameters: the fir2c backend materializes the environment first (`Fir_materialize_env`).
- `.../examples/R/promise_shared_stub.R` — A deopt stub that compiles to one promise for its site (`Fir_mk_stub_promise`), run under `gctorture`.
- `.../examples/R/closure_super_assigns_defining_frame.R` — A closure stores into a variable of its defining frame with `<<-` (`OriginAnalysis` must not keep the variable's origin across the call).
- `.../examples/R/closure_captures_promise_argument.R` — An inlined callee's closure captures its environment, which holds a promise argument that a later call forces (`OriginAnalysis` must leak the promise).
- `.../examples/R/callee_closure_sees_global_not_caller.R` — A closure that a callee creates looks up names in the callee's closure environment, not in the caller's frame (`Inline` must not inline a callee that creates a non-static closure or uses `<<-`).
- `.../examples/R/promise_reads_variable_stored_by_other_promise.R` — A promise reads a variable that a promise forced before it stores, and the first promise is forced again (`ResolveLoad` must not forward a register of the other promise's body).
- `.../examples/R/promise_forced_after_rebinding.R` — A closure keeps a promise argument, and the function rebinds the variable before it returns; the promise is forced later, so it reads the new binding (`OriginAnalysis` must see the bindings at `popenv`).
- `.../examples/R/promise_store_read_by_other_instance.R` — A loop's promise forces, through a callee, the promise of the same code from the previous iteration, which stores a variable that the first one then reads (`ElideDeadStore` must keep the store).
- `.../examples/R/promise_store_in_inlined_callee.R` — The argument promise `x <- 2` of an inlined callee stores into the caller's environment, not the callee's (`Inline` must not inline the force there, and `OriginAnalysis` must run the body without the callee's environment).
- `.../examples/R/promise_of_copied_vector_subscript.R` — A kept promise `w[1]` of a constant vector: the folded subscript of a `v1(R)` version is a boxed constant (`OriginAnalysis` constant folding).
- `.../examples/R/promise_capture_{outlives_frame,param_closure,wrapper_rebound}.R` — A promise that reads a register of its frame is forced after the frame returns, so it must keep a copy of the register (`Fir_mk_promise`).
- `.../examples/R/promise_site_code.R` — Promises without captures, which share one code object for their site (`Fir_promise_site_code`): forced in a loop, and kept by a closure past their creator (`gcTorture`).
- `.../examples/R/subscript_default_method.R` — Subscripts that the fir2c runtime sends straight to the default method of `[`, `[[`, `[<-` and `[[<-`, and S3 targets that must still dispatch (`gcTorture`).
- `.../examples/R/subscript_scalar_edges.R` — Scalar subscripts at the edges of the fir2c runtime's paths without an argument list: indices out of range or not scalar, targets with attributes, shared targets, coercing stores (`gcTorture`).
- `.../examples/R/checkpoint_assume_after_box.R` — A checkpoint's assumptions stay in front of a `box` that `SchedulePure` defers to their first use after them (`gcTorture`; else the `ldf` assumption isn't checked and its register is garbage).
- `.../examples/R/missing_promise_elided.R` — `missing` follows a promise into the caller's frame, so the caller's environment must stay materialized.
- `.../examples/R/missing_unknown_callee.R` — `seq.default` (a base closure, so a dynamic callee) calls `missing` on a promise of a symbol, which reads the caller's environment: it must not become non-reflective.
- `.../examples/R/missing_string_branch.R` — `missing("x")` reads the binding of `x`, so its store must stay; and a default parameter's `missing` check (the `--> B` version).
- `.../examples/R/elided_env_parent_{after_call,promise}.R` — Regressions for the parent of an elided frame in the fir2c runtime: after an elided callee with another parent returns, and in a promise that such a callee forces.
- `.../examples/R/empty_name_subscript.R` — `[`, `[[`, `[<-`, and `[[<-` with the name `""`, which GNU-R never matches, so that the interpreter mocks read it out of range and append it.
- `.../examples/R/ls_after_parent_frame.R` — `ls` of a frame after `parent.frame` reflects on it lists only its bindings (the vendored R keeps its reflection mark out of them).
- `.../examples/R/ls_unmarked_frame.R` — `ls` of a frame that `sys.frame` returns, to check the interpreter mocks against GNU-R.
- `.../examples/R/sys_frame_of_caller_without_context.R` — `sys.frame(-1)` in a callee counts its caller's frame, which a static call pushed without a GNU-R context.
- `.../examples/R/body_of_compiled_closure.R` — `body`, `formals`, `deparse`, `identical` and `print` of a closure of compiled FIŘ code see its source, as with a bytecode body.
- `.../examples/R/reflection_after_failed_warmup.R` — A warm-up that fails in an unmocked builtin before a closure reflects: the optimizer must not speculate from the partial feedback that it never reflects.
- `.../examples/R/real_to_string.R` — A real coerced to a string by `c`, `[<-`, and `as.character` (15 significant digits, scientific notation if shorter), to check the interpreter mocks against GNU-R.
- `.../examples/R/sum_abs_edges.R` — An integer `sum` that does not fit (real in GNU-R) and `abs` of a logical, to check the interpreter mocks against GNU-R.
- `.../examples/R/matrix_empty_data.R` — `matrix` of empty data with missing dimensions, to check the interpreter mock against GNU-R.
- `.../examples/R/subscript_exact_drop.R` — `[[` with `exact = FALSE` (a partial name match) and `[` with `drop`, to check the interpreter mocks against GNU-R.
- `.../examples/R/subscript_null_na.R` — `[` and `[[` of `NULL`, and `[[` of a list with an `NA` subscript, to check the interpreter mocks against GNU-R.
- `.../examples/R/{complex_assign,subset}_language.R` — Regressions for a lite special called with values in the fir2c runtime: a call or symbol vector, index, or value must not be evaluated again.
- `.../examples/R/mod_idiv_builtins_{int,real}.R` — `%/%` edge cases (signs, zero divisor, `NA`, `|x1 / x2| < 1`, recycling) with integer and real results, to check the interpreter mock against GNU-R.
- `.../examples/R/mod_cat.R` — `cat` of strings, numbers, logicals, `NA` and `NULL`, with default, empty, and recycled `sep`, to check the interpreter mock against GNU-R (only the return value is compared; check the printed output by hand).
- `.../examples/R/mod_lapply.R` — `lapply` over an integer vector (with positional and named extra arguments, and names) and a list, to check the interpreter mock against GNU-R.
- `.../examples/R/mod_is_na.R` — `is.na` of real (`NA`, `NaN`), integer, logical, and string vectors, to check the interpreter mock against GNU-R.
- `.../examples/R/mod_list.R` — `list` with unnamed, named, `NULL`, and no elements, to check the interpreter mock against GNU-R.
- `.../examples/R/mod_names_assign.R` — `names<-` on a real vector and a list (equal length, shorter, `NULL`, replacing existing names), to check the interpreter mock against GNU-R.
- `.../examples/R/mod_subassign_grow.R` — `[[<-` and `[<-` past the end of a list and of integer, real, and named string vectors, to check the interpreter mock's growth against GNU-R.
- `.../examples/R/mod_subscript_names.R` — `[`, `[[`, `[<-`, and `[[<-` with a name subscript (present, absent, appended) on a named real vector and list, to check the interpreter mocks against GNU-R.
- `.../examples/R/mod_arith_names.R` — arithmetic, comparison, unary minus, and `abs` of named vectors (which operand's names the result keeps), to check the interpreter mocks against GNU-R.
- `.../examples/R/mod_matrix.R` — `matrix` (missing `data`, `nrow` or `ncol`, recycled `data`) and `[[`, `[`, `[[<-`, `[<-` with a row and column subscript, to check the interpreter mocks against GNU-R.
- `.../examples/R/mod_ls.R` — `ls` of frames from `environment()` (`name` and `envir`, hidden names), to check the interpreter mocks against GNU-R.
- `.../examples/R/mod_max_builtins_{int,real}.R` — `%%` and `max` edge cases (signs, zero divisor, `NA`/`NaN`, recycling) with integer and real results, to check the interpreter mocks against GNU-R.
- `.../examples/R/mod_na_nan_consts.R` — `` `%%`(NA_real_, y) `` and `` `%%`(NaN, y) `` in one function: the two call constants must stay apart (bytecode RDS round trip, constant pools).
- `.../examples/R/subassign_scalar.R` — Scalar `x[[i]] <- v` and `x[i] <- v` on unshared vectors, which the fir2c runtime stores directly: value and vector types, attributes, a class, growth, a real index, an alias.
- `.../examples/R/maybe_bound_merge_of_equal_stores.R` — A variable that is maybe bound at a deopt (so its promotion stores it back), with a phi-less merge of equal stores whose dominance frontier needs a phi.
- `.../examples/R/dots_read_only_by_ddnum.R` — A function that reads `...` only through `..1`, so its store of `...` must stay.
- `.../examples/R/unused_call_keeps_warning.R` — An unused `sqrt(x)` call still warns "NaNs produced" (`@signals`, `Cleanup`).
- `.../examples/R/unused_load_unbound_variable.R` — An unused load of an unbound variable still raises "object 'y' not found" (`InferEffects#maySignal`, `Cleanup`).
- `.../examples/R/unused_print_constant.R` — An unused `print(5L)` still prints, in a loop too (the typed `print` versions are reflective).
- `.../examples/R/unforced_promise_overflow.R` — A promise `d + 1L` that would overflow, passed to a callee that returns without forcing it, warns nowhere (`StrictifyPromise`).
- `.../examples/R/cold_print_method_writes_caller.R` — A `print` call that never ran in the warmup dispatches to a method that writes to `parent.frame()` (`SpeculateAssume`, `GlobalModules#runsNoRCode`).
- `.../examples/R/forwarded_promise_substitute_closure.R` — A closure keeps the frame of a callee that got a promise parameter, so `StrictifyPromise` must not forward the caller's own promise.
- `.../examples/R/cold_shadowed_builtin_guard.R` — A cold `bitwXor` call that the user shadows after the warmup: the assumption that it's the builtin must stay checked (`DeferIntoPromise`).
- `.../examples/R/missing_default_after_supplied.R` — `missing` of parameters with a default (a promise, a constant) after a warm-up that supplied them, and after an assignment.
- `.../examples/R/quote_empty_arg.R` — `quote(expr = )`: a supplied empty argument of a builtin call.
- `.../examples/R/subassign_nonlocal_marked_call.R` — `x[[i]] <- 0` on a global `x` after a run in the setter protocol marked the call as an assignment: the global must not change.
- `.../examples/R/subscript_symbol_value.R` — A subscript whose value is a symbol, in a static call's `...` and in a dynamic call: the special must not evaluate it again.
- `.../examples/R/s3_matrix_subassign_untagged.R` — Static `x[i, j] <- v` and `x[[i, j]] <- v` on an S3 object: the method gets the subscripts untagged.
- `.../examples/R/s3_method_substitute.R` — `substitute(x)` in a compiled S3 method after `UseMethod` forced `x`: the method still sees the caller's expression.
- `.../examples/R/s3_subscript_untagged.R` — Static `[<-`, `[` and `as.character` calls on an S3 object: the methods see the tags of the R call (none), not the builtin's parameter names.
- `.../examples/R/substitute_in_parent_frame.R` — `substitute(a, parent.frame())` in a function with no context reader by name: the special evaluates `parent.frame()`, so the function needs a context.
- `server/src/test/resources/org/prlprg/session/` — Saved base environment and builtin data for test sessions.
- `server/src/test/resources/org/prlprg/snapshot/` — `eval.R` (the eval driver), bench scripts (`bench.R`, `optbench.R`, `synergy.R`, `ownership.R`, `promisebench.R`, which also counts `OwnershipBenchmark`'s copies), `order.txt`.
- `server/src/test/resources/org/prlprg/gen2c/`, `bc2c/` — Build files and data for compiled-C tests.
- `server/src/test/snapshots/` — Saved snapshot outputs (data). Only the `stdlib_*` examples' are committed, in git LFS.
