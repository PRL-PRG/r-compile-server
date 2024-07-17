# The new IR

## Example

```r
foo <- function(n, m) {
  array <- replicate(100, n)
  for (i in 1:n) {
    array[i] <- i * m
  }
  array
}
```

Compiles to something like:

```
fn @foo(n, m) {
  #1(%n, %m) {
      %inclos <- env({n <- %n, m <- %m}, parent=?)
      %replicate <- ldFun(replicate, env=%inclos)
      %n <- prom(@1 env %inclos {
          %n <- ld(n, env=@foo%inclos)
          %1n <- force(%n, env=%inclos)
          return %1n
      })
      %1 <- %replicate(\100, %n)
      st(array, %1, env=%inclos)
      %n <- ld(n, env=%inclos)
      %1n <- force(%n, env=%inclos)
      %2 <- `:`(\1, %1n, env=%inclos)
      %forSeq <- toForSeq(%2)
      %forLength <- length(%forSeq)
      goto ^forStep
    ^forStep(%index(%1index:^1, \0:^entry)):
      %1index <- `+1`(%index)
      %3 <- `<`(%forLength, %1index)
      br %3 ^forEnd ^forBody
    ^forBody:
      %4 <- `[[`(%forSeq, %1index, env=%inclos)
      st(i, %4, env=%inclos)
      %i <- ld(i, env=%inclos)
      %1i <- force(%i, env=%inclos)
      %m <- ld(m, env=%inclos)
      %1m <- force(%m, env=%inclos)
      %5 <- `*`(%1i, %1m, env=%inclos)
      %array <- ld(array, env=%inclos)
      %6 <- is(NonObject, %array)
      br %6 ^dispatchNonObject ^tryDispatchObject
    ^tryDispatchObject:
      %7 <- `tryDispatch.[<-`(array, %5, index=%1index, env=%inclos)
      br %7#didDispatch ^1 ^dispatchNonObject
    ^dispatchNonObject:
      %2i <- ld(i, env=%inclos)
      %3i <- force(%2i, env=%inclos)
      %8 <- `[<-`(%array, %5, index=%3i, env=%inclos)
      goto ^1
    ^1(%9(%8:^dispatchNonObject, %7#value:^tryDispatchObject)):
      st(array, %9, env=%inclos)
      goto ^forStep
  #2(%n:int$$, %m:int$$) {
      %replicate <- ld(replicate, env=?)
      %`:` <- ld(`:`, env=?)
      %`*` <- ld(`*`, env=?)
      %1 <- funEq(replicate, %replicate)
      %2 <- funEq(`:`, %`:`)
      %3 <- funEq(`*`, %`*`)
      cp [%1, %2, %3] ^1
    ^1:
      %array <- replicate(\100, %n)
      goto ^forStep
    ^forStep(%i(\0:^1, %1i:^forBody), %1array(%array:^1, %2array:^forBody)):
      %1i <- `+1`(%i)
      %4 <- `<`(%i, %n)
      br %4 ^forEnd ^forBody
    ^forBody:
      %5 <- `*`(%i, %m)
      %2array <- `[<-`(%1array, %5, index=%i)
      goto ^forStep
    ^forEnd:
      return %1array
  }
}
```

## General idea

### Instructions

Every statement is a "call" consisting of a **function**, list of **inputs**, set of **effects**, and list of **outputs**:

- **Function**: either an **intrinsic (static)**, **closure ("semi-static")**, or **variable (dynamic)**.
  - **Intrinsic (static)**: a name (R identifier), e.g. `ld`, `env`, `` `+` ``, `setSessionTimeLimit`.
    - Includes "made-up" builtins like `ld` (formerly `LdVar`) and `env` (formerly `MkEnv`), builtins with specialized overloads e.g. `` `+` ``, and every actual builtin even niche e.g. `setSessionTimeLimit`.
    - Whether an intrinsic is a "made-up" or real builtin only matters when lowering, because *except in code generation and lowering, we don't special-case specific functions, only effects (e.g. "loads", "stores")*.
  - **Closure ("semi-static")**: `@foo` (calls the cached compiled closure whose name is `foo`; specifically, calls the version of the closure statically determined by a call context computed from the inputs).
    - Inter-procedural analysis is handled by the closure getting fine-grained inferred effects, because *except in code generation and lowering, we don't special-case specific functions, only effects (e.g. "loads", "stores")*.
  - **Variable (dynamic)**: `%1` (calls the SSA variable assigned the name `1`).
    - The variable must statically be a function. This seems obvious but sometimes we may compile a call to something that isn't necessarily a function (e.g. `(…)(…)`). In this case, we have to insert a guard before the call to cast the variable.
    - A trivial call to an inner function is dynamic (`%1 = fn(…); %1(…)`), but it has as fine-grained effects as a semi-static call so it doesn't hurt analysis.
- **Input**: a value (the argument, has a provided type), **required type**, and **input ownership**.
  - **Type**: any SEXP, simple-scalar integer SEXP, unboxed integer, constant symbol SEXP, etc.
    - These are Java types, e.g. the above are respectively `NSexp`, `NScalarIntSexp`, `NUnboxedInt`, and `RegSymSXP`.
      - `NSexp` = IR node that represents a SEXP. `NUnboxedInt` = IR node that represents an unboxed int, etc. Anything not a node is "constant" e.g. `RegSymSXP`.
      - Benefits of encoding the full type system in Java is that it's checked at compile time, and we can store extra information for nodes of some types (like the known parent of `NEnvSexp` and subtypes).
    - If a node is the wrong type...
      - If we know the instance is the correct Java type and it was just upcasted, we can do a regular Java cast.
      - Conversion: If a type is wrong, the compiler may insert a `coerce` or `convert` instruction to make it correct. "coerce" asserts that the value is the correct type in debug mode at runtime, "convert" may actually change the value e.g. it turns an SEXP into an integer by invoking `Rf_asInteger` (["cast" vs "conversion"](https://stackoverflow.com/a/3166919)).
  - **Input ownership**: "consuming" (the default) or "non-consuming" (e.g. in `isType`).
    - During (or right before) lowering, the compiler implicitly copies arguments that are passed to consuming parameters, *unless* the argument is owned and the call is its last use.
      - Note that we insert these copy instructions during lowering (maybe even in the C code directly, so there's no `copy` IR instruction), but we insert casts above in the IR. The reason is that ownership is flow-sensitive while types aren't. e.g. we can use GVN to reuse `cast` outputs, but never ownership.
- **Output**: a node (has a provided typed) and **output ownership**.
  - **Output ownership**: "owned" (e.g. the result of `` `[<-` ``), or "unowned".
    - So similar to input ownership, and isomorphic, but the default is flipped and slightly different meaning.
- **Effect**
  - Each effect pertains to zero or more inputs. The same instruction can have multiple of the same effect that pertain to different inputs (e.g. "consumes" effect for both the vector and value in `` `[<-` ``).
  - Effects form a lattice, where TOP is "arbitrary", and BOTTOM is "pure". But the set of effects can't be collapsed, i.e. a set containing an effect and a super-effect is different than one containing just the super-effect (so there are actually 2 lattices: "set of effects", and "effect").
    - e.g. the "loads" effect has "reads environment" as a super-effect, which has "uses environment" as a super-effect.
    - The way this works is that an optimization will store a worklist of effects, check for each effect type, handle effects of that type and remove them from the worklist, then check for and handle effect super-type. e.g. scope resolution would check for and handle "loads" effects, then "reads environment" effects, ... eventually checking and handling "arbitrary" effects. If an instruction has a "loads" effect and no other "reads environment", it will be removed before the "reads environment" case, so it won't be reached. But if an instruction (for some reason) has a "loads" effect and a *separate* "reads environment" effect, the "reads environment" case will still be reached with the other effect. For an optimization pass that doesn't specially handle loads effects but does handle "reads environment" effects, the "reads environment" case will handle both the "loads" and separate "reads environment" effect. The sub-effect handlers keep more optimization potential then the super-effect handlers.
  - Examples:
    - **Loads**: pertains to variable name and environment, state that the value mapped to the given name is loaded from the environment.
    - **Stores**: pertains to variable, name, and environment, states that the variable is stored in the value mapped to the given name in the environment.
    - **Consumes** (e.g. for the vector and value in `` `[<-` ``): During (or right before) lowering, the compiler implicitly copies arguments that are passed to consuming parameters, *unless* the argument is owned and the call is its last use.
      - Note that we insert these copy instructions during lowering (maybe even in the C code directly, so there's no `copy` IR instruction), but we insert conversions above in the IR. The reason is that ownership is flow-sensitive while types aren't. e.g. we can use GVN to reuse `convert` outputs, but never ownership.

**Dependencies:**

- The function determines the input required-types/ownerships and count (and whether count is variable e.g. calls), and number of outputs.
- The function and input values/provided-types determine the effects and output nodes/provided-types/ownerships.

Jumps are very similar, except they are only non-GNU-R intrinsics, inputs may include basic blocks, and they have a different syntax. Like statements, jumps can have effects and node outputs.

### Lowering

Compiled closures have 3 entrypoints.

1. **GNU-R entrypoint**.
   - Where it's called: from `Rf_applyClosure` (invoked the function's body in `R` which is something like `.Internal(callJit, <raw ...>)`).
   - What is does: dynamically computes a call context, reshapes the arguments to be provided directly on the stack (C varargs with explicit "int length" argument before), and calls #2.
2. **Dispatch entrypoint**.
   - Where it's called: from compiled code, when we know it's a compiled closure but the exact closure is unknown.
   - What it does: determines the specific version from the call context, reshapes the arguments to be what the version expects (`Rf_error`s if there are too many arguments; adds `R_MissingArg`s or defaults if there are too few arguments; replaces explicit `R_MissingArg`s with defaults; and unboxes provided `SEXP` arguments where necessary), dispatches the selected version with the reshaped arguments, and re-boxes the return value if necessary.
3. **Version entrypoint**.
   - Where it's called: from "semi-static" closure calls.
   - What it does: runs a specific closure version, with arguments that are already on the stack in the correct order, and may already be unboxed (so it's signature in C may look exactly like a normal function, e.g. `int add(int a, int b)`).

To lower each statement:

- **Intrinsic (static)**: generate a call to a static function. It may be an inline function. It may be a function we provide e.g. `loadVar`, or an actual R builtin e.g. `do_setSessionTimeLimit`.
- **Semi-static closure**: compute the call context to get the ID of the dispatch version. Request the memory address of the dispatch version with the given ID on the client (the client may have to download the version). Generate a call to this address.
- **Variable**: iff the variable is a compiled closure (subtype of `cclo[?]`), compute the call context, then generate a call to `dynamicCall` with the variable, context, number of arguments, and arguments. `dynamicCall` is like `Rf_applyClosure` but calls the dispatch entrypoint (passes the statically-computed context, passes the remaining arguments on the stack not in `ListSXP`). Otherwise, generate a call to `Rf_applyClosure` (which must handle builtins and specials and calls the GNU-R entrypoint).

## Java

- `CFG` (control-flow-graph): contains `Param`s and `BB`s. Redundantly stores its exits, instructions and nodes for sanity and efficiency. Contains an observer for the record/rewind/replay feature.
- `BB` (basic block): contains a set of `Phi`s, list of `Stmt`s, and optional `Jump`. Also redundantly stores its predecessors for sanity and efficiency.
- `InstrPhiOrParam`: these have a lot in common, I'm not sure what else to call this type. It exposes a list of outputs.
  - `InstrOrPhi`: immediate child of a basic block. It exposes a list of inputs, and the ability to replace all occurrences of a node in the inputs.
    - `Instr`: subtypes are `Stmt` or `Jump`; the main difference is that jumps can only be at the end of a block, and statements can't be at the end of a block (if they are, the block has a "null jump" and the CFG isn't valid). Internally contains an `InstrData` (`StmtData` for `Stmt`, `JumpData` for `Jump`) and output `Node`s. Externally, only exposes a function, list of inputs, effects, outputs, the ability to replace all occurrences of a node in the inputs, and the ability to provide a new `InstrData` (`mutate`); the function/effects/outputs and input types/ownerships/count can only be changed by changing the `InstrData`.
    - `Phi`: SSA phi node. Contains a map of predecessor `BB` to input `Node`. It's not a node itself though, instead it contains a `Node` that may be passed to other phi and instruction inputs where the phi would ordinarily be. This is because otherwise we'd need to make a `Phi` subclass for every `Node` type.
  - `Param`: input parameter to a compiled closure stored in the `CFG`. This replaces PIR's `LdArg`. Like `Phi`, it's not a node itself, instead it contains a `Node` that is passed to other phi and instruction input (and the phi's `InstrPhiParam` "list of outputs" is a list containing this node). Specialized versions will have `Node`s of specific types.
- `InstrData`: subtypes are `StmtData` or `JumpData`. An immutable record that determines the function, inputs, effects, and outputs. Specifically, the function type (specific intrinsic, "semi-static", or "dynamic") is determined by the record's class (specific intrinsic classes, `GenericBuiltinCall`, `SemiStaticCall`, or `DynamicCall`), the input count is determined by the number of components and whether one of them has the `@VarArgs` annotation, the input are determined by the components' Java types whether each has a `@Nullable` annotation, the input ownerships are determined by the components' annotations, the effects are determined by the record's annotations, the output count is determined by the record's class, the output types are determined by either a record annotation or function override, and the output ownership is determined by a record annotation. This is similar to what we currently have. An example `StmtData` is `record EqIntSexp(@Consumes NIntSexp lhs, NIntSexp rhs, @Nullable NEnvSexp env) {}`. There are a lot of these, but we don't explicitly pattern-match on them except during lowering.
- `Node`: an abstract value: an IR value that may not be constant (although there is `NConstant` and `NConstantSexp`, `NConstantUnboxedInt`, etc. if an input is guaranteed to be constant we'll just store it directly). A node's type is its Java class. Node classes are prefixed with `N` to distinguish ones like `NSexp` from `SEXP`.

## Syntax

### General conventions

#### Prefixes (for parsing)

Closures are prefixed with `@` (e.g. `@foo`, `@1`), basic blocks are prefixed with `^` (e.g. `^bb`), variable nodes are prefixed with `%`, constants are prefixed with ` \ `, and special nodes are prefixed with `?`.

#### Names

Closures, basic blocks, and variable nodes have **names**, which share this syntax:

- An integer (e.g. `@1`, `%5`)
- An R identifier (e.g. `@foo`, `` %`hello world` ``)
- An integer followed by an R identifier (e.g. `@1foo`, `` %5`hello world` ``)

The third for is for disambiguation, e.g. in case we want to name a compiled closure `foo`, but we already have a compiled closure named `foo`, we'll call it `1foo` (or if that's already taken, `2foo` and so on) instead. Same for BBs and variables, except they are only disambiguated within the CFG (so `%foo` in one CFG may refer to a different node than `%foo` in another).

Note that this is automatically done by the API: if you try to create a closure/bb/variable named `foo` and one already exists, it will be named `1foo` (or `2foo` or ...) instead.

### Closure header

```
fn @foo(n, m) {
  #1(%n, %m) {
      … # instructions and BBs
  }
  #2(%n:int$$, %m:int$$) {
      … # instructions and BBs
  }
}
```

`#1`, `#2`, are versions. Each version has a call context defined by the argument types (and if we need argument-generic context data, e.g. `NoExplicitlyMissing`, `needs …` after arguments, e.g. `#2(%n:int$$, %m:int$$) needs NoExplicitlyMissing { … }`. `#1` is the baseline, so the arguments are guaranteed to be untyped, hence the lack of annotations.

#### Inner closures and promises

Inner closures and promises may be defined in `fn(…)` or `prom(…)` instructions, see the below example.

The `CLOENV`/`PRENV` of inner function or promise may be from an outer function or promise. If so, it's specified after the regular arguments list `(…)`, and in the function or promise's body, the environment will be prefixed with the outer function or promise's identifier, to make clear that it's an inter-procedural node.

```
fn @foo(n, m) {
  #1(%n, %m) {
      %inclos <- env({n <- %n, m <- %m}, parent=?)
      …
      %n <- prom(@1 env %inclos {
          %n <- ld(n, env=@foo%inclos)
          %1n <- force(%n, env=%inclos)
          return %1n
      })
      …
      %f <- fn(@2(k) env %inclos {
        #1(%k) {
            %1inclos <- env({k <- %k}, parent=%inclos)
            …
        }
      })
      …
```

### BB header and phi nodes

Phi nodes are defined at the top of the BB like so:

```
^someBB(
  %somePhi(%a:^pred, %b:^otherPred)
  %someOtherPhi(%c:^pred, \1:^otherPred)
):
  … # instructions
^someOtherBB: # No `(…)` if there are no phis
  … # instructions
```

### Instructions

- Non-producing statement: `fun(…)`
- Statement producing value: `%var <- fun(…)`
- Jump: `jump ^bb`, `br %cond ^ifTrue ^ifFalse`, `return %value`, ...

As explained above, every statement is a "call", and there are 3 main types of calls: intrinsic/builtin (static) calls, exact compiled closure (semi-static) calls, and variable (dynamic) calls. This is reflected in the syntax:

- Intrinsic/builtin (static) calls
  - `%inclos <- env({…}, parent=?)` create an environment with the bindings in `…` and unknown parent, assign it to the SSA variable `%inclos`.
  - `%n <- ld(n, env=%inclos)` = load the symbol `n` in the environment `%inclos`, assigns it to the SSA variable `%n`.
  - `st(n, %n, env=%inclos)` = store the value in the SSA variable `%n` under the symbol `n` in the environment `%inclos`.
  - `` `*`(%i, %n, env=%inclos) `` = multiply the SSA variables `%i` and `%n`, also pass the environment `%inclos` since the multiplication needs it if it dispatches.
- Exact compiled closure (semi-static) calls:
  - `%foo <- @foo(%i, %n)` = call the function named `foo` with variables `%i` and `%n`, store the result in `%foo`.
  - - `%2 <- @3(%i, \[int]100)` = call the function named `3` with variables `%i` and `\[int]100`, store the result in `%2`.
- Dynamic calls:
  - `%12 <- %foo(%i, %n)` = call the function in the variable named `foo` with arguments `%i` and `%n` and no explicit names.
  - `%14 <- %range(start=%i, end=\100)` = call the function in the variable named `range` with argument `%i` named `start` and `\100` named `end`.
  - `%14 <- %something(start=%i, ...)` = call a function with dots arguments. The outer closure must also take `...` as one of its parameters (e.g. `fn @foo(...):`).

### Nodes

- Variables: `%var`
- SEXP constants: `\<vec 1 2 3>` (the syntax of the SEXPs after ` \ ` is reused from how we parse/print SEXPs)
- Non-sexp constants: `\[int]5L`, `\[invalid]unsetPhiInput`
- Special nodes: `?` = unknown environment ("not closed", the parent of a compiled closure that isn't an inner closure).

Examples:

- `%foo` = variable named `foo`.
- `%3` = variable named `3`.
- `\2L` = constant SEXP, scalar integer `2`.
- `\<real 1 2 3>` = constant SEXP, real-vector containing `1 2 3`.
- `\<real 1 2 3 | class="foo">` = constant SEXP, real-vector containing `1 2 3` and class `foo`.
- `\<bcode#1 ...>` = constant SEXP, bytecode. `<bcode#1>` somewhere else refer to the same (pointer) SEXP.
- `\hello(world, ...)` = constant SEXP, language object whose function is the symbol `hello` and takes two arguments: the symbol `world` and the symbol `...`.
- `?` = unknown ("not closed") environment.

`[…]` = list of nodes (e.g. `[%1, %2, %3]`.)
`{…}` = map of nodes, usually to symbols (e.g. `{n <- %n, m <- %n}`).

### Types

- `int$$` = scalar integer, no attributes no NA
- `int$` = scalar integer, no attributes maybe NA
- `int(n/NA)` = vector integer of length `n`, no attributes no NA
- `int(n)` = vector integer of length `n`, no attributes
- `int(/NA)` = vector integer of unknown length, no attributes no NA
- `int` = vector integer of unknown length, no attributes maybe NA
- `int[class="foo"]` = vector integer object of class `foo`
- `int[class=?]` = vector integer object of unknown class
- `int[?]` = vector integer with unknown attributes
- `prom(int)` = strict-promise-wrapped vector integer
- `prom?(int)` = maybe-strict-promise-wrapped vector integer
- `lazy?(int)` = maybe-lazy-promise-wrapped vector integer
- `miss|lazy?(int)` = maybe-missing, maybe-lazy-promise-wrapped vector integer
- `any` = maybe-promise-wrapped, maybe missing any type (TOP)
- `nothing` = nothing type (BOTTOM)s
