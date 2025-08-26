# CLAUDE.md

This file provides guidance to Claude Code (claude.ai/code) when working with code in this repository.

## Common Development Commands

### Build and Test

- `make build` or `mvn package` - Build the project
- `make test` or `R_BIN=$(R) mvn test` - Run unit tests only
- `make verify` or `R_BIN=$(R) mvn verify` - Run tests and static analysis
- `make format` or `mvn spotless:apply` - Apply code formatting
- `make run` or `R_HOME="$(R_HOME)" mvn compile exec:java` - Run the server
- `make clean` or `mvn clean` - Clean build artifacts

### Dependencies

- Project uses Java 22 with Maven as the build system (comments are Java 23)
- Requires R installation (set via R_HOME environment variable)
- Default R_HOME is `$(BASE_DIR)/external/R`
- **External Dependencies**: Minimize dependencies. Current dependencies:
  - Google Guava for immutable collections and utilities
  - gRPC for communication
  - JUnit 5 for testing

## High-Level Architecture

This is an R compilation server that provides a gRPC service for compiling R functions to optimized bytecode and native code. The compilation pipeline follows this flow:

### Core Components

1. **gRPC Server (`CompileServer.java`)** - Main entry point running on port 8980
2. **Compilation Service (`CompileService.java`)** - Handles compilation requests with caching
3. **R Bytecode Compiler (`bc/`)** - Compiles R functions to bytecode
4. **Bytecode-to-C Compiler (`bc2c/`)** - Converts bytecode to C code
5. **FIŘ (Functional IR) System (`fir/`)** - Intermediate representation with type system
6. **R Session Management (`session/`)** - Manages GNU-R sessions and package databases

### Compilation Pipeline

```
R Function (SEXP) → Bytecode (BC) → C Code → Native Object Code
                     ↓              ↓
                  Cache Layer   Cache Layer
```

### Key Directories

- `src/main/java/org/prlprg/`
  - `bc/` - R bytecode compilation (BCCompiler, optimizations)
  - `bc2c/` - Bytecode to C compilation (BC2CCompiler)
  - `bc2fir/` - Bytecode to FIŘ conversion
  - `fir/` - Functional IR system with type checking and optimizations
  - `server/` - gRPC server and service implementation
  - `session/` - R session management and package handling
  - `sexp/` - R S-expression representation and manipulation
  - `rds/` - R data serialization format handling
  - `util/` - Common utilities and helper classes

### Testing Strategy

- **Unit Tests**: Use JUnit 5 with parallel execution enabled
- **Integration Tests**: Use snapshot testing (stored in `src/test/resources/*/snapshots/`)
- **Property-Based Testing**: Use JQwik for complex logic and edge cases
- **Test Coverage**: Focus on testing complex logic and edge cases rather than aiming for 100% coverage
- **R Dependency**: Tests require R installation for compilation verification

## Code Style and Development Guidelines

### General Principles

1. **Nullability**: All parameters, fields, and return types are non-null by default. Use `@Nullable` annotation explicitly when nulls are allowed.
2. **Immutability**: Prefer immutable data structures when possible. Small OR simple data structures should be immutable, large AND complex data structures should be mutable.
   - Record fields should be Guava immutable collections. Methods may return implicitly immutable collections (`List.of`, `toList()`, etc.) although the return type should be `@Unmodifiable`.
3. **Readonly:** Use `@Unmodifable` and `@UnmodifiableView` on method return types if they return immutable or readonly collections, except Guava immutable collections since (redundant).
4. **Records:** Use records whenever possible. Also, use record destructors whenever possible (`instanceof Foo(var foo, var _)`, not `instanceof Foo f`).
5. **Finality:** Classes should be final whenever possible.
6. **Fields**: Don't prefix fields with `this.` unless necessary due to name shadowing.
   - Initialize fields outside the constructor whenever possible (e.g. `private final Foo foo = new Foo()`).
7. **Getters**: Use record-style getters (`foo()`, not `getFoo()`). More generally, don't prefix a method with `get...` unless it runs a non-negligible computation every call.
8. **Types**: Use `var` whenever possible instead of specifying types unnecessarily.
9. **Conditionals:** Use `switch` instead of `if-else` (e.g. `switch (x) { case Foo(var foo, var _) -> ...; case Bar(var bar, var _) -> ...; }`, not `if (x instanceof Foo(var foo)) { ... } else if (x instanceof Bar(var bar)) { ... }`. Make switch statements exhaustive whenever possible.
10. **Comments**: Explain why something is done, not what is done. Avoid redundant or trivial comments.

### Documentation

1. **Javadoc**: All public classes, methods, and fields should have Javadoc comments unless trivial. Use Java 23+ Markdown Javadoc format.
2. **Package Documentation**: Each package should have a `package-info.java` file with a brief description.

### Code Organization

1. **Package Structure**: Organize code into packages based on functionality.
2. **Class Structure**: Order members logically:
   - Static fields
   - Instance fields
   - Constructors
   - Methods (grouped by functionality)
   - Nested classes

### Error Handling

1. **Exceptions**: Use unchecked exceptions whenever possible.
2. **Validation**: Validate method parameters and fail fast with appropriate exceptions. Don't check nullability since it's enforced by annotations.

### Code Quality Tools

- Google Java Format enforced via Spotless
  \- SpotBugs annotations for null safety (non-null by default)
- Pre-commit hooks run formatting automatically

### Development Notes

- The server maintains in-memory caches for both bytecode and native compilation results
- Compilation supports different optimization levels for both bytecode and native compilation
- R functions are identified by hash values for caching purposes
- The FIŘ system includes a type checker and optimization framework
- Protocol buffers define the gRPC service interface (`src/main/proto/`)

### More resources

- FIŘ syntax: <doc/FIR_SYNTAX.md>

### Important

- If the user asks to write tests and the implementation is buggy, fix the implementation and test that the bug is fixed.
