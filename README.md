# [R](https://r-project.org) compile-Server

## Setup (development)

### From dev container

To quickly get started with development, you can use the project's [Dev Container](https://containers.dev/). We strongly recommend using IntelliJ.

To run the IntelliJ inside the dev container:

- Install [Docker](https://docs.docker.com/get-docker/)
- Install [Jetbrains Gateway](https://www.jetbrains.com/remote-development/gateway/)
- Launch JetBrains Gateway and select "Create Dev Container", set "Git Repository" to "https://github.com/PRL-PRG/r-compile-server.git" or "git@github.com/PRL-PRG/r-compiler-server.git", then click "Build Container and Continue".
  - The process is also described at https://www.jetbrains.com/help/idea/connect-to-devcontainer.html#start_from_gateway.
- If everything works, the dev container should build and you can click "Continue" to launch the project. If not, [open a GitHub issue](https://github.com/PRL-PRG/r-compile-server/issues/new/choose).

### Manually

If the dev container is too slow, you can also setup on the host machine. To do so, must install the following dependencies:

- **Java 22 and Maven 3**
  - IntelliJ will automatically install these. If not, you can download a Java 22 binary from https://adoptium.net/temurin/releases/?version=22, and Maven from https://maven.apache.org/download.cgi.
  - If you are using IntelliJ, navigate to "Project Structure > Project" and make sure the **SDK* is set to **a JDK of version 22** (e.g. "openjdk-22"). If not, click the dropdown and "Download JDK", then select any JDK of version 22.
- **GNU-R 4.3.2:** https://cloud.r-project.org/src/base/R-4/R-4.3.2.tar.gz
  - It has to be *exactly* 4.3.2 in order for bytecode tests to pass, because they check against precompiled bytecode.

## Commands

- Run `make setup` to install Git Hooks. The commit hook formats, the pre-push hook runs tests and static analyses.
- Build with `make` or `mvn package`
- Test (no static analyses) with `make test` or `mvn test`
- Test and static anaylses with `make check` or `mvn verify`
- Format with `make format` or `mvn spotless:apply`. This requires to have `npm` installed.

## Development Notes

In this project, all values are considered non-null unless specified as `@Nullable`.

To enforce this, every package must have a `package-info.json` with the following code:

```java
@ParametersAreNonnullByDefault
@FieldsAreNonNullByDefault
@ReturnTypesAreNonNullByDefault
package org.prlprg.<package-name>;

import org.prlprg.util.FieldsAreNonNullByDefault;
import org.prlprg.util.ReturnTypesAreNonNullByDefault;

import javax.annotation.ParametersAreNonnullByDefault;
```

In IntelliJ you can simply copy `package-info.json` from any package into the new one and it will automatically change the package path.