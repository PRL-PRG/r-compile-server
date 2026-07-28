#? stdlib
`try` <- function (expr, silent = FALSE, outFile = getOption("try.outFile", 
    default = stderr())) 
{
    tryCatch(expr, error = function(e) {
        call <- conditionCall(e)
        if (!is.null(call)) {
            if (identical(call[[1L]], quote(doTryCatch))) 
                call <- sys.call(-4L)
            dcall <- deparse(call, nlines = 1L)
            prefix <- paste("Error in", dcall, ": ")
            LONG <- 75L
            sm <- strsplit(conditionMessage(e), "\n")[[1L]]
            w <- 14L + nchar(dcall, type = "w") + nchar(sm[1L], 
                type = "w")
            if (is.na(w)) 
                w <- 14L + nchar(dcall, type = "b") + nchar(sm[1L], 
                  type = "b")
            if (w > LONG) 
                prefix <- paste0(prefix, "\n  ")
        }
        else prefix <- "Error : "
        msg <- paste0(prefix, conditionMessage(e), "\n")
        .Internal(seterrmessage(msg[1L]))
        if (!silent && isTRUE(getOption("show.error.messages"))) {
            cat(msg, file = outFile)
            .Internal(printDeferredWarnings())
        }
        invisible(structure(msg, class = "try-error", condition = e))
    })
}

# Examples
## this example will not work correctly in example(try), but
## it does work correctly if pasted in
options(show.error.messages = FALSE)
try(log("a"))
print(.Last.value)
options(show.error.messages = TRUE)

## alternatively,
print(try(log("a"), TRUE))

## run a simulation, keep only the results that worked.
set.seed(123)
x <- stats::rnorm(50)
doit <- function(x)
{
    x <- sample(x, replace = TRUE)
    if(length(unique(x)) > 30) mean(x)
    else stop("too few unique points")
}
## alternative 1
res <- lapply(1:100, function(i) try(doit(x), TRUE))
## alternative 2

unlist(res[sapply(res, function(x) !inherits(x, "try-error"))])

