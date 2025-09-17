ARG JAVA_VERSION=22
ARG MAVEN_VERSION=3.9.11
ARG LLVM_VERSION=17
ARG BASE_IMAGE=ubuntu-24.04

FROM mcr.microsoft.com/devcontainers/base:$BASE_IMAGE

# default to UTF-8 file.encoding
ENV LANG=en_US.UTF-8

# this is weird, but without this, the default value would not be used.
ARG JAVA_VERSION
ARG MAVEN_VERSION
ARG LLVM_VERSION

# install OpenJDK
RUN curl -fsSL https://packages.adoptium.net/artifactory/api/gpg/key/public | gpg --dearmor | tee /etc/apt/trusted.gpg.d/adoptium.gpg > /dev/null \
  && echo "deb https://packages.adoptium.net/artifactory/deb $(awk -F= '/^VERSION_CODENAME/{print$2}' /etc/os-release) main" | tee /etc/apt/sources.list.d/adoptium.list \
  && apt update -y \
  && apt install -y temurin-$JAVA_VERSION-jdk \
  && ln -s "$(which java | xargs readlink -f | xargs dirname | xargs dirname)" /opt/java

# install maven
RUN mkdir -p /opt/maven \
 && curl -fsSL -o /tmp/apache-maven.tar.gz "https://dlcdn.apache.org/maven/maven-3/$MAVEN_VERSION/binaries/apache-maven-$MAVEN_VERSION-bin.tar.gz" \
 && tar -xzf /tmp/apache-maven.tar.gz -C /opt/maven --strip-components=1 \
 && rm -f /tmp/apache-maven.tar.gz

ENV MAVEN_HOME=/opt/maven
ENV JAVA_HOME=/opt/java
ENV PATH="$PATH:$MAVEN_HOME/bin"

# install support for building client:
# - the bundled R
# - the rsh R package
RUN apt update -y \
  && apt install -y \
    bear \
    build-essential \
    ca-certificates \
    gdb \
    gfortran \
    libbz2-dev \
    libcairo2-dev \
    libcurl4-openssl-dev \
    libgrpc++-dev \
    libgtk2.0-dev \
    libicu-dev \
    libjpeg-dev \
    liblzma-dev \
    libpango1.0-dev \
    libpng-dev \
    libreadline-dev \
    libssl-dev \
    libtiff5-dev \
    libx11-dev \
    libxt-dev \
    libxxhash-dev \
    libzmq3-dev \
    protobuf-compiler \
    protobuf-compiler-grpc \
    rr \
    software-properties-common \
    xvfb \
    zlib1g-dev

# install LLVM
RUN curl -fsSL -o /opt/llvm.sh https://apt.llvm.org/llvm.sh \
  && chmod +x /opt/llvm.sh \
  && /opt/llvm.sh "$LLVM_VERSION"
