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

## More info

Inspired by and similar to PIR's speculation and deoptimization, described in the thesis [*Just in Time: Assumptions and Speculations*](https://thesis.r-vm.net/main.html#x1-1170007) (Flükiger, 2022).
