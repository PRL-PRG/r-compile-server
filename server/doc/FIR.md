# FIŘ (Functional IR) Syntax and Semantics Documentation

This document describes the syntax and rough static semantics of the FIŘ (Functional IR) intermediate representation used in the R compilation server. FIŘ is defined in `org.prlprg.fir`: in particular, `org.prlprg.fir.ir` contains the data-structures, while other packages like e.g. `org.prlprg.fir.analyze`, `org.prlprg.fir.opt`, and `org.prlprg.fir.interpret` contain analyses, optimizations, and an interpreter respectively.

## Overview

FIŘ is a functional intermediate representation designed for analyzing and optimizing R code. It features:
- Static typing with ownership annotations
- Control flow graphs with phi nodes
- Promise-based lazy evaluation
- Multiple function versions for dispatch optimization

## Module Structure

A FIŘ module consists of one or more functions:

```fir
fun functionName(x*) {
  sig { body }
  sig { body }  # Multiple versions allowed
}
```

Each function contains one or more **versions** (`sig { body }`). When a function is "dispatched", the version whose parameter types best match the argument types is selected.

### Function Signatures (`sig`)

Function signatures specify parameter and return types:

```fir
(reg param1:t, reg param2:t) -fx> t
```

Examples:
- `() --> I` - No parameters, no effects, returns integer
- `(reg r:I) -+> I` - One integer parameter, reflection, returns integer

Only registers can be parameters.

## Types (`t`)

### Kinds

- Scalars
  - `I` - Integer
  - `L` - Logical (boolean)
  - `R` - Real (double)
  - `S` - String
- `v(t)` - Vector of type `t`
  - Examples: `v(I)` (integer vector), `v(R)` (real vector)
  - Currently `t` must be a scalar (e.g. `v(V)` is *disallowed*)
- `V` - Any value
- `p(t fx)` - Promise with inner type `t` and effects `fx`
  - `t` must be a value type (e.g. `V`, `I`, `v(L)`)
  - Examples: `p(I -)` (promise returning integer with no effects), `p(v(L) *)` (promise returning real vector with any effects)
- `*` - Any type (top type)

### Ownership Annotations

Vector types can have ownership suffixes:
- `v(t)` (no suffix) - Shared ownership (default)
- `v(t)o` - Owned
- `v(t)f` - Fresh
- `v(t)b` - Borrowed

### Maybeness

Any type can have maybeness.
- `t?` - Maybe-type `t`
- `t` - Concrete (non-maybe) type `t`

A variable of maybe type can hold a value assigned of a different type, but it cannot be *explicitly assigned* such a value. A variable of type `I?` can only be directly assigned a value of type `I` or `I?`. However, it can be assigned via reflection a value of any type.

## Effects (`fx`)

Effects track potential side effects of expressions. There are 2 kinds of effects:

- `-` - No effects (pure)
- `+` - Any effects (reflective)

If an effectful or unknown function is called, the calling version must have effects. If an effectful or unknown promise is forced, the forcing version must have effects. Any version containing reflective operations must have effects.

## Variables (`v`)

Variables are declared at the beginning of a version body.

```fir
() --> I { var x:I, reg r:I |
  ...
}
```

There are two kinds of variables: registers and named variables.

### Register Variables (`r`)

Registers hold temporary values:

```fir
reg r:t
```

Registers are only accessible within the version body and inner promises.

### Named Variables (`x`)

Named variables represent R environment bindings:

```fir
var x:t
```

All named variable types must be maybe types or `*`.

### Naming

Typically, register names start with `r` and named variable names are `x`, `y`, `z`, etc. However, this doesn't have to be the case.

## Expressions

### Constants (`c`)

- Integer literals: `42`, `-1`
- String literals: `"hello"`
- Logical literals: `TRUE`, `FALSE`

### Arguments (`a`)

- Constants
- Reads: `r`
- Register "use"s: `use r`. `r` can't be read or used in any instruction reachable from the `use`.

Arguments are the only sub-expressions. e.g. `v(I)[v(I)[1]]` isn't allowed, but `r = v(I)[1]; v(I)[r]` is.

### Function Calls

```fir
f(a1, a2, ...)  # Dispatch call
f<t,t,... -fx> t>(a1, a2, ...)  # Dispatch call (alternate form)
f.n(a1, a2, ...)  # Static call
dyn x(a1, a2, ...)  # Dynamic call without named arguments
dyn x[name1, name2, ...](a1, a2, ...)  # Dynamic call with named arguments
```

### Promise Creation

```fir
prom<t fx>{ body }
```

Example:

```fir
prom<I ->{ return 42; }
```

Promise bodies cannot declare variables; promises use variables from the outer version body.

### Closures

`f` must be a function (e.g. `functionName` from `fun functionName(x*) { sig { body } }`).

```fir
clos f
```

### Vector Operations

- Vector creation: `v(t)[elem1, elem2, ...]` (e.g. `v(I)[1, 2, 3]`)
- Subscript load: `vector[index]`
- Subscript store: `vector[index] = value`

### Environment Operations

- Create environment: `mkenv`. An environment must be created before any loads or stores.
- Load from environment: `ld x`
- Load function from environment: `ldf x` (R function lookup forces promises and ignores non-closure values)
- Store to environment: `st x = a`
- Reflective operations: `r$x`, `r$x = a` (`r` is a register holding a *promise*, `x` is the name of the variable that is reflectively stored or loaded in the promise's environment)

### Misc Operations

- Cast: `a as t`
- Force promise: `force a` (`a` must be a promise)
- Maybe force: `force? a` (`a` may be promise. If it's a value, this is a no-op)
- Duplicate: `dup value`

## Statements (`s`)

Each statement consists of an optional assignee (register) and expression.

```fir
e
r = e
```

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

MERGED_BB(phi):
  # phi is a phi variable
  return phi;
```

### Phi parameters

Phis merge values from different control flow paths:

```fir
BB(r1, r2, ...):
  # phi variables receive values from goto statements
```

We use MLIR-style block arguments.

### Checkpoints, assumptions, and deopts

```fir
  check SUCCESS() else DEOPT();
SUCCESS():
  # assumptions
  r1 = r ?: I;  # assume type
  r2 ?= 5  # assume constant
  r3 ?- f  # assume function
  # statements
  ...
  # jump
  return 3;
deopt label();
  mkenv;
  st x1 = r4;
  deopt 5 [r4]
```

When a checkpoint is encountered, all assumptions in the first branch are checked. If all assumptions pass, control jumps to the success block. Otherwise, control jumps to the deopt block, which optionally creates an environment and optionally stores named variables, then performs a deoptimization.

Assumptions can only exist at the beginning of success blocks. Deopt jumps can only exist in deopt blocks.

## Version Structure (recap)

```fir
(reg p1:t, reg p2:t, ...) -fx> t { reg r:t, var x:t, ... |
  s1;
  s2;
  ...
  goto BB(a1, a2, ...);
BB(r1, r2, ...):
  s3;
  ...
  return a;
}
```

## Static Semantics

### Type Checking Rules

- **Variable Declaration**: All variables must be declared with explicit types:
  - Parameters (registers) must be owned, shared, or borrowed
  - Local registers must be owned or shared
  - Named variable types must be shared. Additionally, the must be maybe types if not `*`
- **Assignment Compatibility**: Variables must be assigned expressions whose types subtype their explicit type, with the following ownership changes:
  - An owned register must be assigned a fresh value
  - A shared register or named variable must be assigned a fresh, owned, or shared value
  - A borrowed register cannot be assigned
- **Call compatability**: Dispatch and static call arguments must subtype parameter types, with the following ownership changes:
  - An owned parameter must be assigned a fresh argument
  - A shared parameter must be assigned a fresh or shared argument
  - A borrowed parameter can be assigned any argument
- **Return compatability**: Values returned in a version must subtype the version's return type, with the following ownership changes:
  - If the return type is fresh, return values must be fresh
  - If the return type is shared, return values must be fresh or shared
  - Return types cannot be borrowed or owned
- **"Use" invariant**: A register `r` cannot be read or used in any instruction reachable from a `use r` argument, including again in the expression containing the argument
- **Effects**: A non-effectful version or promise cannot contain an effectful expression:
  - A call to an effectful or unknown function
  - A force of an effectful or unknown promise
  - A reflective load or store

Full type-checks are implemented in `org.prlprg.fir.check.TypeAndEffectChecker` and `org.prlprg.fir.check.ProvenanceChecker`

### Well-formedness Constraints

- **Control Flow**: All paths must end with `return a` or `unreachable`
- **Variable Usage**: Variables must be assigned before use
- **Phi Correctness**: A jump target must have the same number of phi arguments as the targeted block's phi parameter, and each argument's type must be a subtype of the parameter's

Full checks are described in the javadoc of, and implemented, in `org.prlprg.fir.check.CFGChecker`

### Environment Constraints

Named variables cannot be loaded or stored unless an environment has been created via `mkenv`.

Full checks are described in the javadoc of, and implemented, in `org.prlprg.fir.check.EnvironmentChecker`

## Examples

### Simple Function

```fir
fun main() {
  () --> I { |
    return 42;
  }
}
```

### Register Usage

```fir
fun main() {
  () --> I { reg r:I |
    r = 42;
    return r;
  }
}
```

### Environment Creation and Variable Usage

```fir
fun main() {
  () --> I { var x:I?, reg r:I?, reg r1:I |
    mkenv;
    st x = 42;
    r = ld x;
    r1 = r as I;
    return r1;
  }
}
```

### Promise Composition

```fir
fun main() {
  () --> v(I)f { reg r1:p(I -), reg r2:p(I -), reg r3:I, reg r4:I, reg r:v(I)o |
    r1 = prom<I ->{ return 100; };
    r2 = prom<I ->{ return 200; };
    r3 = force r1;
    r4 = force r2;
    r = v(I)[r3, r4, 300];
    return use r;
  }
}
```

### Reflection

```fir
fun reflect(p) {
  Notice the arrow is `-+>` because the function contains reflection
  (reg p:p(I -)) -+> V { reg r:*, reg r1:V |
    r = p$x;  # reflective load
    r1 = force? r; # maybe-force
    p$y = r1;  # reflective store
    return r1;
  }
}
```

### Multiple Function Versions

```fir
fun add(x, y) {
  (reg x:I, reg y:I) --> I { reg r:I |
    r = addIntegers(x, y)
    return r;
  }
  (reg x:R, reg y:R) --> R { reg r:R |
    r = addReals(x, y)
    return r;
  }
}
```

More examples are in `src/test/resources/org/prlprg/fir`

---

This documentation provides the foundation for understanding FIŘ syntax and creating valid examples for testing the type checker, control flow analysis, and other static analyses.
