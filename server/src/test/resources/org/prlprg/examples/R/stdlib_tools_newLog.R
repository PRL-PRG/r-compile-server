#? stdlib
`newLog` <- function (filename = "") 
{
    con <- if (nzchar(filename)) 
        file(filename, "wt")
    else 0L
    Log <- new.env(parent = emptyenv())
    Log$con <- con
    Log$filename <- filename
    Log$stars <- "*"
    Log$errors <- 0L
    Log$warnings <- 0L
    Log$notes <- 0L
    Log
}
