#? stdlib
`warning` <- function (..., call. = TRUE, immediate. = FALSE, noBreaks. = FALSE, 
    domain = NULL) 
{
    if (...length() == 1L && inherits(..1, "condition")) {
        cond <- ..1
        if (nargs() > 1L) 
            cat(gettext("additional arguments ignored in warning()"), 
                "\n", sep = "", file = stderr())
        message <- conditionMessage(cond)
        call <- conditionCall(cond)
        withRestarts({
            .Internal(.signalCondition(cond, message, call))
            .Internal(.dfltWarn(message, call))
        }, muffleWarning = function() NULL)
        invisible(message)
    }
    else .Internal(warning(call., immediate., noBreaks., .makeMessage(..., 
        domain = domain)))
}

# Examples
oldopt <- options(warn = 1)
testit <- function() warning("testit")
testit() ## shows call
testit <- function() warning("problem in testit", call. = FALSE)
testit() ## no call
suppressWarnings(warning("testit"))
eigenval <- 10 ^ -stats::rnorm(1, mean = 6)
if(eigenval < 1.e-7) warning("system near singular")
options(oldopt)

