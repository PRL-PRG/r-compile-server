#? stdlib
`noteLog` <- function (Log, text = "") 
{
    resultLog(Log, "NOTE")
    if (nzchar(text)) 
        printLog(Log, text, "\n")
    Log$notes <- Log$notes + 1L
}
