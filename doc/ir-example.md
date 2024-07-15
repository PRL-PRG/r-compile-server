# Example

```r
foo <- function(n, m) {
  array <- replicate(100, n)
  for (i in 1:n) {
    array[i] <- i * m
  }
  array
}
```

Compiles to something like

```
fn @foo(n, m):
  #1(%n, %m):
      %inclos <- env({n <- %n, m <- %m}, parent=?)
      <- ld(\n, env=%inclos)
      %array <- replicate(\100, %n)
      
      goto ^forBody
    ^forBody:
      
      
    
  #2(n:$$int):
```

## General idea

Every instruction is a "call" consisting of a **function**, list of **inputs**, **effects**, and list of **outputs**:

- **Function**
  - Intrinsic (static): `ld`, `env`, etc. OR builtin (`setSessionTimeLimit`, `length`, `` `+` ``, etc.).
    - We hide whether it's a "made-up" builtin like `ld`, R builtin like `` `+` `` that we generate specialized code for, or non-specialized R builtin like `setSessionTimeLimit` (that we compile into a call to `do_setSessionTimeLimit`). In optimizations etc. we treat them the same, the difference only matters in lowering where we generate different code.
  - Closure ("semi-static"): `@foo` (calls the cached compiled closure whose name is `foo`. Or specifically, calls the version of the closure statically determined by a call context computed from the inputs).
  - Variable (dynamic): `%1` (calls the SSA variable assigned the name `1`).
    - Iff the variable is a compiled closure (subtype of `cclo[?]`), we generate a call that passes the arguments more efficiently and additionally passes a statically-computed context. Otherwise, we generate a call to `Rf_applyClosure` (that creates a `ListSXP`, passes no statically-computed context, ...).

- **Input**: a node (the argument), **type**, and **ownership**.
  - **Type**: `ISexp` for any-typed SEXP, `ScalarIntISexp` for SEXP guaranteed to be a scalar integer, `UnboxedInt` etc.
    - See if we can encode our full type system in Java's type system, maybe with compile-time code generation. Otherwise, we'll will need a "strong type" (e.g. `ISexp` or `UnboxedInt`) and "weak type" (e.g. `$int`, `any`, etc.), or make everything checked at runtime.
      - Benefits of encoding the full type system in Java is that it's checked at compile time, storing extra information for some types (like environment parent which may be known and used by scope resolution) is simply storing a field, and it makes the API clean.
      - The downside is that we'll probably need compile-time metaprogramming because it's *a lot* of boilerplate, and we may end up with a lot of Java classes which slows down the compiler or runtime or bloats the binary.
    - Casts: If a type is wrong, the compiler may insert a `cast` instruction to make it correct.
  - **Input ownership**: "consuming" (the default) or "non-consuming" (e.g. in `isType`).
    - During (or right before) lowering, the compiler implicitly copies arguments that are passed to consuming parameters, *unless* the argument is owned and the call is its last use.
      - Note that we insert these copy instructions during lowering (maybe even in the C code directly, so there's no `copy` IR instruction), but we insert casts above in the IR. The reason is that ownership is flow-sensitive while types aren't. e.g. we can use GVN to reuse `cast` outputs, but never ownership.
- **Output**: a node, type, and ownership.
  - **Output ownership**: "owned" (e.g. the result of `` `[<- ``), or "unowned".
    - So similar to input ownership, and isomorphic repr, but the default is flipped and slightly different meaning.

Compiled closures have 3 entrypoints.

1. GNU-R entrypoint.
   - Where it's called: from `Rf_applyClosure` (invoked the function's body in `R` which is something like `.Internal(callJit, <raw ...>)`).
   - What is does: dynamically computes a call context, reforms the arguments to be provided directly on the stack (C varargs with explicit "int length" argument before), and calls #2.
2. Dispatch entrypoint.
   - Where it's called: from compiled code, when we know it's a compiled closure but the exact closure is unknown.
   - What it does: determines the specific version from the call context, reforms the arguments to be correct (errors if there are too many arguments; unboxes `SEXP` arguments that should be passed as unboxed; adds `R_MissingArg`s or defaults if there are too few arguments; and replaces explicit `R_MissingArg`s with defaults), dispatches the selected version with the reformed arguments, and re-boxes the return value if necessary.
3. Version entrypoint.
   - Where it's called: from "semi-static" closure calls
   - What it does: runs a specific closure version, with arguments that are already on the stack in the correct order, and may already be unboxed (so it's signature in C may look exactly like a normal function, e.g. `int add(int a, int b)`).

### Syntax

### Prefixes (for parsing)

Closures are prefixed with `@` (e.g. `@foo`, `@1`), basic blocks are prefixed with `^` (e.g. `^bb`), variable nodes are prefixed with `%`, constants are prefixed with ` \ `, and special nodes are prefixed with `?`.

#### Closure header

```
fn @foo(n, m):
  #1(%n, %m):
      … # instructions and BBs
  #2(%n:int$$, %m:int$$):
      … # instructions and BBs
```

`#1`, `#2`, are versions. Each version has a call context as shown by the argument types. `#1` is the baseline, so the arguments are guaranteed to be untyped.

#### BB header and phi nodes

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

#### Instructions

- Non-producing statement: `fun(…)`
- Statement producing value: `%var <- fun(…)`
- Jump: `jump ^bb`, `br %cond ^ifTrue ^ifFalse`, `return %value`, ...

As explained above, every instruction is a "call", and there are 3 main types of calls: intrinsic/builtin (static) calls, exact compiled closure (semi-static) calls, and variable (dynamic) calls. This is reflected in the syntax:

- Intrinsic/builtin (static) calls
  - `%inclos = env({…}, parent=?)` create an environment with the bindings in `…` and unknown parent, assign it to the SSA variable `%inclos`.
  - `%n = ld(\n, env=%inclos)` = load the symbol `n` (`\n` to emphasize that it's a constant symbol) in the environment `%inclos`, assigns it to the SSA variable `%n`.
  - `st(\n, %n, env=%inclos)` = store the value in the SSA variable `%n` under the symbol `n` in the environment `%inclos`.
  - `` `*`(%i, %n, env=%inclos) `` = multiply the SSA variables `%i` and `%n`, also pass the environment `%inclos` since the multiplication needs it if it dispatches.
- Exact compiled closure (semi-static) calls:
  - `%foo <- @foo(%i, %n)` = call the function named `foo` with variables `%i` and `%n`, store the result in `%foo`.
  - - `%2 <- @3(%i, \[int]100)` = call the function named `3` with variables `%i` and `\[int]100`, store the result in `%2`.
- Dynamic calls:
  - `%12 <- %foo(%i, %n)` = call the function in the variable named `foo` with arguments `%i` and `%n` and no explicit names.
  - `%14 <- %range(start=%i, end=\100)` = call the function in the variable named `range` with argument `%i` named `start` and `\100` named `end`.
  - `%14 <- %something(start=%i, ...)` = call a function with dots arguments. The outer closure must also take `...` as one of its parameters (e.g. `fn @foo(...):`).

#### Nodes

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
- `?` = unknown environment

#### Names

Closures, basic blocks, and variable nodes have **names**, which share this syntax:

- An integer (e.g. `@1`, `%5`)
- An R identifier (e.g. `@foo`, `` %`hello world` ``)
- An integer followed by an R identifier (e.g. `@1foo`, `` %5`hello world` ``)

The third for is for disambiguation, e.g. in case we want to name a compiled closure `foo`, but we already have a compiled closure named `foo`, we'll call it `1foo` (or if that's already taken, `2foo` and so on) instead. Same for BBs and variables, except they are only disambiguated within the CFG (so `%foo` in one CFG may refer to a different node than `%foo` in another).

Note that this is automatically done by the API: if you try to create a closure/bb/variable named `foo` and one already exists, it will be named `1foo` (or `2foo` or ...) instead.

#### Types

- `int$$` = scalar integer, no attributes no NA
- `int$` = scalar integer, no attributes maybe NA
- `int(n/NA)` = vector integer of length `n`, no attributes no NA
- `int(n)` = vector integer of length `n`, no attributes
- `int(/NA)` = vector integer of unknown length, no attributes no NA
- `int` = vector integer of unknown length, no attributes maybe NA
- `int[class="foo"]` = vector integer object of class `foo`
- `int[class=?]` = vector integer object of unknown class
- `int[?]` = vector integer with unknown attributes
- `p(int)` = promise-wrapped vector integer