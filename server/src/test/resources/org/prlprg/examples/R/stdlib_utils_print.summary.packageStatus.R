#? stdlib
`print.summary.packageStatus` <- function (x, ...) 
{
    cat("\nInstalled packages:\n")
    cat("-------------------\n")
    for (k in seq_along(x$Libs)) {
        cat("\n*** Library ", names(x$Libs)[k], "\n", sep = "")
        print(x$Libs[[k]], ...)
    }
    cat("\n\nAvailable packages:\n")
    cat("-------------------\n")
    cat("(each package appears only once)\n")
    for (k in seq_along(x$Repos)) {
        cat("\n*** Repository ", names(x$Repos)[k], "\n", sep = "")
        print(x$Repos[[k]], ...)
    }
    invisible(x)
}
