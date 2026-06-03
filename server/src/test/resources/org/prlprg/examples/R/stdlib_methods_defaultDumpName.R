#? stdlib
`defaultDumpName` <- function (generic, signature) 
{
    if (missing(signature)) 
        paste(generic, "R", sep = ".", collapse = ".")
    else paste(generic, paste(signature, collapse = "."), "R", 
        sep = ".")
}
