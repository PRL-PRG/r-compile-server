# `RType` design and debug representation

`RType` represents the type of SEXPs in the IR. An `RType` consists of a union of `RValueType`s and an `RPromiseType`.

Nothing (`⊥`, subtype of everything else) is an empty union and null `RPromiseType`. Every other `RType` has non-null `RPromiseType`. Any (`⊤`, supertype of everything else) is union containing a single "any" `RValueType` that is a supertype of every other `RValueType`, and a "maybe lazy, maybe promise-wrapped" `RPromiseType` that is also a supertype of every other `RPromiseType`.

Maybe merge `RPromiseType` into `RValueType`, add a new subclass `RNothingType`, and just use that directly instead of `RType`?

## `RValueType`

`RValueType`s are specialized types, such as closures and primitive vectors, which have extra detail the compiler tracks for optimizations (e.g. call specialization and unboxing). `RType` being a union means that we can represent polymorphic types, like a number or string, closure or `NULL`, object or primitive vector or missing, etc. (which could be common since R is dynamic, e.g. a polymorphic function type which can't be specialized based on the input, or one where the return discriminant isn't inferrable from the input type). These unions are particularly useful because, while they can't be optimized to any specialized variant on their own, we can insert a speculative guard to refine to each and then optimize.

`RValueType` also has one subclass, `RGenericValueType`, which contains no specialized details and may be a supertype of other `RValueType`s (the other `RValueType`s are disjoint to one another). The reason it can be a supertype of the specialized `RValueTypes` is so that, we don't need a massive union to represent the "any" type. `RGenericValueType` also encompasses "boring" types which don't have a specialized `RValueType` on their own, like `NULL` and external pointers. These are distinguished by `BaseRType`, which is a simplified type within `RType`.

## `RPromiseType`

`RPromiseType` exists to represent types as promises or maybe promises without compromising the type of the inner value. `RPromiseType` encodes what kind of promise the value is and any information about said promise: is it not a promise, maybe a promise, definitely a promise; if it's a promise, is it not/maybe/definitely lazy; and if it's a promise, do we know its reference count or exact (promise) value?

## Common `RType` properties

These are common properties in every `RValueType` which propagate to the `RType`.

- `base: BaseRType`: This is a simplifed version of `RType` which only encodes some properties: the SEXPTYPE (or a subset of SEXPTYPEs for functions and non-promises); if the type is a vector, its element type (if static/known); and if the type is a promise, its inner type and whether it's maybe lazy.
- `exactValue: @Nullable SEXP`: Non-null iff this type has one static, known instance, it's this. For example, the type of an `LdConst` instruction. Of course, any `RType` that is a union of two or more `RValueType`s can't have an exact value.
- `attributes: AttributesType`: Refines the SEXP's attributes (associated key-value pairs) in the same way `RType` refines the SEXP itself. Some types of SEXPs don't have attributes, in which case this is always `AttributesTypes.NONE`. Other, object SEXPs are guaranteed to have `class` set to the object type.
- `referenceCount: MaybeNat`: If all instances have a known reference count, this may be set. TODO on its usefulness because there's no case where this is known so far; `MaybeNat` may change to something more specific (e.g. to determine the reference count is "less than X" without knowing it exactly, currently `MaybeNat` can't represent that).

## Specific `RValueType`s

These can be accessed via methods like `function` and `primVec` in `RType`, which return the instance iff it's the only variant of the `RType` union. TODO a method to split the `RType` if it's a union of multiple `RValueType`s, to speculate on each one.

### Functions

`RFunctionType` is an `RValueType` which contains a set of overloads for the function. Each overload has known parameter types, effects, and a return type. Each parameter has a name, optionality (a parameter is optional iff it has a default value), and required type.

To permit "generic" (parametric polymorphism), the effects and return type are functions of the supplied argument types, e.g. a function can be defined that returns the type of its first argument. However, the parameter types can't be functions of earlier supplied arguments, so a function that takes two arguments of any type, as long as they are the same type, can't be represented.

### Primitive vectors

`RPrimVectorType` encodes a "primitive vector", which is a vector of a number, logical, or string (every vector except generic or expression). It contains (each if static/known) the type of the vector's elements (or e.g. if it's a number, but not static whether double or real), the length, and whether the vector (if numeric) has any NA or NaN elements.

TODO

### The missing value

Unfortunately, the type system isn't good at subtraction ("X is *not* an instance of this type"), so to represent "maybe missing" and "not missing values", there is an explicit `RMissingType`, `RGenericValueType` has a property `isMissing: NoOrMaybe`, and every other specialized type is not missing. If a `RType` contains only `RMissingType` its only instance is the missing value, if it contains `RMissingType` and other `RValueType`s that aren't generic *or* an `RGenericValueType` where `isMissing` is maybe, one of its instances are the missing value (the difference is that the latter means it can encompass other boring types, `RType` internally prevents `RMissingType` and `RGenericValueType` from existing simultaneously in a union). Otherwise, the missing value is not an instance of the type.
