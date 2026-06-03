#? stdlib
`print.MethodsFunction` <- function (x, byclass = attr(x, "byclass"), ...) 
{
    if (length(values <- format(x, byclass = byclass, ...))) {
        print(noquote(values))
        cat("see '?methods' for accessing help and source code\n")
    }
    else cat("no methods found\n")
    invisible(x)
}
