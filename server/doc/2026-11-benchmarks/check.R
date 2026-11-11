# Usage: Rscript check.R EXAMPLE.R MODULE_DIR
# Compare the benchmark call's value in the timed module (opt/fir2c/opt/opt: standalone, -O3) with
# its value under the AST interpreter. Prints one line: "OK", "OK (all.equal)", or "MISMATCH ...".
args <- commandArgs(trailingOnly = TRUE)
src <- args[[1]]; mod <- args[[2]]
line <- grep("^#\\? benchmark:", readLines(src, warn = FALSE), value = TRUE)[[1]]
call <- parse(text = sub("^#\\? benchmark:\\s*", "", line))[[1]]

quiet <- function(expr) { capture.output(v <- expr); v }

env <- new.env()
invisible(quiet(source(src, local = env, echo = FALSE)))
expected <- quiet(eval(call, env))

dyn.load(file.path(mod, "code.so"))
pool <- readRDS(file.path(mod, "bindings.rds"))
invisible(try(.Call("Rsh_initialize_runtime"), silent = TRUE))
invisible(.Call("Fir_fun_init_main", pool))
env <- new.env()
invisible(quiet(.Call("Fir_fun_from_r_main", env, pool)))
actual <- quiet(eval(call, env))

cat(if (identical(expected, actual)) "OK" else if (isTRUE(all.equal(expected, actual))) "OK (all.equal)"
    else paste("MISMATCH expected", substr(deparse1(expected), 1, 200),
               "got", substr(deparse1(actual), 1, 200)), "\n")
