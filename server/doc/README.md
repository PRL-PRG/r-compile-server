# Compile server documentation

- [design-decisions](design-decisions.md): Original design decisions (e.g. code style)
- [speculation-and-deoptimization](speculation-and-deoptimization.md): Speculation and deoptimization implementation overview
- [variadic-and-default-arguments](variadic-and-default-arguments.md): Variadic and default arguments implementation overview
- [FIR](FIR.md): FIŘ syntax and rough static semantics
- [grammar](grammar.typ): The full FIŘ textual grammar (Typst; build with `typst compile grammar.typ`)
- [bytecode-baseline-feedback](bytecode-baseline-feedback.md): How the feedback recorded by copy-and-patch-JIT-compiled baselines becomes FIŘ feedback
- [lazy-versions](lazy-versions.md): Versions whose bodies are computed on demand, and the stubs that compiled code runs until the server compiles them, and how the client's JIT gets a closure into a module
- [benchmark-licenses](benchmark-licenses.md): The upstream sources and licenses of the `bench_*` examples
- [2026-11-benchmarks](2026-11-benchmarks/README.md): The `fir2c.opt` optimizations of 2026-11-09 to 2026-11-11: cause, solution, and benchmark times before and after each one (report generator and data)

See the Javadoc for more documentation. It can be viewed in IntelliJ or generated with `mvn javadoc:javadoc` (in `site/apidocs/index.html`).
