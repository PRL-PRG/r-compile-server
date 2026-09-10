# Compile server documentation

- [design-decisions](design-decisions.md): Original design decisions (e.g. code style)
- [speculation-and-deoptimization](speculation-and-deoptimization.md): Speculation and deoptimization implementation overview
- [variadic-and-default-arguments](variadic-and-default-arguments.md): Variadic and default arguments implementation overview
- [FIR](FIR.md): FIŘ syntax and rough static semantics
- [grammar](grammar.typ): The full FIŘ textual grammar (Typst; build with `typst compile grammar.typ`)
- [bytecode-baseline-feedback](bytecode-baseline-feedback.md): How the feedback recorded by copy-and-patch-JIT-compiled baselines becomes FIŘ feedback

See the Javadoc for more documentation. It can be viewed in IntelliJ or generated with `mvn javadoc:javadoc` (in `site/apidocs/index.html`).
