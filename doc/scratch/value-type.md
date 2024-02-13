# `ValueType`: fine-grained SEXP types (not to be confused with `SEXPTYPE`)

We want to create a **type system** for R values (SEXPs) which lets us perform effective optimizations in a straightforward way.

RType:
+ Any
+ Vector< T >   (T = any, int, string, bool, raw, complex, double, exp)
+ ListAny
+ Promise<T> (T = RType)
+ Call                      // language object
+ VectorCall           // expression object
+ Closure
+ ?S4
+ ?ExternalRef
+ ?WeakRef
+ ?Dots
+ ?Environment
+ ?Bytecode
+ Symbol
+ Special
+ Builtin

Promise<T>  ==> EvaluatedPromise<T>

"Native types"

The data part of SEXP:

https://cran.r-project.org/doc/manuals/r-release/R-ints.html#SEXPTYPEs

---

## `PirType`: PIR node types

`PirType` are the fine-grained SEXP types in PIR. But they also encompass non-SEXP instructions: every IR node has a `PirType` (e.g. `Env#type == env`; an instruction's "type" is the type of the value it produces) and some nodes contain data which is not an SEXP (checkpoint, frame-state, deopt-reason, and context).

`PirType` is represented by `struct { union { EnumSet<RType>; EnumSet<NativeType>; }; EnumSet<TypeFlag>; }`:

- `RType` is an enum of `SEXPTYPE`s, with `missing` (`R_MissingArg`), `unbound` (`R_UnboundValue`), and `expandedDots` (`symbol::expandedDotsTrigger`?) having their own type, and `other` for types we don't care about.
- `NativeType` is an enum of the non-SEXP types ("native types") such as frame-states and R contexts.
- `TypeFlag` is an enum containing possible flags which make the type less precise, e.g. `maybeNotScalar`, `maybeObject`, and `maybeNAOrNaN`. But it also contains `rtype`, which is the tag that determines whether the `PirType` represents an SEXP or non-SEXP type.

`void` is the type of instructions which don't return a value. This is represented by an empty `NativeTypeSet` and only the `rtype` flag ("bottom" native type).

### `Effect`: PIR instruction effects

- `Visibility`: may change `R_Visible`
- `Warn`: may produce a warning
- `Error`: may produce an error
- `Force`: may force a promise
- `Reflection`: may perform reflection
- `LeaksArg`: may leak some of its arguments ("leak" = runtime value may still be alive after its SSA value dies?)
- `ChangesContext`: may push, pop, or drop context (those are the only 3 instructions that have this effect, besides `Effects::Any()` instructions)
- `ReadsEnv`: may read from an environment (the local environment and maybe parents)
- `WritesEnv`: may write to an environment (not specified whether local, e.g. both `StVar` and `StVarSuper` have this effect)
- `LeaksEnv`: may leak an environment (argument? This is only on `PushContext` and `Effects::Any()` instructions)
- `TriggerDeopt`: may cause a deopt (only on `Assume` and `Effects::Any()` instructions)
- `ExecuteCode`: may run arbitrary code. This is set on instructions with `Effects::Any()` like `Force`, and some of their other effects may be `reset` like `Reflection`, but this never does; so an instruction may have this but not `Reflection`, and that means it runs code which is "unknown" except guaranteed not to perform reflection.
- `UpdatesMetadata`: idk what this is. It's never tested directly, only `reset` by `getStrongEffects`; it affects when we check that effect sets are empty e.g. `getObservableEffects()`, but so does `ExecuteCode`. So would it affect evaluation whatsoever if we were to remove?
- `DependsOnAssume`: prevents the instruction from getting moved to before the latest `Assume`
- `MutatesArgument`: may mutate one of its arguments (only set on `UpdatePromise` and `Effects::Any()` instructions)

### Can we split SEXP and non-SEXP types?

I believe we can reuse the Java type system for "native types", and create `ValueType` for SEXP-types.

- Do the instructions with native types ever change their type? Can an instruction class which may return type `void` ever return a different type?
- What are native types used for? I know to sanity-check instruction arguments (prevent passing an argument of an incompatible type), but are there other use cases?
  - What are the use cases of pir-types that may also apply to native types?
- Is there such thing as a union of native types (it can be represented but is it used in practice)? Likewise, is there ever a native type with flags besides `rtype`?

In PIR, instruction arguments and return types are only typed at runtime. Any instruction lets you statically get or set arguments of any IR node type, but if you set argument of the wrong type, the verifier will complain. Part of the reason is that instructions can change their return (and maybe argument) types, which can't be statically enforced; an argument's type may initially be correct, but change to the wrong type after a pass, and if so the verifier will complain. However, I couldn't find any instance of this with native types.

### Rework `RType` and `TypeFlags`

- Closure argument and return types instead of just `closure`.
  - Similarly, there may be other SEXPTYPE subtypes we want to extract into their own type besides `unbound` and `expandDots`.
- Why are `missing` and `promise` in `RType` and `maybeMissing` and `maybePromiseWrapped` in `TypeFlag`? They seem redundant, but I recall some discussion so maybe there's a semantic difference, unfortunately I forget what it was (and whether it's still relevant).
- Collect more information about SEXPs (e.g. specific possible object types) for more optimizations. See ["what information is useful"](#what-information-is-useful)

### Rework `TypeFlags`

TODO

### Instruction `Effects`

TODO maybe these should also be reworked? I don't see any issue but I don't know.

## What information is useful?

Already in PIR:
- Value type (`RType` ~= `SEXPTYPE`)
- Is the value **maybe a promise**? **Maybe an unevaluated promise**?
- Is the value **maybe not scalar**?
- Is the value **maybe an object**?
- Is the value **maybe NA or NaN**?
- `maybeNotFastVecelt`: not quite sure what this is; **maybe not a fast vector element**?
- TODO instruction effects.

Possibilities to merge / remove:

- merge `promise` and `promiseWrapped` flag, `missing` and `maybeMissing`.
- Does being an object but not attrib, or have attrib but no object, affect optimization? Possibly merge both

Possibilities to include:

- If a promise (can infer/check many of these at runtime by inspecting the bytecode).
  - Does it **maybe access an outside environment**? (If not and no side effects we can almost treat as a non-promise, eagerly evaluating if necessary).
  - Does it **maybe perform side-effects**? (Can't reorder with other side-effecting promises, global loads, among other things).
  - Does it **maybe perform reflection**? (No tainted environment, which prevents even local reordering with variables and name elision)
  - Does it **probably perform reflection**? (Or local reflection etc.)
    - If not, we could reimplement parts of the evaluator and do a transactional force, then checkpoint. If it fails we deopt, if it succeeds we don't have a tainted environment.
- If has attrib / object, infer how attrib / object affects optimization.
  - Certain attrib may not prevent certain optimizations, particularly any attrib besides `class`. So store the attribs, or at least whether we have an attrib which does prevent certain optimizations.
  - Specific types and optimizations for specific object types (data frames, tibbles).
- Not just scalars, but also optimize "simple" (non-attrib non-object) vectors.
  - A lot of the scalar optimization can probably be applied to vectors as well. We can do fast vector arithmetic, maybe even SIMD.
  - Infer vector length (in case 2 vectors have the same length; if the vector is "small" or "large" and optimize differently).
  - However besides vector length, idk if there's much to *add to the type system* to implement this: we can already tell if an object is a simple vector in PIR's type system.
- Is the value **maybe altrep**?
  - How has PIR been dealing with `ALTREP` anyways? Maybe all `ALTREP` have attributes? Maybe there just aren't enough `ALTREP` to trigger bugs?

### Effects

- `ReadsGlobalEnv` and `WritesGlobalEnv`: does the value potentially access a global environment? Since we have want to reuse functions across global environments. e.g. `StVar` initially could, but if we know the variable is in-scope it won't; similarly `StVarSuper` if the variable is in a parent scope.
  - Maybe refine which environments an instruction with `ReadsEnv`/`WritesEnv`/`LeaksEnv` may access.

### What kinds of operations do we want to primarily target?

- Scalar computations
- Large vectorized computations
- Large object computations (data frames, tibbles)

In PIR we focused more on scalar computations and maybe large vectorized computations. But it's important to optimize the object computations, since at least data-frames and tibbles are used extremely frequently.

However, there's also the question of how much of the computations in these structures are done in R, vs. in external C code. Because if the bulk of a large operation is done in C, there's not much for us to optimize.

So, what is common R code that takes a long time (and is worth speedup) and the bulk of this time isn't spent in C calls?

- The R bytecode compiler itself?
- Various popular R packages, or is that too ambitious? We can search for a popular but simple package.
