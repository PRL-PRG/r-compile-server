plugins {
  java
  id("org.jetbrains.intellij.platform") version "2.19.0"
}

group = "org.prlprg"
version = "0.1.0"

repositories {
  mavenCentral()

  intellijPlatform {
    defaultRepositories()
  }
}

java {
  // IntelliJ IDEA 2026.3 runs on Java 25.
  toolchain {
    languageVersion = JavaLanguageVersion.of(25)
  }
}

dependencies {
  intellijPlatform {
    create("IU", "2026.3")
    // Not in the core of 2026.3: `StructureAwareNavBarModelExtension`.
    bundledModule("intellij.platform.structureView")
  }
}

intellijPlatform {
  instrumentCode = false
  buildSearchableOptions = false
  pluginConfiguration {
    ideaVersion {
      untilBuild = provider { null }
    }
  }
}

tasks.withType<JavaCompile>().configureEach {
  options.encoding = "UTF-8"
}
