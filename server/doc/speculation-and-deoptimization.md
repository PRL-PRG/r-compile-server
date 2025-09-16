## Speculation and deoptimization

**Terminology:** `…` for elided text, `...` for literal ellipsis.

```bnf
e   ::= …
      # assumptions
      | a ?: t   # assume type (replaces cast)
      | a ?- f   # assume function
      | a ?= c   # assume constant
      # explicit closure env creation
      | mkenv    # make closure environment
      | popenv   # remove closure environment (for inlining)
j   ::= …
      | check t else t  # checkpoint
      | deopt pc [a+]   # deopt
```

- **Checkpoint** - `check ll(a*) else l2()`
  - "Checks" (runs) all assumptions in `l1`
  - Jumps to `l1` if all assumptions pass, otherwise `l2`
- **Assumptions**
  - No-ops when evaluated, but are checked in advance when a checkpoint is reached
  - **Type check** - `a ?: t`: checks that `a` is an instance of `t` (replaces cast)
  - **Function check** - `a ?- f`: checks that `a` is a closure whose body is `f` and environment is global, namespace, or base
  - **Constant check** - `a ?= c`: checks that `a` equals `c`
- **Deopt** - `deopt pc [a+]`
  - `pc` is the GNU-R bytecode position to deoptimize to
  - `[a+]` is the stack to restore when deoptimizing
- **Closure environment** - `mkenv` and `popenv`
  - `mkenv` creates the closure's environment (`rho`)
    - Every closure compiled from GNU-R bytecode starts with `mkenv`, because every GNU-R call implicitly creates an environment, but we may delay or elide it if we remove stores and disprove reflection
  - `popenv` destroys the last environment created by `mkenv` and sets `rho` to its parent
    - Created when inlining a closure that has `mkenv`. If we later manage to defer the `mkenv` until the `popenv`, we elide both
  - `mkenv` and `popenv` replace the "abstraction apply" expression `abs <- (a*)`

## Invariants

- Assumptions can only exist at the beginning of a checkpoint-success branch (`l1` in `check ll(a*) else l2()`). The assumed arguments can't be `use r`, and if they're registers, they must be defined before the checkpoint

- A "deopt branch" (`l2` in `check ll(a*) else l2()`) can only contain `mkenv`s and stores, and it must end with `deopt`. No other branch can end with `deopt`

- Stores and reflective operations cannot be before `mkenv`

A checkpoint and deopt branch is created by the BC->FIŘ compiler after every instruction.

**Background:** every R function has a static list of parameter names and defaults (`FORMALS`). When a function is called from GNU-R, arguments are assigned to parameters via the "argument matching" algorithm [[R manual](https://cran.r-project.org/doc/manuals/r-release/R-lang.html#Argument-matching)]. Unassigned parameters are assigned their default or "missing"; if there are unassigned arguments, the function is not called and an error is raised.

**Idea:** If we've statically resolved a function, we can statically run the argument matching algorithm, because it only depends on argument names and count, *unless* one of the arguments is `...`.

- Add a new type, `dots`, and a new expression, `dots[…]`

- Add "parameter definitions" (language-agnostic `FORMALS`) to function definitions in FIŘ

  - Parameter definitions may be: `x` (no default), `x = { code }` (has default), or `...` (the dots parameter).
  - Every function's baseline version must have exactly one parameter for each parameter definition, and the parameter's type must be `dots` if it's corresponding definition is `...`, otherwise `*`
- When resolving a dynamic call:
  - If none of the arguments are `...`, run the argument matching algorithm to determine which argument indices are assigned to which parameters, which parameters have missing/default values, which argument indices are part of the dots parameter (if the callee has one), and whether there are extra arguments (if the callee has no dots parameter)
    - If there are extra arguments and no parameters, replace the entire call with a call to `fail` that gives the same message as GNU-R (`"Error in …, unused argument(s) (…)"`)
    - Otherwise, if there are missing/default parameters, lazily create a version in the callee that computes them and calls the baseline version
    - If the callee has a dots parameter, insert a statement `r = dots[…]` before the call and pass `r` to the call in the dots parameter's index
    - Replace the call with a static call to the version in the callee that has the exact parameters corresponding to the provided arguments, with the arguments in the correct indices according to the argument matching algorithm
  - If any of the arguments are `...`, don't convert into a static call. This prevents the baseline from being optimized, but we'll eventually create a specialized version of the caller that doesn't have a dots parameter, in which the argument isn't `...` so the call can be converted.

## More info

Inspired by and similar to PIR's speculation and deoptimization, described in the thesis [*Just in Time: Assumptions and Speculations*](https://thesis.r-vm.net/main.html#x1-1170007) (Flükiger, 2022).
