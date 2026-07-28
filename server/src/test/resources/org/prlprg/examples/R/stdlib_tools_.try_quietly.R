#? stdlib
`.try_quietly` <- function (expr) 
{
    oop <- options(warn = 1)
    on.exit(options(oop))
    outConn <- file(open = "w+")
    sink(outConn, type = "output")
    sink(outConn, type = "message")
    yy <- tryCatch(withRestarts(withCallingHandlers(expr, error = {
        function(e) invokeRestart("grmbl", e, sys.calls())
    }), grmbl = function(e, calls) {
        n <- length(sys.calls())
        calls <- calls[-seq.int(length.out = n - 1L)]
        calls <- rev(calls)[-c(1L, 2L)]
        tb <- lapply(calls, deparse)
        stop(conditionMessage(e), "\nCall sequence:\n", paste(.eval_with_capture(traceback(tb))$output, 
            collapse = "\n"), call. = FALSE)
    }), error = identity, finally = {
        sink(type = "message")
        sink(type = "output")
        close(outConn)
    })
    if (inherits(yy, "error")) 
        stop(yy)
    yy
}
