# Project setup and why every choice was made

## Overview

- Language: Java or some other language? I think we decided on **Java** unless some new information comes up.
- License: currently **GPL3**, Ř is GPL2. Do we need to distribute via GPL2 because of GNU-R's copyleft?
- I have configuration for IntelliJ in the git repo, people using other IDEs should add their configuration as well.
- Build System: [Maven](https://maven.apache.org), [Gradle](https://gradle.org/), Makefile, or something else? Currently
  **Maven**
  - Maven is one of the most widely used Java build systems, along with Gradle and [Ant](https://ant.apache.org/).
    I've
    heard the best things about Maven; some people prefer Gradle but most seem to prefer Maven, everyone hates Ant.
  - Personally, I've used Gradle and Maven and prefer Maven. Gradle's build scripts are very hard to understand and it
    seems like there are incantations to add certain plugins and such. Maven sometimes has this problem but less so,
    it's more straightforward. Unfortunately with both there's a situation where people just copy/paste code to add
    plugins and dependencies, and sometimes propagate old/bad ways to do this.
  - Another downside with Maven is that it's verbose. There's
    an [IntelliJ plugin](https://plugins.jetbrains.com/plugin/10580-laconic-pom-for-maven) which helps with this.
    Gradle
    is less verbose, but is written in Groovy (obscure DSL), whereas Maven is just XML.
  - Copilot says Gradle is better for multi-module projects. Our project is fairly simple and definitely not
    multi-repo.
  - Both Gradle and Maven are extremely well-maintained and produce reliable builds (at least compared to CMake, I've
    downloaded old Gradle/Maven projects with old dependencies and they built and ran completely fine, whereas almost
    every time I download old CMake projects they fail 🙁).
  - As for Makefiles and `javac`, I think that even though our project is simple and doesn't use many plugins, there
    are
    still a few: in particular [JUnit](https://junit.org/junit5/) (`maven-surefire-plugin`)
    and [SpotBugs](https://spotbugs.github.io). Moreover, most people don't use Makefiles in Java projects, and I
    don't
    know if IDE analysis works with them (dependencies are fine, I know you can include JARs and IntelliJ lets you add
    them to the classpath so it can resolve them).
    - I did create a Makefile which invokes the corresponding Maven command, so `make`, `make test`,
      and `make clean`
      will still work.

### Dependencies

- Plain Unix sockets, [ZeroMQ](https://zeromq.org/), [gRPC](https://grpc.io/), or some other high-level communication
  library? Currently **ZeroMQ**
  - Plain sockets
    - Benefit: simpler (one less dependency, point of failure, may be faster but probably not), well-supported by C
      and Java
    - Drawback: probably too low-level, other libraries probably have some features we'd need to implement manually.
      - My worry with sockets is that there is annoying low-level stuff like polling for asynchronous responses or
        fetching a fixed number of bytes at a time which we'll need to do manually, but would be abstracted by any
        decent higher-level library.
      - Or that we may need something like authentication or an alternative protocol, which is seamlessly
        implemented by
        a higher-level library.
      - No built-in authentication or encryption, but we could do something really simple.
  - ZeroMQ
    - Benefits:
      - No extra low-level complexity, using ZeroMQ is just bind/connect and then send/receive messages.
      - Well-tested, well-maintained API exists for C, C++, Java, and most other popular languages.
      - Security (authentication and then you can send data encrypted). I think security is important when you're
        sending native code which may be executed.
      - Multiple protocols: `tcp`, `ipc`, `sockm5`. Do we want to try some new UDP-based protocol which is faster
        than TCP?
    - Non-benefits:
      - Existing implementation in my work in Ř, but it would be extremely easy to replace with any other
        high-level
        protocol.
      - Communication patterns, e.g. PUB/SUB. However, this is really an argument against ZeroMQ, because it seems
        to be the main (and some people say only) benefit over alternatives, and I can't think of a case where we'
        d use
        anything other than REQ/REP (which is AFAIK the closest thing to "no pattern")
    - Drawbacks:
      - People seem to recommend alternatives more often (though nobody ZeroMQ is particularly bad, it mainly
        seems like
        other libraries are better)
      - One more dependency
  - gRPC
    - Benefits:
      - Least boilerplate it seems, because Remote Procedure Calls are exactly what we are doing
      - Well-tested, well-maintained API exists for C++, Java, and some other popular languages (though not plain
        C)
      - Security via "pluggable authentication"
      - HTTP/2 support
    - Benefit or drawback? Uses **protocol buffers**, which I've heard good things about, but may be added
      complexity.
    - Drawbacks:
      - Most high-level. ZeroMQ is a simple abstraction over sockets, this seems more complicated. It looks like
        you
        need to define a schema for whatever data you send/receive, not necessary with ZeroMQ or native sockets.
      - I don't know much about this, so I need to research it more to see if there are other drawbacks.
  - Ultimately ZeroMQ, because we may have more complicated communication than simple requests/responses.
- [Google Guava](https://github.com/google/guava) for immutable collections and utilities. I think this is the only
  utility library we'll need
- No testing library, [JUnit 4](https://junit.org/junit4/), [JUnit 5](https://junit.org/junit5/), or something else?
  Currently **JUnit 5**
  - We don't have many unit tests in RIR, just testing R code snippets (which we should also have here), and I don't
    think we should unit test everything ("100% test coverage"). But I think we should have more unit tests, and have
    a
    dedicated library.
  - JUnit 4
    - Benefit: more popular, more documentation, more StackOverflow answers, more tutorials
    - Drawback: older, less features, less modern
  - JUnit 5
    - Benefit: newer, more features, more modern
    - Drawback: less popular, less documentation, less StackOverflow answers, less tutorials
  - Other libraries are also probably not the right choice, because JUnit is so common and I don't see a case where
    other libraries have any benefit, but I also don't know of any other libraries
  - Ultimately I chose JUnit5 because, though maybe less than JUnit4, it's still very supported and documented

### Plugins

- Bug-finding / bad-code tools? Currently **[spotbugs](https://spotbugs.github.io) and [pmd](https://pmd.github.io)**
  - Maintenance status
    - spotbugs is the fork of findbugs which is old but AFAIK not maintained anymore. spotbugs has an upcoming
      version
      and commits this week, last release was December 12
    - pmd is maintained by Apache
  - Purpose
    - spotbugs checks bytecode. It supports `@NonNull` and other annotations
    - pmd checks sourcecode. It checks for misc things like unused variables and try-with-resources (and cpd which
    - checks for duplicate code). I believe spotbugs has some of these checks but not all (at least no duplicate
      code).
      [List of PMD rules applied by default](https://docs.pmd-code.org/pmd-doc-7.0.0-rc4/pmd_rules_java.html)
    - IntelliJ also supports annotations and detects bugs. My only goal is to get all of IntelliJ's checks to be
      covered
      by these tools, so that people using other IDEs will get the same warnings I do. IntelliJ does a *lot* of
      static
      analysis on Java and some of its checks are quite complex, so I think if all of them are covered, it will be
      good
      enough.
  - Compatibility with Java 21
    - spotbugs: I believe so [(closed Github issue)](https://github.com/spotbugs/spotbugs/issues/2567). Maybe there
      are
      some bugs with the new features. but I haven't found any
    - pmd: Only the latest version, 7.0.0-rc4, which is extremely new (it's supposed to be officially released soon
      but
      right now is only a "release candidate"). It's also a major
      refactor. [Github milestone is (as of this document last update) "94% complete" with open issues, they seem to be mostly cleanup but there are a few bugs and false positives/negatives](https://github.com/pmd/pmd/milestone/19).
  - The downside of these bug-finding tools is that we don't want to enforce dumb conventions which
    waste our time and actually cause us to write worse code (e.g. unnecessarily abstracting some code which is better
    duplicated, because the duplicated code is more readable and/or only coincidentally so). We should disable any
    checks which are annoying, and if they come up frequently enough, disable them globally.
    - However, even though it's not as bad as C++, I think Java has a lot of footguns (like nulls, `==` instead
      of `equals`), and redundant/deprecated ways of doing things (e.g. anonymous class instead of lambda, POJO
      instead
      of record), so I think having these tools in the first place is a net positive.
  - Currently I have these set to run pre-push
- I tried to set it up so that everything without the `@Nullable` annotation is assumed non-null by the IDE by default,
  but won't generate runtime checks. For whatever reason this isn't well-supported, some people say they need it but
  others don't think it's necessary. Let me know
  what everyone else thinks and if anyone has issues with this.
- Code formatting? Currently **[google-java-format](https://google.github.io/styleguide/javaguide.html)
  via [spotless](https://github.com/diffplug/spotless#readme)**
  - Google's style guide is supported by nearly every tool and IDE including IntelliJ, I don't know of any other
    common
    style
  - An alternative is Maven's [checkstyle](https://maven.apache.org/plugins/maven-checkstyle-plugin/), but spotless
    applies the changes for you and support formatters for other languages
  - Currently I have this set to run pre-commit

### Git / Github

- Pre-commit and pre-push? Currently **simple shell scripts setup to run maven commands**
  - Currently the **formatter runs pre-commit, and the static analyses / tests run pre-push**.
    - Commits are more frequent and we might want to commit broken code. This is also what we've done in Ř (although
      currently Ř's formatter is broken because it's written in Python 2).
  - [pre-commit.com](https://pre-commit.com/) is very popular. The downside is that it's very abstracted, and I don't
    even think you can run local
    shell scripts, the hooks must be in some public repo. There's a repo I use (in fact the currently the only one)
    to run arbitrary Maven commands, so we could use it if we want some other commands provided by that repo, but
    currently we don't.
  - I prefer doing everything as Maven commands because it centralizes everything, instead of having many different
    scripts in different places, you just run all the tools trough maven.
    - The downside is that if we do anything really advanced, we need to either write a custom Maven plugin, or use
      something like [`exec-maven-plugin`](https://stackoverflow.com/a/3493919).
- CI/CD? Not set up yet, but I figure we'll just use **[Github Actions](https://docs.github.com/en/actions)** which run
  the Maven commands for CI.
  - Github lets you self-host the runner, so we can host on one of the Prague servers. There don't seem to be
    unreasonable restrictions which would make Gitlab
    better. [Documentation for self-hosted runners](https://docs.github.com/en/actions/hosting-your-own-runners/managing-self-hosted-runners/about-self-hosted-runners),
    in
    particular [difference between Github-hosted and self-hosted](https://docs.github.com/en/actions/hosting-your-own-runners/managing-self-hosted-runners/about-self-hosted-runners#differences-between-github-hosted-and-self-hosted-runners).

### Potential stuff

- [Project Lombok](https://projectlombok.org/)? Currently **no**
  - I think it's mostly superseded by the new Java features like records.
  - The main thing Lombok has which records don't, is that Java records have to be simple: they can't have settable
    fields or inherit other classes (they can, however, have custom methods and inherit interfaces). However, I don't
    know how often we'd get a situation where we have a type which extends another class or needs a settable field,
    composition or some `Mutable<Field>` isn't OK, *and* we still want this type to have a non-neglibable amount of
    boilerplate covered by records (trivial constructor, trivial `toString`, structural equality, anything else
    records
    provide?)
  - Most of Lombok's other annotations are either covered by Java 21 (`var`, `@Cleanup` via `Cleaner`), covered by
    IntelliJ/spotbugs annotations (`@NonNull`, `@Cleanup` via `AutoCloseable`), or not
    useful (`val`, `@Synchronized`, `@SneakyThrows`).
  - Also concerns with Lombok adding complexity, Lombok becoming unmaintained, Lombok not being supported by IDEs (
    although at least IntelliJ supports it), Lombok being confusing.
