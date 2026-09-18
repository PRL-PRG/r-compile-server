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

A version whose body is `{ ... }` is a **stub**: a declaration without code. Builtins and intrinsics (`src/main/resources/org/prlprg/fir/builtins.fir` and `intrinsics.fir`) are declared this way and are implicitly in scope in every module.

A function may be preceded by user properties:
- `@strict`
- `@liteSpecial` - the function may be called with literal AST arguments, but a non-reflective version takes them evaluated, like a builtin

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

Environment operations (`mkenv`, `popenv`, `st`), casts, in-place subscript writes, and `[[` reads are impure. Reflective loads and stores (`r$x`), function lookups (`ldf`), dynamic calls, and forcing a maybe-typed value are reflective. A call has the effects of its signature, and a `force` has the effects of the promise's type.

If an effectful or unknown function is called, the calling version must have effects. If an effectful or unknown promise is forced, the forcing version must have effects. Any version containing reflective operations must have effects.

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

Every call to a known function carries a signature. For a static call, the function must have a version whose parameters are at least as permissive as the signature's and whose strictness, effects, and return type are at least as restrictive. A dispatch call additionally requires the function to be *dispatchable* (its baseline's parameter and return types are all SEXP kinds) and the signature to return an SEXP kind.

### Promise Creation

```fir
prom<t fx>{ body }    # A promise
prom-<t fx>{ body }   # A local promise
```

Example:

```fir
prom<v1(I) ->{ return <int 42>; }
```

`t` must be a value type of SEXP kind with shared ownership. A promise body is a CFG in the enclosing version's register namespace. Registers defined inside a promise are only visible inside it. A promise may only read registers defined outside it if it is **local** (`prom-`): a local promise is speculated not to escape the stack frame it's created in, and crashes at run time if it escapes and is forced afterwards.

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

- Create environment: `mkenv`. An environment must be created before any stores. `mkenv~` creates an environment that is assumed not to be observed by reflection. `mkenv-` is an *elided* environment: it isn't materialized (a deopt re-creates it), so it's free.
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
- `a ?- f` - assume `a` is a closure of the function `f` (with a global environment). Yields `a` as a `cls`.
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
  mkenv;
  st x = r;
  deopt 5 [r];
```

When a checkpoint is encountered, the assumptions at the beginning of the success block (its leading run of assumption statements) are checked. If all pass, control jumps to the success block. Otherwise, control jumps to the deopt block, which creates an environment (unless one exists) and stores the named variables the bytecode expects, then performs a deoptimization.

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
  - A shared register or named variable must be assigned a fresh or shared value
  - A borrowed register cannot be assigned (only parameters can be borrowed)
- **Call compatibility**: Static and dispatch call arguments must subtype the signature's parameter types (as above), with the following ownership rules:
  - An owned parameter must be given a fresh argument
  - A shared parameter must be given a fresh or shared argument
  - A borrowed parameter can be given any argument
- **Return type**: A version's return type must be a value type (not a promise or maybe-promise), and every returned value must be assignable to it.
- **Versions**: A version's effects must be a subset of its function's baseline's effects. If a version's parameters are strictly narrower than another's, its effects must not be wider.
- **Calls**: A static call's signature must select a version (see [Function Calls](#function-calls)). Dispatch calls, `clos`, `?- f`, and `ldf x ?- f` require dispatchable functions; a dispatch call's signature must return an SEXP kind. A `dyn` callee must be a `cls`.
- **Promises**: A promise's inner type must be a shared value type of SEXP kind; its body's return type and effects must match the declared ones.
- **Expression-specific rules**: `force` requires a definite promise; `r$x` requires a definite promise; `dup`, subscript reads and writes, and `consume` require definite vectors, and `consume` an owned one; subscript writes require an owned or fresh target, an `I` index, and an unboxed scalar value of the vector's kind; `v(t)[...]` elements must be unboxed `t` and unnamed (`v1(t)[...]` is rejected: use `box`); `if` conditions must be `B`; `raise` arguments must be `S`; casts and type assumptions must target SEXP kinds; `st` can't store a `consume`.
- **"Use" invariant** (provenance): A register must be written before it's read; `r` cannot be read or consumed in any instruction reachable from a `consume r` (including in the same expression), nor consumed after being captured by a promise.
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
- **Captures**: Only local promises (`prom-`) read registers defined outside them.

Full checks are described in the javadoc of, and implemented in, `org.prlprg.fir.check.CFGChecker`, `org.prlprg.fir.check.StrictnessChecker`, and `org.prlprg.fir.check.CaptureChecker`.

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
