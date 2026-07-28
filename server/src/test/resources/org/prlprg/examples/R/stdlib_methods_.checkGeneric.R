#? stdlib
`.checkGeneric` <- function (what, where) 
{
    .checkFun <- function(x) {
        maybe <- if (!is.null(f <- get0(x, where))) 
            is.function(f)
        else FALSE
        if (maybe) 
            maybe <- is(f, "genericFunction") || (length(grep("UseMethod", 
                deparse(f))) > 0) || is.primitive(f)
        maybe
    }
    vapply(what, .checkFun, NA)
}
