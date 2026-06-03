#? stdlib
`print.DLLRegisteredRoutines` <- function (x, ...) 
{
    n <- lengths(x)
    x <- x[n > 0]
    n <- max(n)
    d <- list()
    sapply(names(x), function(id) {
        d[[id]] <<- rep.int("", n)
        names <- vapply(x[[id]], function(x) x$name, "")
        if (length(names)) 
            d[[id]][seq_along(names)] <<- names
        d[[paste(id, "numParameters")]] <<- rep.int("", n)
        names <- sapply(x[[id]], function(x) x$numParameters)
        if (length(names)) 
            d[[paste(id, "numParameters")]][seq_along(names)] <<- names
    })
    print(as.data.frame(d), ...)
    invisible(x)
}
