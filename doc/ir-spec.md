# RIR^2^ IR specification

## Abstract

An SSA-based IR with R-specific details:

- **R type hierarchy** (value/promise, missing/not-missing, `SEXPTYPE`, `"class"` attribute, "is scalar", "is maybe NA").
- **Ownership annotations and alias tracking** for some in-place mutation beyond R's reference counting (`@borrows` and `@mutates` parameter attributes, `@fresh` return attribute).
- Limited notion of **effects**, to control reordering.
- Signatures for R's builtins and hard-coded library functions, ability to add manual signatures for third-party libraries.
- **Multiple call types:** GNU-R calls (must wrap args in promises at least sometimes, then wrap in `ListSXP` and provide an environment), compiled closure (can pass args without allocating a `ListSXP`, share environment stored in a static variable if it's faster), and compiled closure version (skips compiled closure dispatch and directly calls the optimized version).

May also use e-graphs like [Cranelift's "aegraphs"](https://github.com/bytecodealliance/rfcs/blob/main/accepted/cranelift-egraph.md), but that would be for later.

## Formal specification

### Organization

#### Code

```mermaid
classDiagram
    direction TB
    class Closure {
        +ClosureVersion baseline
        +CallContextMap~ClosureVersion~ optimized
    }
    class ClosureVersion {
        +CFG body
        +bool isBaseline
        +CallContext context
        +Properties properties
    }
    class CFG {
        +Set~Param~ params
        +Set~ExternalLoad~ externalLoads
        +Set~ExternalStore~ externalStores
        +BB entry
        +Set~BB~ bbs
        +Set~BB~ exits()
        +Set~LocalNode~ localNodes()
        +Iteratable~BB~ iterDfs()
        +Iteratable~BB~ iterBfs()
        +Iteratable~BB~ iterDomTree()
    }
    class BB {
        +Set~Phi~ phis
        +Statement[] statements
        +Jump jump
        +Set~BB~ predecessors()
        +Set~BB~ successor()
    }
    namespace instructions {
        class Statement {
            +Node|Closure|BuiltinId|IntrinsicId fun
            +~Node|Object~[] inputs
            +InstrOutput[] outputs
            +REffects effects()
        }
        class Unreachable {

        }
        class Return {
            +Node value
        }
        class Goto {
            +BB next
        }
        class Branch {
            +Node condition
            +BB then
            +BB else
        }
        class Jump {
            +BB targets()
        }
        class Instruction {
        }
    }
    namespace local_nodes {
        class InstrOutput~T~ {

        }
        class Phi~T~ {
            +Map~BB,Node~ inputs
        }
        class ExternalLoad~T~ {
            +RType type
        }
        class Param~T~ {
            +RType type
        }
        class LocalNode~T~ {
            +SymSXP name
        }
    }
    namespace global_nodes {
        class InvalidNode {

        }
        class StaticEnv {

        }
        class Constant~T~ {
            +T constant
        }
        class GlobalNode~T~ {

        }
    }
    class Node~T~ {
        +RType type()
    }
    class ExternalStore {
        +Map~BB,Node~ inputs
        +SymSXP name
    }

    Unreachable <|-- Jump
    Return <|-- Jump
    Goto <|-- Jump
    Branch <|-- Jump
    Statement <|-- Instruction
    Jump <|-- Instruction
    Phi <|-- LocalNode
    InstrOutput <|-- LocalNode
    ExternalLoad <|-- LocalNode
    Param <|-- LocalNode
    LocalNode <|-- Node
    InvalidNode <|-- GlobalNode : &ltNothing&gt
    StaticEnv <|-- GlobalNode : &ltEnvSXP&gt
    Constant <|-- GlobalNode
    GlobalNode <|-- Node


    ClosureVersion "1.." *-- Closure
    CFG *-- ClosureVersion
    BB "1.." *-- CFG
    Phi "0.." *-- BB
    Statement "0.." *-- BB
    Jump *-- BB
    Instruction "1.." *.. BB : Via statements and jump
    InstrOutput "0..*" *-- Instruction
    Closure "0..1" o.. Instruction
    Node "0..*" o-- Instruction
    Node "2..*" o-- Phi
    ExternalStore "0..*" *-- CFG
    ExternalLoad "0..*" *-- CFG
    Param "0..*" *-- CFG

```

- `Closure` is a compiled closure. It contains a baseline version with feedback, and zero or more optimized versions with optimized code.
- `ClosureVersion` is a specific version of the closure's body, either "baseline" (unoptimized) or optimized.
- `CFG` is the control-flow-graph, `BB` are basic blocks, `Phi` are phi nodes.
  - Unlike some `CFG`s, `Phi`s are required and guaranteed to have an input corresponding to every one of their origin block's predecessors. If a block gets a new predecessor, its `Phi`s automatically gain a new input from that predecessor with an "unset stub" node; if a block loses a predecessor, its `Phi`s automatically lose the corresponding input.
- `Param` is a function parameter. `ExternalLoad` is a variable that gets loaded and "safe forced" from the environment before an optimized closure is called, then passed to the closure similar to a parameter (baseline closures have no `ExternalLoad`s or `ExternalStore`s, instead they have "external load" and "external store" instructions).
- `ExternalStore` is an operation that runs at every exit from the control-flow-graph, and stores an externally-loaded variable that could have been mutated (essentially a `Phi` from every exit block, followed by "external store" instruction). `ExternalLoad` and `ExternalStore` together allow optimized closures to convert variables loaded from and super-assigned into the outside environment into locals; the local is loaded once from the outside environment at the beginning of the instruction, its type is part of the `CallContext` like a parameter, then if an optimized version runs, it gets stored once at the end of the optimized code.
- `Statement` is an abstract runtime operation. It has a:
  - **Function,** which may be a `Node` (GNU-R closure call), `Closure` (compiled closure call), `BuiltinId` (GNU-R builtin call) or `IntrinsicId` (e.g. "external load", "make closure").
  - List of **inputs** whose size and required types (class types and `RType`s) depend on the function. For example, "make closure" has a single input that is a `Closure`; GNU-R binary operation builtins have two inputs that are `Node`s, although the type of node may be arbitrary (`Node<?>`); GNU-R closure calls have at least one input that is a list of `String`s (argument names), followed by variable number of `Node<?>` inputs.
  - List of **outputs** (local nodes) whose size depends on the function, and whose `RType` depends on the function and input `RType`.
  - Additionally, instructions store a cached set of **effects** (`REffect`), that are computed from the function and input `RType`s.
- `Node` is an abstract runtime value that is an input to an instruction or phi. `LocalNode` is a node that belongs to a particular control-flow-graph, while `GlobalNode` is a node like a `Constant` that can be reused across graphs.
  - `InvalidNode` is a stub, e.g. for an unset phi input, or to maintain the structure after an internal compiler error.

Other:

- `CallContext` is a set of assumptions that must be met for an optimized version to dispatch `CallContextMap` lets you get the "best" version given a specific set of assumptions.
  - The call context may also imply a set of "guards" that translate to code at runtime; if a context *could* match, its guard code is run to determine whether it *does* match, otherwise the next most-specific context is chosen and that guard may be "penalized" so it instantly fails the next $n$ times, to reduce the execution time wasted.
- `Properties` is the set of assumptions you get if a `ClosureVersion` is executed (postconditions). These are used when the version is statically called by another optimized closure, e.g. to reorder or redundant-merge if a property is no side-effects.
- `RType` is an abstract runtime type (TODO: `SEXP` and `RType` class graph)

Clarification:

- Instructions can have non-node inputs if they are required to be statically known. For example, an "make closure" instruction has a statically-known closure, so that input is `Closure`, not `Node<Closure>`. `Constant` nodes are inputs that just happen to be static but in general aren't required to be. For example, `Phi`'s inputs are all `Node`s because, specific phis may have static inputs from some or all predecessors, but this isn't true for phis in general.

#### Types

```mermaid
classDiagram
    class Bool
    class IntSimpleScalar
    class IntScalar
    class IntVecNoNA
    class IntVec
    class RealVec
    class ComplexVec
    class NumberVec~T extends Number~
    class LogicalVec
    class NumberOrLogicalVec~T extends NumberOrLogical~
    class StringVec
    class NAAblePrimitiveVec~T extends Primitive~
    class RawVec
    class PrimitiveVec~T extends Primitive~
    class ListVec~T extends SEXP~
    class ExpressionVec
    class Vector~T~
    class Nil
    class Pairlist~T extends SEXP~
    class Language
    class AbstractCollection~T~
    class Symbol
    class AST
    class CompiledClosure~Params..., Return~
    class Closure~Params..., Return~
    class Builtin~Params..., Return~
    class Special~Params..., Return~
    class BuiltinOrSpecial~Params..., Return~
    class Function~Params..., Return~
    class Environment
    class Bytecode
    class Value
    class Missing
    class ValueOrMissing
    class Promise~T extends Value~
    class SEXP

    Bool <|-- LogicalVec
    IntSimpleScalar <|-- IntScalar
    IntScalar <|-- IntVecNoNA
    IntVecNoNA <|-- IntVec
    IntVec <|-- NumberVec : &ltInt&gt
    RealVec <|-- NumberVec : &ltDouble&gt
    ComplexVec <|-- NumberVec
    NumberVec <|-- NumberOrLogicalVec
    LogicalVec <|-- NumberOrLogicalVec : &ltLogical&gt
    NumberOrLogicalVec <|-- NAAblePrimitiveVec
    StringVec <|-- NAAblePrimitiveVec : &ltString&gt
    NAAblePrimitiveVec <|-- Vector
    RawVec <|-- Vector : &ltByte&gt
    PrimitiveVec <|-- Vector
    ListVec <|-- Vector
    ExpressionVec <|-- Vector : &ltAST&gt
    Vector <|-- AbstractCollection
    Nil <|-- Pairlist
    Pairlist <|-- AbstractCollection
    Language <|-- AbstractCollection : &ltAST&gt
    AbstractCollection <|-- Value
    IntScalar <|-- AST
    Nil <|-- AST
    Language <|-- AST
    Symbol <|-- AST
    AST <|-- Value
    CompiledClosure <|-- Closure
    Closure <|-- Function
    Special <|-- Function
    Builtin <|-- Function
    BuiltinOrSpecial <|-- Function
    Function <|-- Value
    Environment <|-- Value
    Bytecode <|-- Value
    Value <|-- ValueOrMissing
    Missing <|-- ValueOrMissing
    ValueOrMissing <|-- SEXP
    Promise <|-- SEXP

```
