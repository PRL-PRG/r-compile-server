# `RType` design and debug representation

**TODO:** This is not ideal and maybe we should change it once we actually use types. It seems that the types we need to represent in instructions aren't represented well in this implementation.

`RType` represents the type of SEXPs in the IR. An `RType` consists of an `RValueType`, `RPromiseType`, and `missing: Troolean`. `RValueType` is the type of the value ignoring whether or not it's in a (potentially-lazy) promise or missing, `RPromiseType` determines whether said value may be or is inside a promise and promise details (laziness, known exact promise), and `missing: Troolean` determines whether the value may be or is missing.

Nothing (`⊥`, subtype of everything else) consists of a null `RValueType`, `RPromiseType`, and `missing: Troolean`; in every other `RType`, `RPromiseType` and `missing: Troolean` are both non-null, and the type of the missing value is the only other type where `RValueType` is null Any (`⊤`, supertype of everything else) consists of an "any" `RGenericValueType` that encompasses "any" value that is a supertype of every other `RValueType`, a "maybe lazy, maybe promise-wrapped" `RPromiseType` that is also a supertype of every other `RPromiseType`, and `missing = MAYBE`.

## `RGenericValueType` and `BaseRType`

Each `RValueType` subclass represents a specialized type, such as a primitive function or vector, *except* `RGenericValueType` represents an "any-typed" value as well as other types such as S4 objects. `BaseRType` distinguishes the former "any-typed" `RGenericValueType`s (which can be supertypes of specific `RValueTypes`) from the latter "other-typed" ones (which cannot).

## Common `RType` properties

These are common properties in every `RValueType` which propagate to the `RType`.

- `base: BaseRType`: This is a simplified version of `RType` which only encodes some properties: the SEXPTYPE (or a subset of SEXPTYPEs for functions and non-promises); if the type is a vector, its element type (if static/known); and if the type is a promise, its inner type and whether it's maybe lazy.
- `exactValue: @Nullable SEXP`: Non-null iff this type has one static, known instance, it's this. For example, the type of an `LdConst` instruction. Of course, any `RType` that is a union of two or more `RValueType`s can't have an exact value.
- `attributes: AttributesType`: Refines the SEXP's attributes (associated key-value pairs) in the same way `RType` refines the SEXP itself. Some types of SEXPs don't have attributes, in which case this is always `AttributesTypes.NONE`. Other, object SEXPs are guaranteed to have `class` set to the object type.
- `referenceCount: MaybeNat`: If all instances have a known reference count, this may be set. TODO on its usefulness because there's no case where this is known so far; `MaybeNat` may change to something more specific (e.g. to determine the reference count is "less than X" without knowing it exactly, currently `MaybeNat` can't represent that).

## Specific `RValueType`s

These can be accessed via methods like `function` and `primVec` in `RType`, which return the `RValueType` casted to subclass iff it's an instance *and* the `RPromiseType` and `missing: Troolean` are `VALUE` and `NO` respectively (otherwise the projection methods return `null`).

### Functions

`RFunctionType` is an `RValueType` which contains a set of overloads for the function. Each overload has known parameter types, effects, and a return type. Each parameter has a name, optionality (a parameter is optional iff it has a default value), and required type.

To permit "generic" (parametric polymorphism), the effects and return type are functions of the supplied argument types, e.g. a function can be defined that returns the type of its first argument. However, the parameter types can't be functions of earlier supplied arguments, so a function that takes two arguments of any type, as long as they are the same type, can't be represented.

### Primitive vectors

`RPrimVectorType` encodes a "primitive vector", which is a vector of a number, logical, or string (every vector except generic or expression). It contains (each if static/known) the type of the vector's elements, length, whether the vector (if numeric) has any NA or NaN elements.

TODO
