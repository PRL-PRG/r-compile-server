#? stdlib
`naprint.exclude` <- function (x, ...) 
sprintf(ngettext(n <- length(x), "%d observation deleted due to missingness", 
    "%d observations deleted due to missingness"), n)
