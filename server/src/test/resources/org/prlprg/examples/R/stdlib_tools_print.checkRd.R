#? stdlib
`print.checkRd` <- function (x, minlevel = -Inf, ...) 
{
    fromParse <- startsWith(x, "prepare_Rd")
    x1 <- x[fromParse]
    x2 <- x[!fromParse]
    levs <- as.numeric(sub("^checkRd: \\(([-0123456789]+)(.*)", 
        "\\1", x2))
    xx <- if (minlevel > 0) 
        x2[levs >= minlevel]
    else c(x1, x2[levs >= minlevel])
    writeLines(unique(xx))
    invisible(x)
}
