# Project setup and why every choice was made

**Disclaimer:** some of this information may be outdated. Since the project is in early development, we're still changing the environment semi-frequently (last update commit e0d123a1f2806eb92920d4f7fb18032fb55a4f9c, date August 2 2024).

## Overview

- Language: Java or some other language? I think we decided on **Java** unless some new information comes up.
- License: **GPL3**, Ř is GPL2. Do we need to distribute via GPL2 because of GNU-R's copyleft?
- I have configuration for IntelliJ in the git repo, people using other IDEs should add their configuration as well.
- Build System: [Maven](https://maven.apache.org), [Gradle](https://gradle.org/), Makefile, or something else? **Maven**
  - Maven is one of the most widely used Java build systems, along with Gradle and [Ant](https://ant.apache.org/). I've heard the best things about Maven; some people prefer Gradle but most seem to prefer Maven, everyone hates Ant.
  - Personally, I've used Gradle and Maven and prefer Maven. Gradle's build scripts are very hard to understand and it seems like there are incantations to add certain plugins and such. Maven sometimes has this problem but less so, it's more straightforward. Unfortunately with both there's a situation where people just copy/paste code to add plugins and dependencies, and sometimes propagate old/bad ways to do this.
  - Another downside with Maven is that it's verbose. There's an [IntelliJ plugin](https://plugins.jetbrains.com/plugin/10580-laconic-pom-for-maven) which helps with this. Gradle is less verbose, but is written in Groovy (obscure DSL), whereas Maven is just XML.
  - Copilot says Gradle is better for multi-module projects. Our project is fairly simple and definitely not multi-repo.
  - Both Gradle and Maven are extremely well-maintained and produce reliable builds (at least compared to CMake, I've downloaded old Gradle/Maven projects with old dependencies and they built and ran completely fine, whereas almost every time I download old CMake projects they fail 🙁).
  - As for Makefiles and `javac`, I think that even though our project is simple and doesn't use many plugins, there are still a few: in particular [JUnit](https://junit.org/junit5/) (`maven-surefire-plugin`) and [pmd](https://pmd.github.io). Moreover, most people don't use Makefiles in Java projects, and I don't know if IDE analysis works with them (dependencies are fine, I know you can include JARs and IntelliJ lets you add them to the classpath so it can resolve them).
    - I did create a Makefile which invokes the corresponding Maven command, so `make`, `make test`, and `make clean` will still work.

### Dependencies

- Plain Unix sockets, [ZeroMQ](https://zeromq.org/), [gRPC](https://grpc.io/), or some other high-level communication library? **gRPC**
  - Plain sockets
    - Benefit: simpler (one less dependency, point of failure, may be faster but probably not), well-supported by C and Java
    - Drawback: probably too low-level, other libraries probably have some features we'd need to implement manually.
      - My worry with sockets is that there is annoying low-level stuff like polling for asynchronous responses or fetching a fixed number of bytes at a time which we'll need to do manually, but would be abstracted by any decent higher-level library.
      - Or that we may need something like authentication or an alternative protocol, which is seamlessly implemented by a higher-level library.
      - No built-in authentication or encryption, but we could do something really simple.
  - ZeroMQ
    - Benefits:
      - No extra low-level complexity, using ZeroMQ is just bind/connect and then send/receive messages.
      - Well-tested, well-maintained API exists for C, C++, Java, and most other popular languages.
      - Security (authentication and then you can send data encrypted). I think security is important when you're sending native code which may be executed.
      - Multiple protocols: `tcp`, `ipc`, `sockm5`. Do we want to try some new UDP-based protocol which is faster than TCP?
    - Non-benefits:
      - Existing implementation in my work in Ř, but it would be extremely easy to replace with any other high-level protocol.
      - Communication patterns, e.g. PUB/SUB. However, this is really an argument against ZeroMQ, because it seems to be the main (and some people say only) benefit over alternatives, and I can't think of a case where we'd use anything other than REQ/REP (which is AFAIK the closest thing to "no pattern")
    - Drawbacks:
      - People seem to recommend alternatives more often (though nobody said ZeroMQ is particularly bad, it mainly seems like other libraries are better)
      - One more dependency
  - gRPC
    - Benefits:
      - Least boilerplate it seems, because Remote Procedure Calls are exactly what we are doing
      - Well-tested, well-maintained API exists for C++, Java, and some other popular languages (though not plain C)
      - Security via "pluggable authentication"
      - HTTP/2 support
    - Benefit or drawback? Uses **protocol buffers**, which I've heard good things about, but may be added complexity.
    - Drawbacks:
      - Most high-level. ZeroMQ is a simple abstraction over sockets, this seems more complicated. It looks like you need to define a schema for whatever data you send/receive, not necessary with ZeroMQ or native sockets.
      - I don't know much about this, so I need to research it more to see if there are other drawbacks.
  - Ultimately we decided to use gRPC, because the communication is requests/responses.
- [Google Guava](https://github.com/google/guava) for immutable collections and utilities. I think this is the only
  utility library we'll need
- No testing library, [JUnit 4](https://junit.org/junit4/), [JUnit 5](https://junit.org/junit5/), or something else? **JUnit 5**
  - We don't have many unit tests in RIR, just testing R code snippets (which we should also have here), and I don't think we should unit test everything ("100% test coverage"). But I think we should have more unit tests, and have a dedicated library.
  - JUnit 4
    - Benefit: more popular, more documentation, more StackOverflow answers, more tutorials
    - Drawback: older, less features, less modern
  - JUnit 5
    - Benefit: newer, more features, more modern
    - Drawback: less popular, less documentation, less StackOverflow answers, less tutorials
  - Other libraries are also probably not the right choice, because JUnit is so common and I don't see a case where other libraries have any benefit, but I also don't know of any other libraries
  - Ultimately I chose JUnit5 because, though maybe less than JUnit4, it's still very supported and documented

### Plugins

- Bug-finding / bad-code tools? **[pmd 7](https://pmd.github.io) with modified rules**
  - We had initially went with [spotbugs](https://spotbugs.github.io) and PMD's default ruleset. However, they add many unnecessary warnings, and enforce conventions that we determine make the code worse. We also have inspections within the IDE which are tested regularly, so we don't really need PMD's rules except those not covered by IntelliJ.
  - Nonetheless, we need some automated bug detection, because Java has a lot of footguns (like nulls, `==` instead of `equals`), and redundant/deprecated ways of doing things (e.g. anonymous class instead of lambda, POJO instead of record).
- The project is also setup so that everything is assumed non-null by default, and exceptions need an explicit `@Nullable` annotation. This has worked well.
- Code formatting? **[google-java-format](https://google.github.io/styleguide/javaguide.html) via [spotless](https://github.com/diffplug/spotless#readme)**
  - Google's style guide is supported by nearly every tool and IDE including IntelliJ, I don't know of any other common style
  - An alternative is Maven's [checkstyle](https://maven.apache.org/plugins/maven-checkstyle-plugin/), but spotless applies the changes for you and support formatters for other languages
  - I have this set to run pre-commit

### Git / Github

- Pre-commit and pre-push? **Formatting only**
  - We had a pre-push hook to run tests and not push on fail, but it was too annoying. The tests run on the CI, so it's unnecessary.
- CI/CD? **[Github Actions](https://docs.github.com/en/actions)**.
  - The downside of GitHub actions is that it can't be reproduced locally or in another environment. However, all the github actions do is run Maven commands (more generally, we'll never have a test-suite that can't be run by a simple command), most of the tests run in the JDK, and we have a [devcontainer](https://containers.dev); so in practice, everything is already reproducible.
  - Hosted on Github, but if necessary, we can self-host the runner on one of the Prague servers. [Documentation for self-hosted runners](https://docs.github.com/en/actions/hosting-your-own-runners/managing-self-hosted-runners/about-self-hosted-runners), in particular [difference between Github-hosted and self-hosted](https://docs.github.com/en/actions/hosting-your-own-runners/managing-self-hosted-runners/about-self-hosted-runners#differences-between-github-hosted-and-self-hosted-runners).

### Potential stuff

- [Project Lombok](https://projectlombok.org/)? **No**
  - I think it's mostly superseded by the new Java features like records.
  - The main thing Lombok has which records don't, is that Java records have to be simple: they can't have settable fields or inherit other classes (they can, however, have custom methods and inherit interfaces). However, I don't know how often we'd get a situation where we have a type which extends another class or needs a settable field, composition or some `Mutable<Field>` isn't OK, *and* we still want this type to have a non-neglibable amount of boilerplate covered by records (trivial constructor, trivial `toString`, structural equality, anything else records provide?)
  - Most of Lombok's other annotations are either covered by Java 21 (`var`, `@Cleanup` via `Cleaner`), covered by IntelliJ/spotbugs annotations (`@NonNull`, `@Cleanup` via `AutoCloseable`), or not useful (`val`, `@Synchronized`, `@SneakyThrows`).
  - Also concerns with Lombok adding complexity, Lombok becoming unmaintained, Lombok not being supported by IDEs (although at least IntelliJ supports it), Lombok being confusing.
