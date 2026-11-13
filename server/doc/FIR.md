# FIŘ (Functional IR) Syntax and Semantics Documentation

This document describes the syntax and rough static semantics of the FIŘ (Functional IR) intermediate representation used in the R compilation server. FIŘ is defined in `org.prlprg.fir`: in particular, `org.prlprg.fir.ir` contains the data-structures, `org.prlprg.fir.parseprint` the textual parser and printer, while other packages like e.g. `org.prlprg.fir.analyze`, `org.prlprg.fir.opt`, `org.prlprg.fir.check`, and `org.prlprg.fir.interpret` contain analyses, optimizations, checkers, and an interpreter respectively.

The complete textual grammar is in [grammar.typ](grammar.typ) (build it with `typst compile grammar.typ`). This document explains the constructs and the rules the checkers enforce.

## Overview

FIŘ is a functional intermediate representation designed for analyzing and optimizing R code. It features:
- Static typing with ownership annotations
- SSA registers, typed at their (single) definition site
- Control flow graphs with MLIR-style block parameters (phis)
- Promise-based lazy evaluation
- Multiple function versions for dispatch optimization
- Speculation via assumptions and checkpoints, with deoptimization to GNU-R bytecode

## Module Structure

A FIŘ module consists of one or more functions:

```fir
fun functionName(x, y) {
  (x:*, y:*) -+> V { body }  # The baseline
  (x:I, y:I) --> I { body }  # A specialized version
}
```

Each function has a name and parameter names (R names) and one or more **versions**. The first version is the function's **baseline**; the rest are specializations. Every version has the same number of parameters as the function has parameter names. When a function is "dispatched", the version whose parameter types best match the argument types is selected.

A parameter may carry the default expression of the GNU-R formal it came from, as an SEXP constant: `fun addNA(x, ifany = <lgl FALSE>)`. FIŘ code doesn't use it (the body computes the default itself, `missing(x)` tests the parameter), but the closures of the function (`clos`) get it as their formals, so `formals()`, `match.arg` and printing agree with GNU-R. Fir2C only reads which parameters have one: the entry store of such a parameter's default marks its binding as GNU-R's `applyClosure` does, so R code's `missing(x)` is TRUE until `x` is assigned.

A version whose body is `{ ... }` is a **stub**: a declaration without code. Builtins and intrinsics (`src/main/resources/org/prlprg/fir/builtins.fir` and `intrinsics.fir`) are declared this way and are implicitly in scope in every module.

A version may also be *unevaluated*: its body is computed when it's first accessed (see [lazy-versions](lazy-versions.md)). Such a version isn't printed at all, unless it's the baseline, which prints as `{ <unevaluated> }` and doesn't parse.

A function may be preceded by user properties:
- `@strict`
- `@liteSpecial` - the function may be called with literal AST arguments, but a non-reflective version takes them evaluated, like a builtin. In a call of the baseline, a constant symbol or call is an expression to evaluate, and a register is a value (FIŘ→C passes a symbol or call value in an evaluated promise). `bc2fir` passes a symbol or call *value* constant quoted.
- `@readsContext` - the function (a builtin) reads the GNU-R closure context of its caller, e.g. `UseMethod`, `Recall`, `sys.function`, `match.arg`. The compiled code calls it through its base binding (`Fir_call_base`), never its `.Internal` directly
- `@needsContext` - a call of the function must run inside a GNU-R closure context for the function's own frame. `bc2fir` sets it on a closure whose bytecode names a `@readsContext` function, also inside the AST arguments of a special call (`substitute(a, parent.frame())`). FIŘ→C calls such a function through `Rf_applyClosure` (from every call shape: `dyn`, dispatch, and static), so the optimizer doesn't retarget its calls, and a static call of a version that a call from R can't select (an unboxed or owned parameter or return) is a compile error. Other calls run without a context. The vendored R's `sys.frame`, `parent.frame` and the like still count the frames of such calls (`Rsh_Frames`), and raise an error where the activation that they name has no context
- `@readsPromise` - the function (a builtin) reads the promise bound to an argument symbol in its caller's frame, not only its value: its expression (`substitute`) or whether it's missing (`missing`)
- `@needsPromises` - the function's parameters must stay the caller's GNU-R promises. `bc2fir` sets it on a closure whose bytecode names a `@readsPromise` function, with the same scan as `@needsContext`. Its from-R entry keeps a promise that R forced (`UseMethod` forces the dispatch argument of the method it calls). `StrictifyPromise` doesn't strictify calls of it (the version it makes wraps each value in a promise without the caller's expression). A function that only passes a parameter on to another function doesn't get it, because that function gets a normal promise
- `@signals` - every version but the baseline is `@signals`. A version (a stub) may also be preceded by `@signals`: it can warn or raise an error, which its effects don't say (e.g. integer overflow, `NaNs produced`, or an `if` condition that is `NA`). The optimizer doesn't remove such a call when its result is unused, doesn't move it into a promise, and inlines a promise whose body can warn or raise an error only into a callee that forces it on every path to a `return` or an error, before anything else that can warn, raise an error, or write output (`InferEffects#maySignal`, `StrictifyPromise`)

### Function Signatures (`sig`)

A version's header specifies its parameters, effects, and return type:

```fir
(param1:t, param2:t@!) -fx> t
```

Examples:
- `() --> I` - No parameters, no effects, returns an unboxed integer
- `(r:v1(I)) -+> V` - One boxed-integer parameter, reflection, returns any R value
- `(p:p(V +)@!) -~> V` - One strict promise parameter, impure but non-reflective

Only registers can be parameters. `@!` marks a parameter as **strict**: it must have a promise type, and the version must force it on every path from entry to each `return` or reflective operation.

The signature in a call site is written the same way without the register names, e.g. `` `+`< I,I --> I >(a, b) `` or `f< *@!,*@! -+> V >(a, b)`.

## Types (`t`)

### Kinds

- Unboxed scalars (not SEXPs):
  - `I` - Integer
  - `L` - Logical (may be `NA`)
  - `R` - Real (double)
  - `S` - String
  - `B` - Boolean (the type of `if` conditions)
- `v(t)` - Vector of primitive kind `t` (`t` must be `I`, `L`, `R`, or `S`)
  - Examples: `v(I)` (integer vector), `v(R)` (real vector)
- `v1(t)` - Vector of primitive kind `t` and length one (a boxed scalar, e.g. the type of `<int 1>`). `v1(t)` subtypes `v(t)`.
- `V` - Any R value (SEXP)
- `cls` - Closure
- `dots` - A `...` list
- `miss` - The missing argument (`<missing>`); `miss` subtypes `dots`

### Promises

- `p(t fx)` - A promise that, when forced, has effects `fx` and yields a `t`
  - `t` must be a value type with an SEXP kind and shared ownership (e.g. `V`, `v1(I)`, `v(L)`)
  - Examples: `p(v1(I) -)` (promise returning a boxed integer with no effects), `p(V +)` (promise returning anything with any effects)
- `p?(t fx)` - Either such a promise or a `t` value (a "maybe-promise")
- `*` - The top type: any SEXP, promise or not. It is sugar for `p?(V +)?`

### Ownership Annotations

Vector types (and only vector types) have an ownership suffix:
- `v(t)` (no suffix) or `v(t)s` - Shared (default)
- `v(t)o` - Owned
- `v(t)b` - Borrowed
- `v(t)f` - Fresh

Fresh values come from vector creation, `dup`, `consume`, and calls returning fresh vectors; they can be assigned to owned or shared variables. Only owned (or fresh) vectors can be mutated in place (`v[i] = x`) or `consume`d.

### Maybeness

Any type can have maybeness.
- `t?` - Maybe-type `t`
- `t` - Concrete (definite) type `t`

A variable of maybe type can hold a value assigned of a different type, but it cannot be *explicitly assigned* such a value. A register of type `I?` can only be directly assigned a value of type `I` or `I?`. However, a named variable can be assigned via reflection a value of any type, which is why named variables must have maybe types.

## Effects (`fx`)

Effects track potential side effects of expressions. There are 3 kinds of effects:

- `-` - No effects (pure)
- `~` - Maybe effects, no reflection (impure)
- `+` - Any effects (reflective)

Environment operations (`mkenv`, `popenv`, `st`), casts, in-place subscript writes, and `[[` reads are impure. Reflective loads and stores (`r$x`), function lookups (`ldf`), dynamic calls, and forcing a maybe-typed value are reflective. A call has the effects of its signature, and a `force` has the effects of the promise's type. A load (`ld x`, `ldf-glob x`) has no effects, but it raises an error if `x` is unbound, so the optimizer keeps an unused one (`InferEffects#maySignal`), unless `OriginAnalysis` knows the value of `x` there.

If an effectful or unknown function is called, the calling version must have effects. If an effectful or unknown promise is forced, the forcing version must have effects. Any version containing reflective operations must have effects.

### Visibility

GNU-R's flag `R_Visible` tells if a closure's result is visible (`withVisible`, the REPL). Only a closure's `return` reads it. A force leaves the last write of the promise body.
- `bc2fir` writes it with the intrinsics `setVisible` and `setInvisible` where GNU-R's bytecode writes it last before a `return`: after the instruction that makes the value, before the force of a variable read, and before a dynamic call (which can become a builtin with inline code). A call, a builtin call through `Fir_call_builtin`, and a `force` write it at run time.
- A promise's forcer sets the flag on before the force. So a promise body gets a write only if a statement before its result can set the flag off (`InferEffects#maySetInvisible`). For example, a constant promise, a symbol promise, and an arithmetic promise of values get no write.
- Rule for the passes: keep each write that no later write or call of a module function (`InferEffects#overwritesVisibility`) in the same block replaces, and keep the order of the writes, the calls, and the forces. A module function call replaces the flag, because the flag at each `return` of a module function doesn't depend on its value at the call. `Cleanup` removes the other writes. `StrictifyPromise` doesn't move a promise that can set the flag off before the callee's writes.
- The intrinsics are declared without effects: no pass reorders or removes a statement without an assignee except `Cleanup`, and `Cleanup` keeps the writes that the rule keeps. Deoptimization doesn't read the flag (in compiled code, a deoptimization is an error).

Known difference: a call of an S3 method through `[` or `[[` (e.g. a `` `[.cls` `` that ends in an assignment) returns visibly. GNU-R's bytecode returns the method's flag, because `STARTSUBSET_N` jumps to its end without a write, but GNU-R's AST interpreter returns visibly. The compiler follows the AST interpreter, and its base already did.

## Variables (`v`)

There are two kinds of variables: registers and named variables. Neither is declared up front: registers are declared with their type where they are defined, and named variables are not declared in the textual form at all.

### Register Variables (`r`)

Registers are SSA values: each is defined exactly once, at one of three sites, and its type is written there:

```fir
(r:t) -fx> t { ... }       # a version parameter
BB(r: t):                  # a block parameter (phi)
  r: t = e;                # a statement assignee
```

Registers are only accessible within the version body and inner promises; they can't be read across versions. A register's definition must dominate all of its uses.

A register name must be a valid identifier: must start with a letter or `_`, be followed by letters, digits, or `_`, and cannot equal `_`. By convention a register name doesn't start with an uppercase letter, so registers are visibly distinct from block labels.

A register or function whose name is a statement keyword (e.g. `v`, `force`, `st`, `goto`) is backquoted where it begins an expression, e.g. `` `v` ?: V `` or `` `v`[i] ``. A backquoted name there is never read as a keyword.

### Named Variables (`x`)

Named variables represent R environment bindings, accessed with `ld x` and `st x = a`. Each named variable has a declared type in the version (`Abstraction#namedVariableTypes`), which defaults to `*`. All named variable types must be shared and maybe (`t?` or `*`).

A variable name must be a valid identifier *or* any non-empty string enclosed in backticks (`` ` ``), where backticks and backslashes within the string are escaped (other escape codes are supported but not necessary). Function names are written the same way (e.g. `` `+` ``).

### Naming

Typically, register names start with `r` or resemble the R variable they came from, and named variable names are the R variable names. However, this doesn't have to be the case.

## Expressions

### Constants (`c`)

Unboxed constants:
- Integer literals: `42`, `-1` (type `I`)
- Real literals: `1.5`, `1e3` (type `R`; a number is real iff it has a decimal point or exponent)
- String literals: `"hello"` (type `S`)
- Boolean literals: `TRUE`, `FALSE` (type `B`)
- Logical literals: `TRUE_LGL`, `FALSE_LGL`, `NA_LGL` (type `L`)
- `NA_INT`, `NA_REAL`, `NA_STR`

Boxed constants are written in the SEXP syntax, delimited by `<` and `>`: `<int 42>` (type `v1(I)`), `<real 1.5>`, `<sym x>`, `<missing>`, `<nil>`, ...

### Arguments (`a`)

- Constants
- Reads: `r`
- Register consumes: `consume r`. `r` must be an owned vector; the argument has fresh ownership. `r` can't be read or used in any instruction reachable from the `consume`.

Arguments are the only sub-expressions. e.g. `v(I)[v(I)[1]]` isn't allowed, but `r: v(I)o = v(I)[1]; r1: I = r[0]` is.

### Function Calls

```fir
f< t,t,... -fx> t >(a1, a2, ...)     # Static call: the version is chosen at compile time
f%< t,t,... -fx> t >(a1, a2, ...)    # Dispatch call: the version is chosen at run time
f@r< t,t,... -fx> t >(a1, a2, ...)   # Either form may pass the closure `r` whose environment the callee uses
dyn r(a1, a2, ...)                   # Dynamic call of a closure only known at run time
dyn r[name1, , name3](a1, a2, a3)    # Dynamic call with (some) named arguments
```

A call can end with its **source call**: `log%< *@!,*@! -+> V >(x, <missing>) in <lang log(x)>`. This is the R call that `bc2fir` compiled the statement from (any statement can have one, but `bc2fir` sets it only on calls that are not intrinsics). The type checker, the optimizer, and the interpreter ignore it, and optimizations that replace a statement keep it. Fir2C passes it as the `call` argument of `Fir_call_builtin`, `Fir_call_base`, and `Fir_call_dynamic`, so GNU-R errors, `conditionCall`, `sys.call()`, `match.call()`, and group dispatch see the source call and not a call built from the matched arguments. A static builtin call also passes the tags of the source call's arguments (GNU-R doesn't tag `x[i]`'s subscript, which an S3 method sees). Without a source call, the runtime builds the call from the arguments.

A **setter call** is the shape `bc2fir` gives `x[i] <- v`: `l = ld x`, then a call whose first argument is `l` (or an assumption, cast, or force of it) and whose source call's first argument is `` `*tmp*` ``, then `st x = r` of its result (after a checkpoint or goto at most). Fir2C runs it in GNU-R's assignment protocol (`Fir_Setter` in `client/rsh/src/fir2c/runtime.h`), as bytecode's `STARTASSIGN`/`SETTER_CALL`/`ENDASSIGN` do: it passes `x`'s binding without counting it, and counts the registers that outlive the call, so the callee modifies the vector in place when nothing else references it. A static call of a borrowing `[<-`/`[[<-` version calls its owning twin then. If the optimizer keeps `x` in registers (no `ld x`/`st x`), the first argument is a register, and Fir2C copies its value first if anything counts a reference to it. Fir2C matches the shape only in a version's body CFG, not in a promise's. Likewise, `d = dup l'` followed by `st x = d` in the same block, with no R code or read of the old value between, copies only if GNU-R's `STARTASSIGN` would (`Fir_assign_dup`; `Fir_value_dup` if `x` is in registers). This covers a setter that the optimizer turned into a `dup` and a vector write.

Every call to a known function carries a signature. For a static call, the function must have a version whose parameters are at least as permissive as the signature's and whose strictness, effects, and return type are at least as restrictive. A dispatch call additionally requires the function to be *dispatchable* (its baseline's parameter and return types are all SEXP kinds) and the signature to return an SEXP kind.

### Promise Creation

```fir
prom<t fx>{ body }            # A promise
prom-<t fx>{ body }           # A local promise
prom<t fx>[<sexp>]{ body }    # A promise with a source expression
prom-<t fx>[<sexp>]{ body }   # A local promise with a source expression
```

Example:

```fir
prom<v1(I) ->{ return <int 42>; }
```

`t` must be a value type of SEXP kind with shared ownership. A promise body is a CFG in the enclosing version's register namespace. Registers defined inside a promise are only visible inside it. A promise may read registers defined outside it (its captures): the promise keeps their values, so it can be forced after its frame is gone. A **local** promise (`prom-`) is speculated not to escape the stack frame it's created in, and raises an error at run time if it escapes and is forced afterwards.

The optional constant in brackets is the R source expression of the promise (for example `[<lang f(x)>]`). `bc2fir` sets it from the promise bytecode, and the optimizations keep it. GNU-R code that reads a promise's expression (`substitute`, `missing`, `match.call`, `deparse`) sees it. Such a read of a promise without an expression raises the R error "the source expression of this promise is not available". One exception: a promise without an expression whose body only returns a register defined outside it (the wrapper that `StrictifyPromise` makes) is created already evaluated, with the value as its expression, like the argument promises of `do.call`.

### Closures

`f` must be a function (e.g. `functionName` from `fun functionName(x) { ... }`), and must be dispatchable.

```fir
clos f          # A closure of `f` over the current environment
clos-static f   # A closure of `f` over the global environment
```

### Vector Operations

- Vector creation: `v(t)[elem1, elem2, ...]` (e.g. `v(I)[1, 2, 3]`). Elements are unboxed scalars of kind `t` and can't be named. The result is fresh.
- Dots creation: `dots[a, name = a, ...]`
- Subscript load: `vector[index]` reads an out-of-range index as `NA`, so it can't fail and is pure;
  `vector[[index]]` fails instead, so it's impure. That's the difference between R's `[` and `[[`.
- Subscript store: `vector[index] = value` (mutates `vector`, which must be owned or fresh; `value` must be an unboxed scalar of the vector's kind). It
  fails out of range, where R's `x[i] <- v` grows the vector, so it's impure.

Subscripts are 0-based, unlike R's, which are 1-based, and must be unboxed integers (`I`).

### Environment Operations

- Create environment: `mkenv`. An environment must be created before any stores. `mkenv~` creates an environment that is assumed not to be observed by reflection. `mkenv-` is an *elided* environment: it isn't materialized, so it's free. Its deopt branches still store into it, so the backend materializes it at the entry of each deopt branch.
- Pop environment: `popenv` destroys the innermost environment created by `mkenv` (e.g. after inlining a callee that has one).
- Load from environment: `ld x`. `ld-super x` skips the innermost environment (R's `<<-` lookup).
- Load function from environment: `ldf x` (R function lookup forces promises and ignores non-closure values, hence it's reflective). `ldf-glob x` and `ldf-base x` start the lookup in the global and base environment instead.
- Store to environment: `st x = a`, `st-super x = a`. The stored argument can't be a `consume`.
- Reflective operations: `r$x`, `r$x = a` (`r` is a register holding a *promise*, `x` is the name of the variable that is reflectively stored or loaded in the promise's environment)

### Misc Operations

- Cast: `a as t` (`t` must be an SEXP kind)
- Force promise: `force a` (`a` must be a definite promise)
- Maybe force: `force? a` (`a` may be a promise. If it's a value, this is a no-op)
- Duplicate: `dup a` (`a` must be a vector; the result is fresh). `dup consume r` is a move rather than a copy: `consume` guarantees nothing
  reads `r` again, so the duplicate can be `r` itself.
- No-op: `noop` (left behind by the optimizer to preserve instruction indices; removed at the end)

### Assumptions

Assumptions are no-ops when evaluated, but are checked when a checkpoint (`check`) is reached (see below):

- `a ?: t` - assume `a` has type `t` (an SEXP kind). Yields `a` at type `t`.
- `a ?= c` - assume `a` equals the constant `c`
- `a ?- f` - assume `a` is a closure of the function `f`. Yields `a` as a `cls`.
- `ld x ?= c` - assume that loading `x` yields `c`
- `ldf x ?- f` - assume that looking up `x` as a function yields `f` without forcing promises. Yields the closure.

An assumption's argument type must not be disjoint from the assumed type (otherwise it can never succeed).

## Statements (`s`)

Each statement consists of an optional assignee (a register, with its type) and an expression:

```fir
e
r: t = e
```

Expressions that produce no value (`noop`, `mkenv`, `popenv`, `st`, subscript and reflective stores, `a ?= c`, `ld x ?= c`) can't be assigned. A bare argument isn't an expression: `r: I = 42` is invalid, since there's nothing to compute.

## Control Flow

### Basic Blocks (`bb`) and Jumps (`j`)

```fir
  if condition then TRUE_BB() else FALSE_BB();
TRUE_BB():
  # statements
  goto MERGED_BB(value);
FALSE_BB():
  # statements
  goto MERGED_BB(value);
MERGED_BB(phi: t):
  # phi is a block parameter
  return phi;
```

The entry block has no header: the version body starts with its instructions. Every block ends with exactly one jump:

- `goto BB(a, ...)`
- `if a then BB(a, ...) else BB(a, ...)` - `a` must be a `B`
- `check BB() else BB(a, ...)` - checkpoint (see below)
- `deopt pc [a, ...]` - deoptimize to GNU-R bytecode position `pc`, restoring the given value stack (the arguments must be SEXPs)
- `return a`
- `raise a` - throw `a` (an `S`) as an R error
- `unreachable`

### Block parameters

Block parameters (phis) merge values from different control flow paths:

```fir
BB(r1: t1, r2: t2, ...):
  # block parameters receive values from the jumps targeting the block
```

We use MLIR-style block arguments: a jump target `BB(a1, a2, ...)` supplies one argument per parameter.

### Checkpoints, assumptions, and deopts

```fir
  r: V = blackBox< B --> V >(TRUE);
  check SUCCESS() else DEOPT();
SUCCESS():
  # assumptions
  r1: v1(I) = r ?: v1(I);  # assume type
  r1 ?= <int 5>;           # assume constant
  ldf f ?- f;              # assume function lookup
  # statements
  ...
  # jump
  return r1;
DEOPT():
  st x = r;
  deopt 5 [r];
```

When a checkpoint is encountered, the assumptions at the beginning of the success block (its leading run of assumption statements) are checked. If all pass, control jumps to the success block. Otherwise, control jumps to the deopt block, which stores the named variables the bytecode expects into the current environment, then performs a deoptimization. If that environment is elided, the backend materializes it first (`Fir_materialize_env` in C; the interpreter always creates a real environment). An assumption anywhere else is never checked, so FIŘ→C refuses to compile it: every predecessor of its block must be a checkpoint whose success block it is, and only assumptions may precede it.

The success target of a `check` can't have arguments.

## Version Structure (recap)

```fir
(p1:t, p2:t, ...) -fx> t {
  s1;
  s2;
  ...
  goto BB(a1, a2, ...);
BB(r1: t, r2: t, ...):
  s3;
  ...
  return a;
}
```

## Static Semantics

### Type Checking Rules

- **Well-formed types**: ownership annotations only appear on vector types; `*` is always maybe.
- **Register types**: A register's type must be well-formed and can't be fresh (a fresh value must be assigned to an owned or shared register).
- **Named variable types**: Must be shared and maybe (`t?` or `*`).
- **Assignment Compatibility**: Registers, named variables (via `st`), and return values must be assigned values whose kind and promisity subtype their declared type's, whose maybeness is at most as maybe, and with the following ownership rules:
  - An owned register must be assigned a fresh value
  - A shared register, named variable, or return type can be assigned any value except a borrowed one; an owned value is then shared (see **Sharing** below)
  - A borrowed register cannot be assigned (only parameters can be borrowed)
- **Call compatibility**: Static and dispatch call arguments must subtype the signature's parameter types (as above), with the following ownership rules:
  - An owned parameter must be given a fresh argument
  - A shared parameter can be given any argument except a borrowed one; an owned argument is then shared
  - A borrowed parameter can be given any argument
- **Return type**: A version's return type must be a value type (not a promise or maybe-promise), and every returned value must be assignable to it.
- **Versions**: A version's effects must be a subset of its function's baseline's effects. If a version's parameters are strictly narrower than another's, its effects must not be wider.
- **Calls**: A static call's signature must select a version (see [Function Calls](#function-calls)). Dispatch calls, `clos`, `?- f`, and `ldf x ?- f` require dispatchable functions; a dispatch call's signature must return an SEXP kind. A `dyn` callee must be a `cls`.
- **Promises**: A promise's inner type must be a shared value type of SEXP kind; its body's return type and effects must match the declared ones.
- **Expression-specific rules**: `force` requires a definite promise; `r$x` requires a definite promise; `dup`, subscript reads and writes, and `consume` require definite vectors, and `consume` an owned one; subscript writes require an owned or fresh target, an `I` index, and an unboxed scalar value of the vector's kind; `v(t)[...]` elements must be unboxed `t` and unnamed (`v1(t)[...]` is rejected: use `box`); `if` conditions must be `B`; `raise` arguments must be `S`; casts and type assumptions must target SEXP kinds; `st` can't store a `consume`.
- **"Use" invariant** (provenance): A register must be written before it's read; `r` cannot be read or consumed in any instruction reachable from a `consume r` (including in the same expression), nor consumed after being captured by a promise.
- **Sharing** (provenance): A read of an owned register `r` *shares* it unless it borrows (the target of a subscript read or write, the argument of `dup`, or a static call argument for a borrowed parameter) or moves it into an owned phi. A sharing use (e.g. a `dots` element, a `dyn` argument, a cast, or an argument of a shared phi) keeps a reference to the vector, so no instruction reachable from it (until `r` is assigned again) can write `r` in place, `consume` it, or move it into an owned phi. A borrowed register can't be shared at all, except as a `deopt` argument: the caller can write the vector in place after the call.
- **Phi arguments**: An owned phi must be given an owned register (which moves into it) or a fresh value.
- **Effects**: A non-effectful version or promise cannot contain an effectful expression:
  - A call to an effectful or unknown function
  - A force of an effectful or unknown promise
  - A reflective load or store
  - An environment operation, cast, or in-place write (these are impure but not reflective)

Full type-checks are implemented in `org.prlprg.fir.check.TypeAndEffectChecker` and `org.prlprg.fir.check.ProvenanceChecker`.

### Well-formedness Constraints

- **Control Flow**: Every block ends with a jump; all paths end with `return`, `raise`, `deopt`, or `unreachable`. In strict checking, all blocks must be reachable from the entry.
- **Registers**: Each register is defined exactly once, in the innermost scope that uses it (a version or promise body). Parameters are never assigned. A definition must dominate all uses; a use inside a promise counts as occurring at the outermost promise containing it that lives in the definition's CFG.
- **Phi Correctness**: A jump target must have the same number of arguments as the targeted block has parameters, and each argument's type must be a subtype of the parameter's. The entry block has no parameters, and in strict checking neither does a block with a single predecessor.
- **Strictness**: Every `@!` parameter is forced on all paths from entry to every `return` or reflective operation.

Full checks are described in the javadoc of, and implemented in, `org.prlprg.fir.check.CFGChecker` and `org.prlprg.fir.check.StrictnessChecker`.

### Environment Constraints

- The number of environments is the same on every path into a block, and never negative.
- Named variables cannot be stored (`st`, `st-super`) unless an environment has been created via `mkenv`.
- A version returns with no environments (`popenv` before `return`); a promise may return with the enclosing environment.
- A `deopt` needs at least one environment.

Full checks are described in the javadoc of, and implemented in, `org.prlprg.fir.check.EnvironmentChecker`.

## Examples

### Simple Function

```fir
fun main() {
  () --> I {
    return 42;
  }
}
```

### Register Usage

```fir
fun main() {
  () --> I {
    r: v(I)o = v(I)[1, 2, 3];
    r1: I = r[1];
    return r1;
  }
}
```

### Environment Creation and Variable Usage

```fir
fun main() {
  () -~> v1(I) {
    mkenv;
    st x = <int 42>;
    r: * = ld x;
    r1: v1(I) = r as v1(I);
    popenv;
    return r1;
  }
}
```

### Promise Composition

```fir
fun main() {
  () --> v1(I) {
    r1: p(v1(I) -) = prom<v1(I) ->{
      return <int 100>;
    };
    r2: p(v1(I) -) = prom<v1(I) ->{
      return <int 200>;
    };
    r3: v1(I) = force r1;
    r4: v1(I) = force r2;
    r: v1(I) = `+`< v1(I),v1(I) --> v1(I) >(r3, r4);
    return r;
  }
}
```

### Ownership

```fir
fun main() {
  () -~> v(I)f {
    r1: v(I)o = v(I)[1, 2, 3];
    r2: v(I)o = v(I)[4, 5, 6];
    r3: v(I)o = f< v(I)o,v(I)b -~> v(I)f >(consume r1, r2);
    return consume r3;
  }
}

fun f(r1, r2) {
  (r1:v(I)o, r2:v(I)b) -~> v(I)f {
    ry: v(I)o = dup r2;
    r1[0] = 1;
    ry[2] = 3;
    return consume ry;
  }
}
```

### Reflection

```fir
fun reflect(p) {
  # Notice the arrow is `-+>` because the function contains reflection
  (p:p(V +)) -+> V {
    r: * = p$x;         # reflective load
    r1: V = force? r;   # maybe-force
    p$y = r1;           # reflective store
    return r1;
  }
}
```

### Multiple Function Versions

```fir
fun add(x, y) {
  (x:*, y:*) -+> V {
    r: V = `+`%< *@!,*@! -+> V >(x, y);
    return r;
  }
  (x:I, y:I) --> I {
    r: I = `+`< I,I --> I >(x, y);
    return r;
  }
}
```

### Control Flow and Speculation

```fir
fun main() {
  () -+> V {
    r: B = blackBox< B --> B >(TRUE);
    check L1() else L2();
  L1():
    r ?= TRUE;
    return <int 0>;
  L2():
    mkenv;
    deopt 5 [];
  }
}

# Returns the argument as is, but marks the call as an optimization barrier
fun blackBox(x) {
  (x:B) --> B { ... }
}
```

More examples are in `src/test/resources/org/prlprg/examples/fir`, and compiled R functions are in `src/test/snapshots/R/fir`.

---

This documentation provides the foundation for understanding FIŘ syntax and creating valid examples for testing the type checker, control flow analysis, and other static analyses.
