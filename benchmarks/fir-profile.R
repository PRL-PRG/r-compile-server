local({
    if (!requireNamespace("rcp", quietly = TRUE)) {
        stop("Install rcp in the vendored R library", call. = FALSE)
    }
    status <- compiler::cmpfun(getFromNamespace("rsh_fir_status", "rsh"))
    drain <- compiler::cmpfun(rsh::rsh_fir_drain)
    tier <- compiler::cmpfun(rsh::rsh_jit_tier)
    threshold <- as.integer(Sys.getenv("RCS_RBENCH_THRESHOLD"))
    warmups <- as.integer(Sys.getenv("RCS_RBENCH_WARMUPS"))
    calls <- as.integer(commandArgs(trailingOnly = TRUE)[[2L]])
    completed <- 0L
    quiet <- 0L
    before <- NULL
    before_tier <- NULL
    settled <- NULL

    prepare <- function() {
        port <- as.integer(Sys.getenv("RCS_RBENCH_PORT"))
        if (typeof(.GlobalEnv$execute) != "closure") {
            stop("Expected the benchmark to define an execute closure", call. = FALSE)
        }
        rsh::rsh_fir_connect("127.0.0.1", port)
        compiler::enableJIT(2L)
        rsh::rsh_jit_enable(threshold)
    }

    before_iteration <- compiler::cmpfun(function() {
        if (completed <= warmups) {
            drain()
            after <- status()
            after_tier <- tier(.GlobalEnv$execute)
            if (after[["failed"]] != 0) {
                stop("FIŘ compilation or code load failed during warmup", call. = FALSE)
            }
            if (identical(before_tier, "optimized") && after_tier == "optimized" &&
                identical(after, before) && after[["outstanding"]] == 0) {
                quiet <<- quiet + 1L
            } else {
                quiet <<- 0L
            }
            if (completed == warmups) {
                if (quiet <= threshold) {
                    stop(sprintf(
                        "FIŘ did not settle after %d warmup calls (tier %s). Increase --warmups.",
                        warmups, after_tier
                    ), call. = FALSE)
                }
                compiler::enableJIT(0L)
                settled <<- after
            }
            before <<- after
            before_tier <<- after_tier
        }
        completed <<- completed + 1L
    })

    verify <- compiler::cmpfun(function() {
        if (completed != calls) {
            stop("Expected one pre-timing flush per harness iteration", call. = FALSE)
        }
        if (is.null(settled) || !identical(status(), settled) ||
            tier(.GlobalEnv$execute) != "optimized") {
            stop("FIŘ compilation activity during measurement", call. = FALSE)
        }
    })

    assign("rbench_prepare", prepare, envir = .GlobalEnv)
    assign(".rbench_fir_before_iteration", before_iteration, envir = .GlobalEnv)
    assign(".rbench_fir_verify", verify, envir = .GlobalEnv)
})
