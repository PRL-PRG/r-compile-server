#? stdlib
`stop` <- function (..., call. = TRUE, domain = NULL) 
{
    if (...length() == 1L && inherits(..1, "condition")) {
        cond <- ..1
        if (nargs() > 1L) 
            warning("additional arguments ignored in stop()")
        message <- conditionMessage(cond)
        call <- conditionCall(cond)
        .Internal(.signalCondition(cond, message, call))
        .Internal(.dfltStop(message, call))
    }
    else .Internal(stop(call., .makeMessage(..., domain = domain)))
}

# Examples
iter <- 12
try(if(iter > 10) stop("too many iterations"))

tst1 <- function(...) stop("dummy error")
try(tst1(1:10, long, calling, expression))

tst2 <- function(...) stop("dummy error", call. = FALSE)
try(tst2(1:10, longcalling, expression, but.not.seen.in.Error))

