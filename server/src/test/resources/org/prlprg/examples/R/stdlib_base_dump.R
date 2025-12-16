#? stdlib
`dump` <- function (list, file = "dumpdata.R", append = FALSE, control = "all", 
    envir = parent.frame(), evaluate = TRUE) 
{
    if (is.character(file)) {
        ex <- sapply(list, exists, envir = envir)
        if (!any(ex)) 
            return(invisible(character()))
        if (nzchar(file)) {
            file <- file(file, if (append) 
                "a"
            else "w")
            on.exit(close(file), add = TRUE)
        }
        else file <- stdout()
    }
    opts <- .deparseOpts(control)
    .Internal(dump(list, file, envir, opts, evaluate))
}

# Examples
x <- 1; y <- 1:10
fil <- tempfile(fileext=".Rdmped")
dump(ls(pattern = '^[xyz]'), fil)
print(.Last.value)
unlink(fil)

