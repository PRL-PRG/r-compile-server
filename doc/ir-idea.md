# RIR^2^ idea

## Abstract

Optimization has 2 phases:

- Disprove **lazy effectful promises and reflection** using both static analysis and runtime guards at the function header.
  - I think we should work on this before starting optimizations, and see if it's possible to enforce constraints these for "most" functions. If so, we can have an IR without *any* global state taint or deoptimization, and practically elide every environment[^elide env]. Furthermore, we can hoist external loads and forces to the start of the function and defer external stores; then we have IR locals instead of `LdVar` and `StVar` (less verbosity), and no promise type[^no promises].
  - But can we disprove and generate the correct runtime guards using only bytecode or do we need an IR? Furthermore, should we reuse the IR for optimizations or make a separate one?
- Translate to an IR slightly modified for R specifics (e.g. has the R types) and use SOTA optimizations (probably e-graphs) with slight modifications for R.

Basically, the previous [Ř compiler](https://github.com/reactorlabs/rir) did both disproving lazy-effects+reflection and optimizations simultaneously. Here, we *first* try to disprove all lazy-effects+reflection and *only if we fully succeed* optimize.

- This means we don't have to implement deoptimization, global taints, ... it makes existing optimizations work on the IR without much modification.
- If we can't fully disprove all lazy-effects+reflection for a closure, we probably can't optimize it much anyways.

[^elide env]: We'd still pass the current environment to calls that use the environment e.g. to load global variables, but wouldn't have to allocate one for the closure and can assume no reflection.
[^no promises]: We already force external variables loaded from the environment. Since there are no lazy effectful promises, and we have enough type information to know when something is a promise, we can implicitly force anything else ASAP. Arguments to GNU-R closures need to be wrapped in promises, but we can do this implicitly (and keep the original AST from the bytecode).

## Disprove lazy effects and reflection

Instead of speculation within the function, we insert guards at the beginning, so that we can "deoptimize" just by calling the baseline.

One thing we'll need is a "safe transactional force" that will execute a promise's bytecode up to the point where it may trigger an effect, then abort and "fail" before executing the effect. If the entire bytecode is executed with no potential-effect breakpoints, the safe force will "succeed" and return the forced value.

To disprove lazy effects and reflection, we need to handle the things that may cause lazy-effects and reflection: **loads (arguments and external variables) and calls (non-dispatching and dispatching).**

- **To handle arguments that may be side-effecting promises:** statically, only optimize closure versions that take non-promise arguments. At runtime, when we attempt to dispatch an optimized closure from GNU-R, safe force every argument: if all safe forces succeed, call the optimized code, otherwise call the baseline.
- **To handle loaded variables that may invoke side effects via `delayedAssign`:** hoist external loads and safe force them, and defer external stores.
  - Find every variable loaded from an external environment, even ones that only occur in conditions; insert a single load for the variable at the start of the function, followed by a safe force; replace the other loads with locals, and replace stores to that variable with assignment to those locals (may use phis or have an IR that permits re-assignment); then for all variables that had a super-assign store, insert an external store of the corresponding local at the end of every exit block. At runtime, if any of the safe forces fail, we abort running the compiled version and call the baseline (since they're at the beginning of the closure).
- **To handle non-dispatching calls that may perform reflection:** check that these calls are statically-known "trusted" functions before running the optimized code.
  - Find every call, then check feedback to ensure a) the callee always has the same body, and b) it's a "trusted" function (either a builtin, or closure that we can optimize with an inferred context[^why inferred]). If any callee doesn't satisfy these requirements, abort compiling the caller. Otherwise, at runtime, load and "safe force" every callee at the beginning of the function similar to how we load variables[^function load], then check that every callee is equal to the recorded trusted callee, and if not, abort and call the baseline.
- **To handle dispatching calls:** elaborate the callee recording and analysis, so that if the callee may dispatch, we also check its dispatching argument(s) classes (only "trust" the specific closure it dispatches to).
  - Besides recording call callees, we must also record the `class` of the first argument, and second argument if it's a specific fuction that may double-dispatch. When analyzing the callee, if it dispatches, we first assert that the `class`es are the same, and abort compiling otherwise; then we statically resolve the actual closure that it dispatches to and check that it doesn't perform reflection (e.g. `fun.foo` for `fun`); then we insert at the beginning of the closure, not only a guard for the function itself, but a guard for its argument(s) to have the correct `class`.
  - Additionally, since we know the exact dispatch target after the guards, replace the dispatching callee with it in the optimized body.

[^why inferred]: Assuming the runtime guards that guarantee no reflection or unknown calls, we can already infer accurate variable types, and thus a specific context for the builtins and compiled closures. We need a specific context, because if we can't determine the object type, a lot of functions may dispatch or call something that dispatches.
[^function load]: Although do a "function load" instead of "variable load" if the callee is external. Also, if the callee is locally-bound and/or an inner closure, instead of inserting a load, we must infer either a) which external variable (we already loaded) to check, or b) (if it's an inner closure) statically whether or not the closure is trusted.

## High-level implementation

The static analysis to determine whether the closure is optimizable and the specific runtime guards is in Java. The runtime code to dispatch the optimized version, run the guards (and call the baseline if any fail), and safe transactional force is in C.

The safe transactional force can probably reuse a lot of techniques and code from the bytecode-to-C compiler. To start, we really don't need to implement much, because we can just fail if we encounter a bytecode that we didn't handle (even if it won't necessarily perform effects, e.g. the for loop instructions are probably unnecessary because there aren't a lot of for loops in function arguments). In fact, we can start by only handling promises that are constants and variable loads.

To compile a closure, the compiler client will need to send not only the closure itself, but the identifiers of all its callees (callees may be builtins, already-compiled, or unknown[^mutually exclusive]). Furthermore, if a callee is `UseMethod`, the client will need to send the version that it dispatches to which can be inferred from the recorded argument `class`es. Therefore, dispatch resolution actually needs to be implemented on the client.

We probably need an IR to do the static analysis. We can reuse (at least part of) the one I made before and am rewriting most of. I don't need to implement any of the effects to check that functions are "trusted".

I do need to think more about how to do the analyses and runtime guards...

[^mutually exclusive]: Unknown is either not compileable or doesn't have enough feedback to be compiled, otherwise it would be already-compiled.
