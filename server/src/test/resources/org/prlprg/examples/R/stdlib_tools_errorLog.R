#? stdlib
`errorLog` <- function (Log, ...) 
{
    resultLog(Log, "ERROR")
    text <- paste0(...)
    if (length(text) && nzchar(text)) 
        printLog(Log, ..., "\n")
    Log$errors <- Log$errors + 1L
}
