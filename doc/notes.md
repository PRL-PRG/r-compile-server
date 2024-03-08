- Lazy and promise-wrapped types
- `BB.replace` should only replace the instruction's data, not replace in arguments
- `BB.remove` and `BB.replace` should only remove in the BB, not CFG
- A `verifier` phase will check that instruction arguments have OK types, aren't removed
- IR should be PIR instructions

AST to IR converter
Example optimization pass
IR interpreter, which serializes and calls into R for builtins.
