- Simplify function types so they pass tests
- Maintain an `old` and `new` CFG. `IRBuilder` will add changes to only `new`, and when it `commit`s, will apply all changes to `old`. Also may want to batch changes and compute changed properties instead of applying them to `new`, since batching may be faster (e.g. replace a force of eager value with the value itself; instruction/data doesn't work here. Or we track uses? Probably not, TODO).
- A `verifier` phase will check that instruction arguments have OK types, aren't removed
- IR should be PIR instructions

AST to IR converter
Example optimization pass: scope resolution
? IR interpreter, which serializes and calls into R for builtins.
