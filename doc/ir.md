# Intermediate Representation

Some properties:

- SSA form.
- Instructions can return multiple values.

## Mutability

`CFG` and `BB`, and `InstrOrPhi`s are mutable by the user. `Instr`s store their content in `InstrData` which is an immutable record for easy construction and pattern matching; the instruction itself must be mutable so its data can be replaced without affecting other instructions' data (which would recursively affect other instructions and so on, making constructing a cyclic dependency impossible besides having ridiculous time complexity).

## Package structure

`BB` has to access internal `CFG` functions to update exits, track/untrack nodes, and split/merge without adding recording operations (because we record the split or merge entirely, we don't want to record adding or removing the BB which is part of it). `BB` also has to access an internal function in `InstrData` to create instructions, so unfortunately we also must put `Instr` in the same package. From there, we put `Node` in the same package too because why not (instructions comprise the majority of nodes, and other nodes are simply auxillary so their constructor must be internal and visible to the instruction).

A lot of other classes are in the `cfg` package.

`CFG` and `BB` are contain all compound operations, because something like `bb.inline(...)` is a lot nicer to use than `BBUtils.inline(BB, ...)` or `BBInliner.inline(BB, ...)`. However, all these methods implemented inline would create a very large file which is bad for the IDE, so they are instead implemented in package-private interfaces (e.g. `CFGCleanup`, `BBInline`) that `CFG` and `BB` implement. This also ensures that the more complex operations don't use internal `BB` methods or methods that they shouldn't need, enforcing looser coupling.

## Terminology

**Replace vs subst**: if an instruction is "replaced", it means occurrences aren't replaced (other instructions that refer to it aren't updated to refer to the instruction that replaced it). If an instruction is "substituted", it means they are.

## Time complexity

Various ways to improve efficiency:

- When possible, substitution is implemented by mutating the instruction (chaging it's internal data), so we don't have to find and mutate the instructions that reference it, which is expensive. However, this isn't possible when subsititing an instruction with an existing instruction, a new instruction which has a different # of return values, or a new instruction whose superclass is a different one of `Phi | Statement | Jump`. Since these cases are expensive, we delay and batch substitute them in `BatchSubst`. The time complexity of batching many of these substitutions is `O(#instructions)`, as opposed to `O(#instructions * #toSubst)` if we substituted immediately.

- We also batch inserting or removing multiple instructions when possible, unless we're inserting or removing from the end of a basic block. Basic blocks store instructions in an array, so inserting or removing instructions from a basic block with a large list of them may be expensive.

General collection data structures:

- The `CFG` class contains a `SequencedMap` of basic block ids to the blocks it contains, a `Map` of node ids to nodes the blocks contain, and a `SequencedSet` of basic block exits.
- The `BB` class contains an `ArrayList` of predecessors, a `SequencedSet` of phis, and an `ArrayList` of statements. Successors are stored with a `@Nullable Jump`.
- The `Phi` subclasses contain an `ArrayList` of inputs.
- Instruction data is stored in Java records. Node arguments and jump targets are memoized every time the instruction's data changes.

`BB` and `Node` store a pointer to their `CFG`, but nodes don't store a pointer to their `BB`, except jumps.
