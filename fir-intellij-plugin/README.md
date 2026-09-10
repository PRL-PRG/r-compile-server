# FIR IntelliJ Plugin

Simple IntelliJ plugin that provides:

- Syntax highlighting for FIŘ (`.fir`) files
- Basic linting annotations:
  - Unbalanced delimiters
  - Likely missing semicolons on statement lines
  - Invalid parameter/register and `var` names
  - Named `var` types that are not maybe-types (`t?`) or `*`
  - Legacy `reg` before parameter declarations (parameters are written `name:type`), and potentially missing `var` before local declarations
  - Missing top-level `fun` declarations

See [`doc/FIR.md`](../server/doc/FIR.md) for FIŘ syntax, and `../server/src/test/**/*.fir` for examples of FIŘ code.

## Run in development

```bash
cd tools/fir-intellij-plugin
gradle runIde
```

## Build plugin ZIP

```bash
cd tools/fir-intellij-plugin
gradle buildPlugin
```
