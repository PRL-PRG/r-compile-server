#? stdlib
`getRcode.vignette` <- function (x, strict = TRUE, ...) 
{
    if (nzchar(p <- x$R)) {
        file.path(x$Dir, "doc", p)
    }
    else {
        (if (strict) 
            stop
        else warning)(gettextf("vignette %s has no R code", sQuote(x$Topic)), 
            call. = FALSE, domain = NA)
    }
}
