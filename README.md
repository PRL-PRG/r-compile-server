# [R](https://r-project.org) compile-Server

## Setup (development)

### Clone the repository

```sh
git clone --recursive git@github.com:PRL-PRG/r-compile-server.git
```

or

```sh
git clone --recursive https://github.com/PRL-PRG/r-compile-server.git
```

This shall clone also the submodules. If you forgot to clone the submodules, you can run

```sh
git submodule update --init --recursive
```

### From dev container

To quickly get started with development, you can use the project's [Dev Container](https://containers.dev/). We strongly recommend using IntelliJ.

To run the IntelliJ inside the dev container:

- Install [Docker](https://docs.docker.com/get-docker/)
- Install [Jetbrains Gateway](https://www.jetbrains.com/remote-development/gateway/)
- Launch JetBrains Gateway and select "Create Dev Container", set "Git Repository" to "https://github.com/PRL-PRG/r-compile-server.git" or "git@github.com/PRL-PRG/r-compiler-server.git", then click "Build Container and Continue".
  - The process is also described at https://www.jetbrains.com/help/idea/connect-to-devcontainer.html#start_from_gateway.
- If everything works, the dev container should build and you can click "Continue" to launch the project. If not, see [troubleshooting](#troubleshooting).

### Manually

If the dev container is too slow, you can also setup on the host machine. To do so, must install the following dependencies:

- **Java 22 and Maven 3**
  - IntelliJ will automatically install these. If not, you can download a Java 22 binary from https://adoptium.net/temurin/releases/?version=22, and Maven from https://maven.apache.org/download.cgi.
  - If you are using IntelliJ, navigate to "Project Structure > Project" and make sure the **SDK* is set to **a JDK of version 22** (e.g. "openjdk-22"). If not, click the dropdown and "Download JDK", then select any JDK of version 22.

## Commands

- Run `make setup` to initialize the dependencies
  - It installs GNU-R in `external/R`.
- Run `make setup-git` to install Git Hooks. The commit hook formats, the pre-push hook runs tests and static analyses.
- Build with `make` or `mvn package`
- Test (no static analyses) with `make test` or `mvn test`
- Test and static anaylses with `make check` or `mvn verify`
- Format with `make format` or `mvn spotless:apply`. This requires to have `npm` installed.

## Troubleshooting

- **Problem:** In Maven, `Could not find or initialize a local git repository. A repository is required`
  - This happens if you downloaded a ZIP instead of `git clone`-ing. The solution is to run `git init`. Note that you won't be able to push changes or create a PR since it's not a proper git repo.
- **Problem:** In Maven, `Fatal error compiling: invalid target release: 22`
  - **Solution:** ensure you have a Java 22 JDK installed, then run `JAVA_HOME=<path to JDK 22> mvn …`
    - e.g. if using IntelliJ on macOS, openJDK 22, set `JAVA_HOME=~/Library/Java/JavaVirtualMachines/openjdk-22/Contents/Home`
    - In the devcontainer, `JAVA_HOME=/usr/lib/jvm/jdk`
- **Problem:** some R symbols are not visible when JIT-compiling.
  - **Solution:** make sure that `external/R` is up-to-date with `git submodule update --init --recursive` and check if it is the right branch, `RSH-4-3-2`. 

If you have a different issue than the above, [report it on GitHub](https://github.com/PRL-PRG/r-compile-server/issues/new/choose).

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
