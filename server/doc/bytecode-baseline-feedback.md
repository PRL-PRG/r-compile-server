# Bytecode baseline feedback

A FIŘ function's baseline version is compiled into a shim that runs the function's original GNU-R
bytecode (`Fir2CCompiler#emitBytecodeBaseline` → `Fir_bc_baseline_call` in
`client/rsh/src/fir2c/runtime.c`). The first time it runs, the bytecode is compiled by the
copy-and-patch JIT ([rcp](../../client/rcp), only available in the RCP variant of GNU-R, built with
`RCP=1 ./tools/build-gnur.sh R`), which instruments some instructions to record feedback.

`.Call("Fir_serialized_feedback", <module constant pool>)` translates everything those baselines
recorded into a serialized
[`MockModuleFeedback`](../src/main/java/org/prlprg/fir/feedback/MockModuleFeedback.java), which
`ModuleFeedbackParseContext` parses back into feedback for the module the baselines belong to. It
returns `NULL` if the JIT isn't available or no baseline ran, i.e. when nothing is known (as
opposed to knowing that nothing was recorded).

This document describes the recording format, the map the compiler emits to translate it, and what
the translation does and doesn't preserve.

## What the JIT records

`rcp_cmpfun` instruments the bytecode when the `rcp.cmpfun.type_recording` option is set (which
`Fir_bc_baseline_code` sets around its own compilation, and only around it). The instrumentation is
stencils that increment counters and OR type bits, applied to four instructions:

| instruction |                                   recorded                                    |
|-------------|-------------------------------------------------------------------------------|
| `BRIFNOT`   | how often it was reached, and how often it fell through                       |
| `GETVAR`    | how often it ran, and the types of the values it pushed                       |
| `CALL`      | how often it ran, and the types of the values it pushed                       |
| `GETFUN`    | how often it ran, and the function it pushed if it always pushed the same one |

The counters live in `mmap`ed buffers reachable from a `"recording"` attribute on the external
pointer that is the JIT-compiled code (i.e. the compiled closure's body). The raw attribute is a
list of three groups of parallel arrays, but `rcp`'s `C_rcp_export_recording` copies it into
ordinary R vectors, and that's what the runtime reads:

```r
list(
  branch   = list(bcids = <int>, taken = <int>, not_taken = <int>),  # BRIFNOT
  var_call = list(bcids = <int>, counters = <int>, types = <int>),   # GETVAR, CALL
  fun      = list(bcids = <int>, counters = <int>, consts = <list>)  # GETFUN
)
```

- `bcids` are ascending offsets into the *encoded* bytecode: the array that starts with the
  bytecode version number and stores every instruction's arguments after its opcode, so they are
  neither instruction indices nor consecutive.
- `taken` counts jumps taken. `BRIFNOT` jumps iff its condition is false, so `taken` is how often
  the condition was false and `not_taken` how often it was true.
- `types` is a bitmap of `1 << type` for every recorded type. `type` is a `SEXPTYPE`, except that
  an unboxed scalar, or a vector with no attributes that isn't ALTREP, gets one of these codes
  instead:

  | code |           type           | code |          type           |
  |------|--------------------------|------|-------------------------|
  | 11   | scalar logical (`v1(L)`) | 12   | logical vector (`v(L)`) |
  | 26   | scalar integer (`v1(I)`) | 27   | integer vector (`v(I)`) |
  | 28   | scalar real (`v1(R)`)    | 29   | real vector (`v(R)`)    |
  | 30   | scalar string (`v1(S)`)  | 31   | string vector (`v(S)`)  |

- `consts` holds the single function each `GETFUN` pushed, or `R_UnboundValue` if it pushed more
  than one (or never ran).

## The feedback map

The recording is keyed by bytecode offset, and the runtime knows nothing about FIŘ, so the compiler
emits a translation table into the baseline's constant pool. The pool's fixed slots are:

| slot |                               contents                               |
|------|----------------------------------------------------------------------|
| 0    | the GNU-R bytecode                                                   |
| 1    | the formals (with default-argument expressions)                      |
| 2    | space for the lazily JIT-compiled code                               |
| 3    | the feedback map                                                     |
| 4    | space for the call counter, a scalar integer the baseline increments |

and the feedback map (`Fir2CCompiler.FunctionEmitter#bcBaselineFeedbackMap(...)`) is a 3-element
list:

| element |                                     contents                                     |
|---------|----------------------------------------------------------------------------------|
| 0       | `c("Fir_bc_baseline_feedback", "<function name>< <signature> > = ")`             |
| 1       | the recorded instructions' bytecode offsets, ascending                           |
| 2       | the name of the register each offset's feedback describes, parallel to element 1 |

The first string is a magic value: `Fir_serialized_feedback` is given a module's constant pool, and
finds the baselines by walking every constant pool nested in it (pools of mutually-recursive
functions reference each other, so the walk tracks what it has visited) and testing each for this
value.

The registers come from bc2fir, which records them as it compiles the four instructions
(`BC2FirCFGCompiler#recordFeedbackRegister` → `FunctionBcOrigin`). Each is the register the
recorded value ends up in:

| instruction |                             register                              |    feedback     |
|-------------|-------------------------------------------------------------------|-----------------|
| `BRIFNOT`   | the `as.logical` cast of the condition (the `if`'s argument)      | constant, times |
| `GETVAR`    | the `force`'s result (`GETVAR` forces, so this is what it pushed) | type, times     |
| `CALL`      | the `call`'s result                                               | type, times     |
| `GETFUN`    | the `ldf`'s result (the call's callee argument)                   | callee, times   |

The offsets are the [`LabelMapping`](../src/main/java/org/prlprg/rds/LabelMapping.java) of each
instruction's index, which is the same mapping that encodes the bytecode the pool stores, so they
line up with the JIT's `bcids` by construction.

## The translation

The output is the printed form of a `MockModuleFeedback`, e.g.

```
feedback {
  main< -+> V > = 3x
  [
    reg n :v1(R) (3x)
    reg f -fib_6d3ae4e7 (3x)
    reg cond =TRUE (3x)
  ]
}
```

- The version's number of calls is the baseline's call counter (nothing else records it: the JIT
  only instruments instructions).
- A register's number of recordings is that instruction's counter (for `BRIFNOT`, `taken` plus
  `not_taken`). Instructions that never ran are omitted entirely.
- `GETVAR`/`CALL` types become `Type#of` of the recorded value. Attributed and ALTREP vectors are
  recorded as plain `SEXPTYPE`s, so they become the top value type `V` instead of something like
  `v(I)`.
- Several recorded types become their union, and because the bitmap doesn't say how often each was
  recorded, that union is always `V` (or `*` if a recorded type isn't definitely a value, which
  shouldn't happen: the recorded values are all forced). So a polymorphic instruction contributes
  no type the optimizer can speculate on, which is the honest reading of a bitmap.
- A `GETFUN`'s recorded function becomes callee feedback if it's a compiled closure, whose FIŘ
  function name is in its `Fir_FunctionData`. A closure that isn't compiled has no FIŘ function to
  name, so it's recorded like an ambiguous callee (`-_`), which can't be speculated on either.
- `BRIFNOT` becomes constant feedback on the condition register: `=TRUE` if it only ever fell
  through, `=FALSE` if it only ever jumped, `=_` if both (which, like an ambiguous callee, can't be
  speculated on). This is what the interpreter records for an `if` too.

Nothing else `AbstractionFeedback` can hold is recorded: no reflective environments, no escaping
promises, no promise force counts, and no feedback at all for promises, which the JIT records
separately in a recording we don't reach.
