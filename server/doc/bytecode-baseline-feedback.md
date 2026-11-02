# Bytecode baseline feedback

A FIŘ function's baseline version is compiled into a shim that runs the function's original GNU-R
bytecode (`Fir2CCompiler#emitBytecodeBaseline` → `Fir_bc_baseline_call` in
`client/rsh/src/fir2c/runtime.c`). The first time it runs, the bytecode is compiled by the
copy-and-patch JIT ([rcp](../../client/rcp), only available in the RCP variant of GNU-R, built with
`RCP=1 ./tools/build-gnur.sh R`), which instruments some instructions to record feedback. The
client's JIT tiers run a closure's bytecode the same way before they send the closure to the
server (see [lazy-versions.md](lazy-versions.md#how-a-closure-gets-into-a-module)).

The client does not translate what the JIT recorded. It sends the *raw recording* to the server.
The server translates it into feedback for the module
([`BcRecordingFeedback`](../src/main/java/org/prlprg/bc2fir/BcRecordingFeedback.java)). The client
knows one thing that the server cannot compute: which FIŘ function a recorded callee is. So the
client names the callees in the recording.

This document describes what the JIT records, the raw recording, the map the server uses to
translate it, and what the translation does and doesn't preserve.

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
ordinary R vectors, and that's what the runtime reads (`Fir_bc_baseline_recording`):

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

## The raw recording

`Fir_bc_baseline_recording` makes the raw recording from rcp's export. It replaces `consts` with
`callees`, and adds the number of calls:

```r
list(
  calls    = <int(1)>,                                               # calls that ran the bytecode
  branch   = list(bcids = <int>, taken = <int>, not_taken = <int>),  # rcp's, unchanged
  var_call = list(bcids = <int>, counters = <int>, types = <int>),   # rcp's, unchanged
  fun      = list(bcids = <int>, counters = <int>, callees = <list>) # GETFUN
)
```

- `callees` is parallel to `bcids`. Each element is the FIŘ function name of the function the
  `GETFUN` pushed (`Fir_FunctionData.name`), if that function is a compiled FIŘ closure. Each other
  element is `NULL`: a builtin, a closure that isn't compiled, more than one function, or a
  `GETFUN` that never ran. The server can't identify these functions.
- Without rcp, the bytecode runs in GNU-R's interpreter, which records nothing. Then there is no
  recording (`NULL`).

Two things send raw recordings to the server:

- The client's JIT tiers send one recording in `FirClosureRequest.recording`, serialized with R's
  serialization. `calls` is the number of calls that ran the baseline. Without rcp, the field is
  absent.
- `.Call("Fir_serialized_feedback", <module constant pool>)` returns the recordings of every
  baseline of a module, as a list. Each element is a recording with an additional first element,
  `function`: the baseline's FIŘ function name. `calls` is the baseline's call counter. The eval
  tests use it (`EvalQuery`). It returns `NULL` if the JIT isn't available or no baseline ran,
  i.e. when nothing is known (as opposed to knowing that nothing was recorded).

## The baseline's constant pool

The pool's fixed slots are:

| slot |                               contents                               |
|------|----------------------------------------------------------------------|
| 0    | the GNU-R bytecode                                                   |
| 1    | the formals (with default-argument expressions)                      |
| 2    | space for the lazily JIT-compiled code                               |
| 3    | `c("Fir_bc_baseline_feedback", "<function name>")`                   |
| 4    | space for the call counter, a scalar integer the baseline increments |

The first string of slot 3 is a magic value: `Fir_serialized_feedback` is given a module's constant
pool, and finds the baselines by walking every constant pool nested in it (pools of
mutually-recursive functions reference each other, so the walk tracks what it has visited) and
testing each for this value. The second string is the baseline's FIŘ function name, which the
walk puts in each recording's `function`.

## The offset map

The recording is keyed by bytecode offset. The server keeps the map from offset to register
(`BcRecordingFeedback#feedbackOffsets`). It doesn't send the map to the client.

The registers come from bc2fir, which records them as it compiles the four instructions
(`BC2FirCFGCompiler#recordFeedbackRegister` → `FunctionBcOrigin#feedbackRegisters`). Each is the
register the recorded value ends up in:

| instruction |                             register                              |    feedback     |
|-------------|-------------------------------------------------------------------|-----------------|
| `BRIFNOT`   | the `as.logical` cast of the condition (the `if`'s argument)      | constant, times |
| `GETVAR`    | the `force`'s result (`GETVAR` forces, so this is what it pushed) | type, times     |
| `CALL`      | the `call`'s result                                               | type, times     |
| `GETFUN`    | the `ldf`'s result (the call's callee argument)                   | callee, times   |

The offsets are the [`LabelMapping`](../src/main/java/org/prlprg/rds/LabelMapping.java) of each
instruction's index, which is the same mapping that encodes the bytecode the pool stores, so they
line up with the JIT's `bcids` by construction. The server must compile the bytecode that the
client ran. It doesn't recompile the closure, because the offsets index the client's bytecode.

bc2fir also records which `GETVAR`s push a parameter's argument
(`BC2FirCFGCompiler#recordParameterRead` → `FunctionBcOrigin#parameterReads`). It records the
first `GETVAR` of each parameter. It records no `GETVAR` of a parameter that the bytecode stores
to (`SETVAR`, `ENDASSIGN`, or a `for` loop's element), because after the store the variable isn't
the argument. The type the JIT records for such a `GETVAR` is the type of the forced argument, so
it is also feedback for the parameter.

## The translation

`BcRecordingFeedback#translate` prints a
[`MockModuleFeedback`](../src/main/java/org/prlprg/fir/feedback/MockModuleFeedback.java) and
parses it back with `ModuleFeedbackParseContext` against the module. The printed form is, e.g.

```
feedback {
  main< * -+> V > = 3x
  [
    reg n1 :v1(R) (3x)
    reg n :v1(R)[v1(R) 3x] (3x)
    reg f -fib_6d3ae4e7 (3x)
    reg cond =TRUE (3x)
  ]
}
```

- The header is the baseline's function name and signature, and the recording's `calls`. It is
  the version's number of calls (nothing else records it: the JIT only instruments instructions).
- A register's number of recordings is that instruction's counter (for `BRIFNOT`, `taken` plus
  `not_taken`). Instructions that never ran are omitted entirely.
- `GETVAR`/`CALL` types become `Type#of` of the recorded value. Attributed and ALTREP vectors are
  recorded as plain `SEXPTYPE`s, so they become the top value type `V` instead of something like
  `v(I)`.
- A `GETVAR` that pushes a parameter's argument (`n` above) also gives type feedback for the
  parameter. The parser resolves the register name to the parameter first. The line lists the
  type as a hit (`[v1(R) 3x]`), because `SpeculateDispatch` reads hits, and a bare `:T` parses as
  one hit. The number of hits and recordings is the lesser of the `GETVAR`'s counter and `calls`,
  because a `GETVAR` in a loop runs more often than the function. A type that isn't definitely a
  value (`*`) gives no parameter feedback. The printer omits a hit whose type is the union, so
  this form never appears in printed feedback.
- Several recorded types become their union, and because the bitmap doesn't say how often each was
  recorded, that union is always `V` (or `*` if a recorded type isn't definitely a value, which
  shouldn't happen: the recorded values are all forced). So a polymorphic instruction contributes
  no type the optimizer can speculate on, which is the honest reading of a bitmap.
- A `GETFUN`'s recorded function becomes callee feedback if the client named it (it's a compiled
  closure) and the module has a function with that name. Any other callee is recorded like an
  ambiguous callee (`-_`), which can't be speculated on either.
- `BRIFNOT` becomes constant feedback on the condition register: `=TRUE` if it only ever fell
  through, `=FALSE` if it only ever jumped, `=_` if both (which, like an ambiguous callee, can't be
  speculated on). This is what the interpreter records for an `if` too.

Nothing else `AbstractionFeedback` can hold is recorded: no reflective environments, no escaping
promises, no promise force counts, and no feedback at all for promises, which the JIT records
separately in a recording we don't reach.
