package org.prlprg.bc;

import com.google.common.collect.Streams;
import java.util.stream.Stream;
import org.junit.jupiter.api.TestInstance;
import org.junit.jupiter.params.provider.Arguments;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.StrSXP;
import org.prlprg.sexp.VecSXP;
import org.prlprg.util.Strings;

// FIXME: this is ugly! refactor
@TestInstance(TestInstance.Lifecycle.PER_CLASS)
public interface StdlibClosuresSource {
  private static String stdlibFunctionNamesSource() {
    return """
        list_functions <- function(name) {
            namespace <- getNamespace(name)
            p <- function(x) {
              f <- get(x, envir=namespace)
              is.function(f) && identical(environment(f), namespace)
            }
            Filter(p, ls(namespace, all.names = TRUE))
        }

        pkgs <- c("base", "tools", "utils", "graphics", "methods", "stats")
        do.call(c, sapply(pkgs, function(x) paste0(x, ":::`", list_functions(x), "`")))
        """;
  }

  private static String stdlibFunctionNameSexpAndCodesSource() {
    var functionNames = "names <- {" + stdlibFunctionNamesSource() + "}";
    var getValuesFromNames =
        """
        lapply(names, function(name) {
            namespaceName <- sub(":::`.*`", "", name)
            functionName <- sub(".*:::`(.*)`", "\\\\1", name)
            namespace <- getNamespace(namespaceName)
            fun <- get(functionName, envir=namespace)
            funCode <- deparse(fun)
            list(name, fun, funCode)
        })
        """;
    return functionNames + "\n" + getValuesFromNames;
  }

  default Stream<Arguments> stdlibFunctionNames() {
    var sexp = (StrSXP) eval(stdlibFunctionNamesSource());

    return Streams.stream(sexp.iterator()).map(Arguments::of);
  }

  default Stream<Arguments> stdlibFunctionNameSexpsAndCodes() {
    var sexp = (VecSXP) eval(stdlibFunctionNameSexpAndCodesSource());

    return Streams.stream(sexp.iterator())
        .map(
            arguments -> {
              var list = (VecSXP) arguments;
              return Arguments.of(
                  ((StrSXP) list.get(0)).get(0),
                  list.get(1),
                  ((StrSXP) list.get(2)).stream().collect(Strings.joining("\n")));
            });
  }

  SEXP eval(String source);
}
