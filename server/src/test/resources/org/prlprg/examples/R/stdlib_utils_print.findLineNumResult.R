#? stdlib
`print.findLineNumResult` <- function (x, steps = TRUE, ...) 
{
    if (!length(x)) 
        cat("No source refs found.\n")
    filename <- NULL
    line <- 0
    for (xi in x) {
        if (!identical(filename, xi$filename) || !identical(line, 
            xi$line)) {
            filename <- xi$filename
            line <- xi$line
            cat(filename, "#", line, ":\n", sep = "")
        }
        cat(" ", xi$name, if (steps) 
            paste(" step ", paste(xi$at, collapse = ","))
        else "", sep = "")
        if (!is.null(xi$signature)) 
            cat(" signature ", paste(xi$signature, collapse = ","), 
                sep = "")
        cat(" in ", format(xi$env), "\n", sep = "")
    }
    invisible(x)
}
