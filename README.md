# [R](https://r-project.org) compile-Server

See [`doc/design-decisions.md`](./doc/design-decisions.md) for project setup and why every choice was made.

In this project, all values are considered non-null unless specified as `@Nullable`. To enforce this, every package must
have a `package-info.json` with the following code:

```java
@ParametersAreNonnullByDefault
@FieldsAreNonNullByDefault
@ReturnTypesAreNonNullByDefault
package org.prlprg.<package-name>;

import org.prlprg.util.FieldsAreNonNullByDefault;
import org.prlprg.util.ReturnTypesAreNonNullByDefault;

import javax.annotation.ParametersAreNonnullByDefault;
```

In IntelliJ you can simply copy `package-info.json` from any package into the new one and it will create this.

## Commands

- Run `make setup` to install Git Hooks. The commit hook formats, the pre-push hook runs tests and static analyses.
- Build with `make` or `mvn package`
- Test (no static analyses) with `make test` or `mvn test`
- Test and static anaylses with `make check` or `mvn verify`
- Format with `make format` or `mvn spotless:apply`
