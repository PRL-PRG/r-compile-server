# Project Guidelines

## Style Guidelines

### General Principles

1. **Nullability**: All parameters, fields, and return types are non-null by default. Use `@Nullable` annotation explicitly when nulls are allowed.
2. **Immutability**: Prefer immutable data structures when possible. In general, small OR simple data-structures should be immutable, large AND complex data-structures should be mutable.
3. **Types**: Don't specify types when unnecessary. Use `var` whenever possible.
4. **Comments**: Use comments to explain why something is done, not what is done. Avoid redundant comments that restate the code. Avoid trivial comments.
5. **Fields**: Don't prefix fields with `this.` in functions unless necessary due to name shadowing.
   6**Code Formatting**: Follow Google's Java style guide.

### Documentation

1. **Javadoc**: All public classes, methods, and fields should have Javadoc comments unless they're trivial. Like with comments, Javadoc shouldn't state the obvious. Use Java 23+ Markdown Javadoc.
2. **Package Documentation**: Each package should have a package-info.java file with a brief description.

### Code Organization

1. **Package Structure**: Organize code into packages based on functionality.
2. **Class Structure**: Within a class, organize members in a logical order:

- Static fields
- Instance fields
- Constructors
- Methods (grouped by functionality)
- Nested classes

### Error Handling

1. **Exceptions**: Use unchecked exceptions whenever possible.
2. **Validation**: Validate method parameters and fail fast with appropriate exceptions. Don't check nullability because it's enforced by annotations.

### Testing

1. **Unit Tests**: Write unit tests using JUnit 5.
2. **Test Coverage**: Focus on testing complex logic and edge cases.

### Build and Dependencies

1. **Build System**: Use Maven for building the project.
2. **Dependencies**: Minimize external dependencies. The project uses:
   - Google Guava for immutable collections and utilities
   - gRPC for communication
   - JUnit 5 for testing
