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
  @foo#1(%n, %m) {
      %e <- env(n <- %n, m <- %m)@?
      'array@e <- 'replicate@e(100, {'n@e}@e)@e
      %2 <- `:`(1, 'n@e)@e
      %forSeq <- toForSeq(%2)
      %forLength <- length(%forSeq)
      goto ^forStep
    ^forStep(%index(%1index:^forStep, 0L:^entry)):
      %1index <- `+1`(%index)
      %3 <- `<`(%forLength, %1index)
      br %3 ^forEnd ^forBody
    ^forBody:
      'i@e <- `[[`(%forSeq, %1index)@e
      %5 <- `*`('i@e, 'm@e)@e
      %array <- 'array@e
      %6 <- is(NonObject, %array)
      br %6 ^dispatchNonObject ^tryDispatchObject
    ^tryDispatchObject:
      %didDispatch, 'array@e <- `tryDispatch.[<-`(%array, %5, %1index)@e
      br %didDispatch ^forStep ^dispatchNonObject
    ^dispatchNonObject:
      'array@e <- `[<-`(%array, %5, 'i@e)@e
      goto ^1
  @foo#2(%n:int$$, %m:int$$) {
      cp [
        replicate == 'replicate@?,
        `:` == '`:`@?
        `*` == '`*`@?
      ] ^1
    ^1:
      %array <- replicate(100L, %n)
      goto ^forStep
    ^forStep(%i(0L:^1, %1i:^forBody), %1array(%array:^1, %2array:^forBody)):
      %1i <- `+1`(%i)
      br `<`(%i, %n) ^forEnd ^forBody
    ^forBody:
      %5 <- `*`(%i, %m)
      %2array <- `[<-`(%1array, %5, index=%i)
      goto ^forStep
    ^forEnd:
      return %1array
  }
}
```

```
fn @foo('n, 'm) {
  @foo#1(n, m) {
      e <- ['n=n, 'm=m]@?
      'array@e <- f'replicate@e(100, {'n@e}@e)
      _1 <- `:`(1, 'n@e)@e
      forSeq <- toForSeq(_1)
      forLength <- length(forSeq)
      goto ^forStep
    ^forStep(index(index1:^1, 0L:^entry)):
      index1 <- `+1`(index)
      _2 <- `<`(forLength, index1)
      br _2 ^forEnd ^forBody
    ^forBody:
      'i@e <- `[[`(forSeq, index1)@e
      _3 <- `*`('i@e, 'm@e)@e
      array <- 'array@e
      _4 <- is(NonObject, array)
      br _4 ^dispatchNonObject ^tryDispatchObject
    ^tryDispatchObject:
      didDispatch, dispatchResult <- `tryDispatch.[<-`(array, _3, index=index1)@e
      br didDispatch ^1 ^dispatchNonObject
    ^dispatchNonObject:
      _5 <- `[<-`(array, _3, index='i@e)@e
      goto ^1
    ^1(_6(_5:^dispatchNonObject, dispatchResult:^tryDispatchObject)):
      'array@e <- _6
      goto ^forStep
  @foo#2(n:int$$, m:int$$) {
      _1 <- funEq(replicate, 'replicate@?)
      _2 <- funEq(`:`, '`:`@?)
      _3 <- funEq(`*`, '`*`@?)
      cp [_1, _2, _3] ^1
    ^1:
      array <- replicate(100L, n)
      goto ^forStep
    ^forStep(i(0L:^1, i1:^forBody), array1(array:^1, array2:^forBody)):
      i1 <- `+1`(i)
      _4 <- `<`(i, n)
      br _4 ^forEnd ^forBody
    ^forBody:
      _5 <- `*`(i1, m)
      array2 <- `[<-`(array1, _5, index=i1)
      goto ^forStep
    ^forEnd:
      return array1
  }
}
```

## General idea

### Instructions

Every statement is a "call" consisting of a **function**, list of **inputs**, set of **effects**, and list of **outputs**:

- **Function**: either an **intrinsic (static)**, **closure ("semi-static")**, or **variable (dynamic)**.
  - **Intrinsic (static)**: a name (R identifier), e.g. `ld`, `env`, `` `+` ``, `setSessionTimeLimit`.
    - Includes "made-up" builtins like `ld` (formerly `LdVar`) and `env` (formerly `MkEnv`), builtins with specialized overloads like `` `+` `` (formerly `Add`), and actual builtins (formerly `CallBuiltin` or `CallSafeBuiltin`) like `setSessionTimeLimit`.
    - Whether an intrinsic is a "made-up" or real builtin only matters when lowering, because *except in code generation and lowering, we don't pattern-match specific functions, only effects (e.g. "loads", "stores")*.
  - **Closure ("semi-static")**: `@foo` (calls the cached compiled closure whose name is `foo`; specifically, calls the version of the closure statically determined by a call context computed from the inputs).
    - Inter-procedural analysis is handled by the closure getting fine-grained inferred effects, because *except in code generation and lowering, we don't pattern-match specific functions, only effects (e.g. "loads", "stores")*.
  - **Variable (dynamic)**: `%1` (calls the SSA variable assigned the name `1`).
    - The variable must statically be a function. This seems obvious but sometimes we may compile a call to something that isn't necessarily a function (e.g. `(…)(…)`). In this case, we have to insert a guard before the call to cast the variable.
    - A trivial call to an inner function is dynamic (`%1 = fn(…); %1(…)`), but it has as fine-grained effects as a semi-static call so it doesn't hurt analysis.
- **Input**: a value (the argument, has a provided type), **required type**, and **input ownership**.
  - **Type**: any SEXP, simple-scalar integer SEXP, unboxed integer, constant symbol SEXP, etc.
    - These are Java types, e.g. the above are respectively `Node<? extends SEXP>`, `Node<? extends ScalarIntSXP>`, `Node<? extends Integer>`, and `RegSymSXP`.
      - `Node<? extends T>` = IR node that represents a `T` = anything not guaranteed statically-known. Statically known constants like the name in `ld` and `st` are just `T`, e.g. `RegSymSXP`.
      - We would need to create many more `SEXP` subclasses, e.g. `SimpleScalarIntSXP`, `ScalarIntSEXPNoAttrs`, `ScalarIntSXP`, `IntSEXPNoNANoAttrs`, `IntSEXPNoAttrs`, ...
        - Some of these can be computer-generated (and Java has good support for generated source code). It's definitely *possible* because all the types are immutable, except `EnvSXP` which is not specialized beyond what we currently have. But this creates a lot of classes, so maybe isn't ideal.
    - If a node is the wrong type...
      - If we know the instance is guaranteed to be the correct type, just not in the type system, we can do a regular Java cast.
      - If a type may be wrong but we assume it's correct, we can speculate on it.
      - If a type may be wrong e.g. turning an SEXP into a number for arithmetic, the compiler may insert a `convert` instruction to make it correct (["cast" vs "conversion"](https://stackoverflow.com/a/3166919)).
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
- `InstrOrPhi`: immediate child of a basic block. It exposes a list of inputs, and the ability to replace all occurrences of a node in the inputs.
  - `Instr`: subtypes are `Stmt` or `Jump`; the main difference is that jumps can only be at the end of a block, and statements can't be at the end of a block (if they are, the block has a "null jump" and the CFG isn't valid). Internally contains an `InstrData` (`StmtData` for `Stmt`, `JumpData` for `Jump`) and output `Node`s. Externally, only exposes a function, list of inputs, effects, outputs, the ability to replace all occurrences of a node in the inputs, and the ability to provide a new `InstrData` (`mutate`); the function/effects/outputs and input types/ownerships/count can only be changed by changing the `InstrData`.
  - `Phi<? extends T>`: SSA phi node. Contains a map of predecessor `BB` to input `Node`. It's also a subclass of `Node`.
- `Param<? extends T>`: input parameter to a compiled closure stored in the `CFG`. This replaces PIR's `LdArg`. Like `Phi`, it's a subclass of `Node`. Specialized versions will specific type parameters.
- `InstrData`: subtypes are `StmtData` or `JumpData`. An immutable record that determines the function, inputs, effects, and outputs. Specifically, the function type is determined by the `@Fun` or `@Intrinsic` annotation, the input count is determined by the number of components and whether the last one has the `@VarArgs` annotation, the input types are determined by the components' Java types whether each has a `@Nullable` annotation, the input ownerships are determined by the components' annotations, the effects are determined by the record's annotations, the output count is determined by the record's class, the output types are determined by either a record annotation or function override, and the output ownership is determined by a record annotation. This is similar to what we currently have. An example `StmtData` is `record EqIntSexp(@Consumes Node<? extends SimpleScalarIntSXP> lhs, Node<? extends SimpleScalarIntSXP> rhs, @Nullable Node<? extends EnvSXP> env) {}`. There are a lot of these, but we don't explicitly pattern-match on them except during lowering.
- `Node<? extends T>`: an abstract value of type `T`: an IR value of type `T` that may not be constant (although there is `Constant<? extends T>`, if an input is required to be constant we'll just store it directly). Because Java has erasure, `Node` stores the actual class of the value it encodes.

## Syntax

### General conventions

#### Prefixes (for parsing)

Closures are prefixed with `@` (e.g. `@foo`, `@1`), basic blocks are prefixed with `^` (e.g. `^bb`), variable nodes are prefixed with `%`, constants are prefixed with ` \ `, invalid nodes are prefixed with `!`, and special nodes are prefixed with `?`.

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

The `CLOENV`/`PRENV` of inner function or promise may be from an outer function. If so, it's specified after the regular arguments list `(…)`. Also, if a variable is defined in the function or promise's body with the same name as this outer environment, the outer environment identifier will be prefixed with the outer function's identifier to disambiguate it.

```
fn @foo(n, m) {
  #1(%n, %m) {
      %e <- env({n <- %n, m <- %m}, parent=?)
      …
      %1n <- prom(@1 env=%e {
          %n <- ld(n, env=%e)
          %1n <- force(%n, env=%e)
          return %1n
      })
      …
      %f <- fn(@2(k) env=%e {
        #1(%k) {
            %1inclos <- env({k <- %k}, parent=@foo%e)
            …
        }
      })
      …
```

### BB header and phi nodes

Phi nodes are defined at the top of the BB like so:

```
^someBB(
  %somePhi(%a:^pred, %b:^otherPred),
  %someOtherPhi(%c:^pred, \1:^otherPred)
):
  … # instructions
^someOtherBB: # No `(…)` if there are no phis
  … # instructions
```

### Instructions

- Non-producing statement: `fun(…)`
- Statement producing value: `%var <- fun(…)`
- Statement producing multiple values: `` %didDispatch, %dispatchResult <- `tryDispatch.[<-`(…) ``
- Jump: `jump ^bb`, `br %cond ^ifTrue ^ifFalse`, `return %value`, ...

As explained above, every statement is a "call", and there are 3 main types of calls: intrinsic/builtin (static) calls, exact compiled closure (semi-static) calls, and variable (dynamic) calls. This is reflected in the syntax:

- Intrinsic/builtin (static) calls
  - `%e <- env({…}, parent=?)` create an environment with the bindings in `…` and unknown parent, assign it to the SSA variable `%e` ("inclos" = implicit environment created for a closure body).
  - `%n <- ld(n, env=%e)` = load the symbol `n` in the environment `%e`, assigns it to the SSA variable `%n`.
  - `st(n, %n, env=%e)` = store the value in the SSA variable `%n` under the symbol `n` in the environment `%e`.
  - `` `*`(%i, %n, env=%e) `` = multiply the SSA variables `%i` and `%n`, also pass the environment `%e` since the multiplication needs it if it dispatches.
- Exact compiled closure (semi-static) calls:
  - `%foo <- @foo(%i, %n)` = call the function named `foo` with variables `%i` and `%n`, store the result in `%foo`.
  - - `%2 <- @3(%i, \[int]100L)` = call the function named `3` with variables `%i` and `\[int]100L`, store the result in `%2`.
- Dynamic calls:
  - `%12 <- %foo(%i, %n)` = call the function in the variable named `foo` with arguments `%i` and `%n` and no explicit names.
  - `%14 <- %range(start=%i, end=\100)` = call the function in the variable named `range` with argument `%i` named `start` and `\100` named `end`.
  - `%14 <- %something(start=%i, ...)` = call a function with dots arguments. The outer closure must also take `...` as one of its parameters (e.g. `fn @foo(...):`).

### Nodes

- Variables: `%var`.
- SEXP constants: `\<vec 1 2 3>` (the syntax of the SEXPs after ` \ ` is reused from how we parse/print SEXPs).
- Non-sexp constants: `\[int]5L` (unboxed integer).
  - `[…]` specifies the type of a constant. If not present, it defaults to SEXP because that's the most common type.
- Invalid nodes: `!unsetPhiInput`.
  - These can be assigned any type, and are stubs that cause CFG verification and lowering to fail.
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

### Misc

Unless otherwise specified:

- `[…]` = list of nodes (e.g. `[%1, %2, %3]`.)
- `{…}` = map of nodes, usually to symbols (e.g. `{n <- %n, m <- %n}`).
- `…` in the examples denotes a "hole" that can be filled with anything. `…` is used for this purpose instead of the more common `...`, because `...` actually refers to the dots SEXP.
