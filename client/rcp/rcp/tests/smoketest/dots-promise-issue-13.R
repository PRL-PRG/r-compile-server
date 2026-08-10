# Heap corruption when a JIT frame forces a `...` promise (issue #13).
# See https://github.com/PRL-PRG/rcp/issues/13
#
# WHAT THE BUG IS
#
# The issue was filed against `rcp_cmppkg` (a use-after-unprotect on `obj`), but
# the reduced case in its second comment compiles a *single* closure with
# `rcp_cmpfun` and still segfaults, so the surviving defect is not in cmppkg's
# namespace patching. It is this: a compiled closure that collects `...` forces
# those promises from inside the JIT frame, and whatever ran while the promise
# was being forced came back to a corrupted heap. The reported crash was
#
#     18: list2(...)                         <- inside compiled ggplot2::ggproto
#     17: loadNamespace(x)                   <- a dots promise pulled in sf
#     13: runHook(".onLoad", ...)
#      1: R_ut_parse(u)                      <- units' C code, *** segfault ***
#
# so the corruption is silent when it happens and only surfaces once some
# unrelated C code walks the damaged heap.
#
# WHY THIS VERSION HAS NO DEPENDENCIES
#
# ggplot2, sf and units were incidental. They supplied three things, each of
# which base R supplies too:
#
#   ggproto  -> a closure that collects `...`. Reproduced by `proto` below,
#               kept the same shape as ggproto up to the point of the crash
#               (new.env, collect dots, list2env). rlang's `list2()` is an
#               `.External2`; base's `list()` is a BUILTIN, so `collect_dots`
#               isolates the plain-dots path and `proto` mirrors the original.
#   coord_sf -> a caller that hands ggproto a *formal default* as a dots
#               argument, so the promise is still unforced when the compiled
#               frame gets it. Reproduced by `make_proto`'s `datum = heavy()`.
#   sf/units -> arbitrary R and C code, including a namespace .onLoad and a
#               native entry point, running while that promise is forced.
#               Reproduced by `heavy()`: it loads base-R namespaces that are
#               absent from a --vanilla session (each one dyn.loads a DLL and
#               runs R_init_*), churns allocations, and calls gc(full = TRUE).
#
# gc(full = TRUE) is a better detector than waiting for a segfault in somebody
# else's C code: it marks and sweeps the whole heap, so a node whose header the
# JIT frame damaged is visited rather than merely hoped to be visited. It runs
# both inside the promise (the position units' R_ut_parse occupied) and after
# the compiled call returns.
#
# Set RCP_TEST_GCTORTURE=<step> to run the calls under gctorture2(<step>) -- a GC
# every <step> allocations, so the window is hit deterministically rather than by
# luck (step 1 is a GC per allocation). It is off by default only because the
# cost is nonlinear; per iteration, roughly:
#
#     step 1    ~150s      exhaustive, every window
#     step 10    ~18s
#     step 100    ~2s      about the same as the whole default run
#     step 1000   ~0.5s
#
# so RCP_TEST_GCTORTURE=100 is affordable if this ever needs to be tightened,
# and step 1 is the one to reach for when chasing a suspected regression. Without
# torture the test relies on the natural GC pressure the churn below creates,
# which is the same thing the original ggplot2 reproduction depended on.

library(rcp)

gc_step <- suppressWarnings(as.integer(Sys.getenv("RCP_TEST_GCTORTURE", "0")))
if (is.na(gc_step)) gc_step <- 0L
torture <- gc_step > 0L

# Under torture every allocation is orders of magnitude dearer, so trade breadth
# for depth: fewer iterations and less churn, but a GC in every window.
iterations <- as.integer(Sys.getenv("RCP_TEST_ITERATIONS",
                                    if (torture) "2" else "25"))
churn <- if (torture) 5L else 50L

# Base-R namespaces a --vanilla session has NOT loaded, so loadNamespace() below
# does real work: dyn.load of the package DLL, R_init_<pkg> registration and
# .onLoad. These are base-priority packages, present in every R installation,
# and none of them opens a device or otherwise disturbs the session.
heavy_namespaces <- c("splines", "tools", "stats4", "parallel")
pending <- setdiff(heavy_namespaces, loadedNamespaces())

# ---------------------------------------------------------------------------
# The compiled closures
# ---------------------------------------------------------------------------

# Minimal form: nothing but collecting `...`, to isolate the dots path from the
# rest of ggproto's body.
collect_dots <- function(...) list(...)

# ggproto's shape, trimmed to what precedes the crash. The original then does
# substitute(`_inherit`) / parent.frame() / eval() to resolve a superclass, but
# the reported segfault happened inside the dots collection, before any of that,
# so the superclass machinery is left out rather than reproduced.
proto <- function(`_class` = NULL, ...) {
    e <- new.env(parent = emptyenv())
    members <- list(...)
    if (length(members) != sum(nzchar(names(members)))) {
        stop("all members must be named")
    }
    if (length(members) > 0) {
        list2env(members, envir = e)
    }
    class(e) <- c(`_class`, "proto")
    e
}

collect_dots <- rcp::rcp_cmpfun(collect_dots, list(name = "collect_dots"))
proto <- rcp::rcp_cmpfun(proto, list(name = "proto"))

# A regression test that quietly stopped exercising the JIT would be worse than
# a failing one, so insist the compilation actually took.
stopifnot(rcp::rcp_is_compiled(collect_dots))
stopifnot(rcp::rcp_is_compiled(proto))

# ---------------------------------------------------------------------------
# The work done while the dots promise is forced
# ---------------------------------------------------------------------------

heavy <- function(i) {
    # One namespace per early iteration: the first load of each is the expensive,
    # C-executing one, and spreading them out varies where GC lands relative to
    # the dots handling. tryCatch so a build missing an optional base package
    # degrades to the allocation churn instead of failing the test.
    if (i <= length(pending)) {
        tryCatch(loadNamespace(pending[[i]]), error = function(e) NULL)
    }
    # Allocation churn, then a full mark-and-sweep of the heap -- all still
    # inside the compiled frame, which is where units' R_ut_parse ran.
    junk <- lapply(seq_len(churn), function(k) as.character(seq_len(100)))
    gc(full = TRUE)
    sum(lengths(junk))
}

# What heavy() returns, so the checks below can confirm the forced value came
# back through the JIT frame intact.
expected_datum <- churn * 100L

# coord_sf's shape: `datum` is a formal default here, and it is passed straight
# into the compiled function's `...`, so it reaches the JIT frame unforced.
make_proto <- function(i, datum = heavy(i)) {
    proto("Base", datum = datum, ndiscr = 100L, expand = TRUE)
}

make_list <- function(i, datum = heavy(i)) {
    collect_dots(datum = datum, ndiscr = 100L)
}

# ---------------------------------------------------------------------------
# Run it
# ---------------------------------------------------------------------------

if (torture) {
    cat(sprintf("gctorture2(step = %d) enabled\n", gc_step))
    gctorture2(gc_step)
}

for (i in seq_len(iterations)) {
    obj <- make_proto(i)
    stopifnot(is.environment(obj))
    stopifnot(inherits(obj, "proto"))
    stopifnot(identical(obj$ndiscr, 100L))
    stopifnot(isTRUE(obj$expand))
    # The forced promise's value has to survive the trip through the JIT frame.
    stopifnot(identical(obj$datum, expected_datum))
    stopifnot(setequal(ls(obj), c("datum", "ndiscr", "expand")))

    lst <- make_list(i)
    stopifnot(identical(lst, list(datum = expected_datum, ndiscr = 100L)))

    # If the JIT frame damaged a node, this is where it gets walked.
    gc(full = TRUE)
}

if (torture) {
    gctorture2(0L)
}

cat("OK\n")
