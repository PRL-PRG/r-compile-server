#? stdlib
`commandArgs` <- function (trailingOnly = FALSE) 
{
    args <- .Internal(commandArgs())
    if (trailingOnly) {
        m <- match("--args", args, 0L)
        if (m) 
            args[-seq_len(m)]
        else character()
    }
    else args
}

# Examples
commandArgs()
## Spawn a copy of this application as it was invoked,
## subject to shell quoting issues
## system(paste(commandArgs(), collapse = " "))

