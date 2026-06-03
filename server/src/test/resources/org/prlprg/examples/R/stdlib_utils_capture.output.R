#? stdlib
`capture.output` <- function (..., file = NULL, append = FALSE, type = c("output", 
    "message"), split = FALSE) 
{
    type <- match.arg(type)
    rval <- NULL
    closeit <- TRUE
    if (is.null(file)) 
        file <- textConnection("rval", "w", local = TRUE)
    else if (is.character(file)) 
        file <- file(file, if (append) 
            "a"
        else "w")
    else if (inherits(file, "connection")) {
        if (!isOpen(file)) 
            open(file, if (append) 
                "a"
            else "w")
        else closeit <- FALSE
    }
    else stop("'file' must be NULL, a character string or a connection")
    sink(file, type = type, split = split)
    on.exit({
        sink(type = type, split = split)
        if (closeit) close(file)
    })
    for (i in seq_len(...length())) {
        out <- withVisible(...elt(i))
        if (out$visible) 
            print(out$value)
    }
    on.exit()
    sink(type = type, split = split)
    if (closeit) 
        close(file)
    rval %||% invisible(NULL)
}

# Examples
require(stats)
glmout <- capture.output(summary(glm(case ~ spontaneous+induced,
                                     data = infert, family = binomial())))
glmout[1:5]
capture.output(1+1, 2+2)
capture.output({1+1; 2+2})



