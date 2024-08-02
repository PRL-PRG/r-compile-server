# This Dockerfile uses separate build arguments instead of VARIANT
# TODO: Abstract distribution and version however much is possible.
#   The download URL doesn't make this easy.
# ARG TARGET_JAVA_DISTIBUTION=temurin
# ARG TARGET_JAVA_VERSION=22
ARG TARGET_GNUR_VERSION=4.3.2
ARG TARGET_DEBIAN_VERSION=bookworm
FROM mcr.microsoft.com/devcontainers/base:${TARGET_DEBIAN_VERSION}

USER root
# ARG TARGET_JAVA_DISTIBUTION
# ARG TARGET_JAVA_VERSION
ARG TARGET_GNUR_VERSION
ENV JAVA_HOME=/usr/lib/jvm/jdk
ENV PATH="${JAVA_HOME}/bin:${PATH}"
# Default to UTF-8 file.encoding
ENV LANG=en_US.UTF-8

# Install OpenJDK (Adoptium / temurin)
RUN arch="$(dpkg --print-architecture)" \
  && case "$arch" in \
		"amd64") \
			arch1="x64"; \
			;; \
		"arm64") \
			arch1="aarch64"; \
			;; \
		*) echo >&2 "error: unsupported architecture: '$arch'"; exit 1 ;; \
	esac \
  && jdkUrl="https://github.com/adoptium/temurin22-binaries/releases/download/jdk-22.0.2%2B9/OpenJDK22U-debugimage_${arch1}_linux_hotspot_22.0.2_9.tar.gz" \
  && wget --progress=dot:giga -O temurin.tar.gz "${jdkUrl}" \
  && wget --progress=dot:giga -O sha256.txt "${jdkUrl}.sha256.txt"

RUN sha256Text=$(cat sha256.txt) \
  && sha256=$(expr substr "${sha256Text}" 1 64) \
  && echo "${sha256} temurin.tar.gz" | sha256sum --strict --check - \
  && rm sha256.txt*

RUN mkdir -p "$JAVA_HOME"
RUN tar --extract \
		--file temurin.tar.gz \
		--directory "$JAVA_HOME" \
		--strip-components 1 \
		--no-same-owner
RUN rm temurin.tar.gz*

RUN ln -s ${JAVA_HOME} /docker-java-home
RUN ln -s ${JAVA_HOME} /usr/local/openjdk-${TARGET_JAVA_VERSION}

# Install GNU-R
# From https://cran.r-project.org/doc/manuals/r-release/R-admin.html#Essential-and-useful-other-programs-under-a-Unix_002dalike
ARG GNUR_DEPENDENCIES="build-essential gfortran libreadline-dev zlib1g-dev libbz2-dev liblzma-dev libpcre2-dev"

RUN gnurUrl="https://cloud.r-project.org/src/base/R-$(printf %.1s ${TARGET_GNUR_VERSION})/R-${TARGET_GNUR_VERSION}.tar.gz" \
  && wget --progress=dot:giga -O gnur.tar.gz "${gnurUrl}"

RUN mkdir -p /tmp/gnur
RUN tar --extract \
    --file gnur.tar.gz \
    --directory /tmp/gnur \
    --strip-components 1 \
    --no-same-owner
RUN rm gnur.tar.gz*

RUN apt-get update
RUN DEBIAN_FRONTEND=noninteractive apt-get -y install --no-install-recommends ${GNUR_DEPENDENCIES}

# `--disable-java` is because (for some reason, it's clearly set above) R can't find `JAVA_HOME`.
# We don't use the Java support in R, so for now, instead of fixing that issue we disable it.
RUN cd /tmp/gnur \
 && ./tools/rsync-recommended \
 && ./configure --prefix=/usr/local --disable-java --with-x=no \
 && make \
 && make install
RUN rm -rf /tmp/gnur

RUN apt-get -y remove --purge ${GNUR_DEPENDENCIES}
RUN DEBIAN_FRONTEND=noninteractive apt-get -y autoremove

# [Optional] Uncomment this section to install additional OS packages.
# RUN apt-get update && export DEBIAN_FRONTEND=noninteractive \
#     && apt-get -y install --no-install-recommends <your-package-list-here>
