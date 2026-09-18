# FIR IntelliJ Plugin

Simple IntelliJ plugin that provides:

- Syntax highlighting for FIŘ (`.fir`) files
- Basic linting annotations:
  - Unbalanced delimiters
  - Likely missing semicolons on instruction lines
  - Invalid register names where registers are defined: version parameters (`name:type`), block parameters (`L(name: type):`), and statement assignees (`name: type = ...`)
  - Syntax from older versions of FIŘ: a `reg` prefix on parameters, or a `{ reg r:t, var x:t | ... }` declaration list
  - Missing top-level `fun` declarations
- Structure view, breadcrumbs, and navigation bar entries for functions and versions
- Code folding for functions, versions, and promise bodies

See [`doc/FIR.md`](../server/doc/FIR.md) and [`doc/grammar.typ`](../server/doc/grammar.typ) for FIŘ syntax, and `../server/src/test/**/*.fir` for examples of FIŘ code.

## Run in development

```bash
cd fir-intellij-plugin
gradle runIde
```

## Build plugin ZIP

```bash
cd fir-intellij-plugin
gradle buildPlugin
```
