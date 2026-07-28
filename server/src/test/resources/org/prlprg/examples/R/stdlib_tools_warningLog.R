#? stdlib
`warningLog` <- function (Log, text = "") 
{
    resultLog(Log, "WARNING")
    if (nzchar(text)) 
        printLog(Log, text, "\n")
    Log$warnings <- Log$warnings + 1L
}
