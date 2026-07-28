plugins {
  java
  id("org.jetbrains.intellij.platform") version "2.11.0"
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
  toolchain {
    languageVersion = JavaLanguageVersion.of(24)
  }
}

dependencies {
  intellijPlatform {
    intellijIdea("2025.3")
  }
}

tasks.withType<JavaCompile>().configureEach {
  options.encoding = "UTF-8"
  options.release.set(17)
}
