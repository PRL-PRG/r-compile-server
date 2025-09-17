# FIŘ (Functional IR) Syntax and Semantics Documentation

This document describes the syntax and rough static semantics of the FIŘ (Functional IR) intermediate representation used in the R compilation server. FIŘ is parsed and printed by `@ParseMethod`/`@PrintMethod` annotated methods in `org.prlprg.fir.ir` classes.

## Overview

FIŘ is a functional intermediate representation designed for analyzing and optimizing R code. It features:
- Static typing with ownership annotations
- Control flow graphs with phi nodes
- Promise-based lazy evaluation
- Multiple function versions for dispatch optimization

## Module Structure

A FIŘ module consists of one or more functions:

```fir
fun functionName(...) {
  signature { body }
  signature { body }  # Multiple versions allowed
}
```

### Function Signatures

Function signatures specify parameter and return types:

```fir
(param1:t, param2:t) -fx> t
```

Examples:
- `() --> I` - No parameters, no effects, returns integer
- `(reg r:I) -+> I` - One integer parameter, reflection, returns integer

Only registers can be parameters.

## Types

### Basic Types

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

## Variables

### Register Variables

Registers hold temporary values and are function-scoped:

```fir
reg r:t
```

### Named Variables

Named variables represent R environment bindings:

```fir
var x:t
```

### Naming

Typically, register names start with `r` and named variable names are `x`, `y`, `z`, etc. However this doesn't have to be the case.

## Expressions

### Constants

- Integer literals: `42`, `-1`
- String literals: `"hello"`
- Logical literals: `TRUE`, `FALSE`

### Variable References

- Register reads: `r`
- Named variable reads: `x`
- Explicit use: `use r` (the register can't be read or used in any instruction reachable from the `use`)

### Function Calls

```fir
f(arg1, arg2, ...)  # Dispatch call
f<t,t,... -fx> t>(arg1, arg2, ...)  # Dispatch call (alternate form)
f.n(arg1, arg2, ...)  # Static call
dyn x(arg1, arg2, ...)  # Dynamic call without named arguments
dyn x[name1, name2, ...](arg1, arg2, ...)  # Dynamic call with named arguments
```

### Promise Creation

```fir
prom<t fx>{ body }
```

Example:

```fir
prom<I ->{ return 42; }
```

### Closures

```fir
clos(f)
```

### Vector Operations

- Vector creation: `[elem1, elem2, ...]`
- Subscript load: `vector[index]`
- Subscript store: `vector[index] = value`

### Memory Operations

- Load from environment: `load(name, env)`
- Store to environment: `store(name, env, value)`
- Reflective operations: Similar but with runtime symbol resolution

### Type Operations

- Cast: `value as t`
- Force promise: `force promise`
- Maybe force: `force? value`
- Duplicate: `dup value`

## Statements

### Assignment

```fir
r = expression
```

### Function Body Structure

```fir
signature { local_declarations |
  statement1;
  statement2;
  ...
  return expression;
}
```

### Local Declarations

Variables and registers are declared in the function signature:

```fir
{ var x:t, reg r:t, ... | body }
```

## Control Flow

### Basic Blocks and Jumps

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
BB(phi1, phi2, ...):
  # phi variables receive values from goto statements
```

We use MLIR-style block arguments.

## Effects System

Effects track potential side effects of expressions:
- `-` - No effects (pure)
- `+` - Any effects (reflective)
- Effects are propagated through promise evaluation

## Static Semantics

### Type Checking Rules

1. **Variable Declaration**: All variables must be declared with explicit types
2. **Assignment Compatibility**: Assignment requires type compatibility considering ownership
3. **Function Dispatch**: Multiple function versions enable specialized dispatch based on argument types
4. **Promise Forcing**: Promises must be forced to access their values
5. **Ownership Transfer**: Ownership annotations control when values can be moved vs. shared

### Well-formedness Constraints

1. **Control Flow**: All paths must end with return or unreachable
2. **Variable Usage**: Variables must be assigned before use
3. **Phi Correctness**: Phi variables must receive values from all predecessors
4. **Type Consistency**: Operations must respect type constraints
5. **Effect Tracking**: Effects must be properly propagated through promises

### Common Patterns

#### Simple Function

```fir
fun main() {
  () --> I { |
    return 42;
  }
}
```

#### Register Usage

```fir
fun main() {
  () --> I { reg r:I |
    r = 42;
    return r;
  }
}
```

#### Promise Composition

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

#### Multiple Function Versions

```fir
fun add(...) {
  (reg x:I, reg y:I) --> I { reg r:I |
    r = add_integers(x, y)
    return r;
  }
  (reg x:R, reg y:R) --> R { reg r:R |
    r = add_reals(x, y)
    return r;
  }
}
```

## Error Conditions

Common static semantic errors that the type checker detects:

1. **Use Before Definition**: Using a variable before it's assigned
2. **Type Mismatch**: Assigning incompatible types
3. **Invalid Phi**: Blocks with phis that have < 2 predecessors, or are the CFG's entry
4. **Ownership Violation**: e.g. assigning an owned value to a shared variable, passing an owned value to a shared parameter, assigning a non-fresh value to an owned variable, or passing a non-fresh value to an owned parameter
5. **Effect Mismatch**: Version or promise is annotated with no effects, but calls a function or forces a promise that is annotated with effects

This documentation provides the foundation for understanding FIŘ syntax and creating valid examples for testing the type checker, control flow analysis, and other static analyses.
