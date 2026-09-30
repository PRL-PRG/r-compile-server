options(warn=1)

# read arguments if present
args <- commandArgs(TRUE)
if (length(args) > 0) {
  if (length(args) != 1) stop("Usage: eval <path>")
  path <- args[1]
}
# What `EvalQuery` defines before this (see it): the prefix of the module's C names, the port of
# the compile server its stubs ask for their versions (`NULL` for a standalone module), and how
# many times to call `main`.
if (!exists("prefix")) prefix <- ""
if (!exists("fir_port")) fir_port <- NULL
if (!exists("runs")) runs <- 1L

# A module with stubs needs the `rsh` package: the runtime (which the module doesn't bring, unlike
# a standalone one, so that there's one copy) and the connection to the compile server (see
# `server/doc/lazy-versions.md`). Deterministic, so that a version's first call runs the stub's
# fallback and every later one the compiled version, however long compiling takes.
if (!is.null(fir_port)) {
  loadNamespace("rsh")
  rsh::rsh_fir_connect("127.0.0.1", fir_port, deterministic=TRUE)
}

# Global (not local) if it has stubs: the code the server sends to replace them refers to the
# module's symbols.
dyn.load(paste0(path, "/code.so"), local=is.null(fir_port))
constantPool <- readRDS(paste0(path, "/bindings.rds"))

# Simulate runtime init from the compile client (suppress if FIŘ->C)
invisible(try(.Call("Rsh_initialize_runtime"), silent=TRUE))

# Simulate closure compile from the compile client
# (BC->C tests name the compiled function `Fir_...`)
invisible(.Call(paste0("Fir_", prefix, "fun_init_main"), constantPool))
# Define `main` in `globalenv()` so it doesn't capture the sourcing environment.
main <-
  eval(
    bquote(function() .Call(.(paste0("Fir_", prefix, "fun_from_r_main")), environment(), .(constantPool))),
    globalenv())

# Call the compiled closure
for (i in seq_len(runs)) {
  res <- main()
}

# Get performance counters, used by some BC->C tests (suppress if FIŘ->C)
pc <- tryCatch(.Call("Rsh_pc_get"), error = \(e) NULL)

# Get serialized feedback of all compiled closures (suppress if BC->C)
feedback <- tryCatch(.Call("Fir_serialized_feedback", constantPool), error = \(e) NULL)

# Everything the stubs asked for has to be answered before the module goes away (and before
# `EvalQuery` looks at what the server made of the module).
if (!is.null(fir_port)) {
  rsh::rsh_fir_drain()
}

dyn.unload(paste0(path, "/code.so"))

list(res, pc, feedback)
