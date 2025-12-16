#? stdlib
`.traceback` <- function (x = NULL, max.lines = getOption("traceback.max.lines", 
    getOption("deparse.max.lines", -1L))) 
{
    stopifnot(length(max.lines) <= 1)
    .is.positive.intlike <- function(x) is.numeric(x) && length(x) == 
        1L && !is.na(x) && as.integer(x) >= 0L
    if (int.x <- .is.positive.intlike(x)) 
        x <- .Internal(traceback(x))
    if (int.x || (is.null(x) && !is.null(x <- get0(".Traceback", 
        envir = baseenv()))) || is.pairlist(x) || is.list(x)) {
        valid.max.lines <- .is.positive.intlike(max.lines)
        nlines <- if (valid.max.lines) 
            max.lines + 1L
        else max.lines
        for (i in seq_along(x)) {
            srcref <- attr(x[[i]], "srcref")
            if (typeof(x[[i]]) == "language") 
                x[[i]] <- deparse(x[[i]], nlines = nlines)
            if (valid.max.lines && length(x[[i]]) > max.lines) {
                x[[i]] <- x[[i]][seq_len(max.lines)]
                attr(x[[i]], "truncated") <- TRUE
            }
            attr(x[[i]], "srcref") <- srcref
        }
    }
    x
}
