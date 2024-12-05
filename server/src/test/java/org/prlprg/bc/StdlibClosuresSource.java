package org.prlprg.bc;

import com.google.common.collect.Streams;
import java.util.stream.Stream;
import org.junit.jupiter.api.TestInstance;
import org.junit.jupiter.params.provider.Arguments;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.StrSXP;

// FIXME: this is ugly! refactor
@TestInstance(TestInstance.Lifecycle.PER_CLASS)
public interface StdlibClosuresSource {

  default Stream<Arguments> stdlibFunctionsList() {
    StrSXP base =
        (StrSXP)
            eval(
                """
                                        list_functions <- function(name) {
                                            namespace <- getNamespace(name)
                                            p <- function(x) {
                                              f <- get(x, envir=namespace)
                                              is.function(f) && identical(environment(f), namespace)
                                            }
                                            Filter(p, ls(namespace, all.names = TRUE))
                                        }

                                        pkgs <- c("base", "tools", "utils", "graphics", "methods", "stats")
                                        funs <- sapply(pkgs, function(x) paste0(x, ":::`", list_functions(x), "`"))
                                        do.call(c, funs)
                                        """);

    return Streams.stream(base.iterator()).map(Arguments::of);
  }

  SEXP eval(String source);
}
