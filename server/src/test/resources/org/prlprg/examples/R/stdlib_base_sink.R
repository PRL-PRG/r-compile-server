#? stdlib
`sink` <- function (file = NULL, append = FALSE, type = c("output", "message"), 
    split = FALSE) 
{
    type <- match.arg(type)
    if (type == "message") {
        if (is.null(file)) 
            file <- stderr()
        else if (!inherits(file, "connection") || !isOpen(file)) 
            stop("'file' must be NULL or an already open connection")
        if (split) 
            stop("cannot split the message connection")
        .Internal(sink(file, FALSE, TRUE, FALSE))
    }
    else {
        closeOnExit <- FALSE
        if (is.null(file)) 
            file <- -1L
        else if (is.character(file)) {
            file <- file(file, if (append) 
                "a"
            else "w")
            closeOnExit <- TRUE
        }
        else if (!inherits(file, "connection")) 
            stop("'file' must be NULL, a connection or a character string")
        .Internal(sink(file, closeOnExit, FALSE, split))
    }
}

# Examples
sink("sink-examp.txt")
i <- 1:10
outer(i, i)
sink()
unlink("sink-examp.txt")
\donttest{
## capture all the output to a file.
zz <- file("all.Rout", open = "wt")
sink(zz)
sink(zz, type = "message")
try(log("a"))
## revert output back to the console -- only then access the file!
sink(type = "message")
sink()
file.show("all.Rout", delete.file = TRUE)
}
