# FIR IntelliJ Plugin

Simple IntelliJ plugin for IntelliJ IDEA 2026.3 and later (build 263+) that provides:

- Syntax highlighting for FIŘ (`.fir`) files, with colors you can change in *Settings | Editor | Color Scheme | FIŘ*:
  - Registers, R variables (`ld x`, `st x`, formals), function declarations and references, and block labels each have their own color
  - Properties (`@strict`, `@!`) have the metadata color
  - S-expression literals (`<int 42>`, `<lang f(x)>`) have a background, and their R code is highlighted inside it
- Basic linting annotations:
  - Unbalanced delimiters, and unclosed S-expression literals
  - Likely missing semicolons on instruction lines
  - Invalid register names where registers are defined: version parameters (`name:type`), block parameters (`L(name: type):`), and statement assignees (`name: type = ...`)
  - Syntax from older versions of FIŘ: a `reg` prefix on parameters, or a `{ reg r:t, var x:t | ... }` declaration list
  - Missing top-level `fun` declarations
- Structure view, breadcrumbs, and navigation bar entries for functions and versions
- Code folding for functions, versions, and promise bodies, and for multi-line S-expression literals (collapsed by default to `<lang ...>`)

## Known limits

- A register that has the spelling of a type (`st dots = dots;`) has the type color where it's used.
- S-expression folds are collapsed by default only in a file whose fold state the IDE hasn't saved yet.

See [`doc/FIR.md`](../server/doc/FIR.md) and [`doc/grammar.typ`](../server/doc/grammar.typ) for FIŘ syntax, and `../server/src/test/**/*.fir` for examples of FIŘ code.

## Build

The Gradle wrapper (Gradle 9.8.1) runs on Java 17 or later and compiles with a Java 25 toolchain (Gradle downloads it if it's missing).

Run in development:

```bash
cd fir-intellij-plugin
./gradlew runIde
```

Build the plugin ZIP (`build/distributions/`):

```bash
cd fir-intellij-plugin
./gradlew buildPlugin
```
