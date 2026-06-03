#? stdlib
`summaryLog` <- function (Log) 
{
    messageLog(Log, "DONE")
    message("")
    counts <- c(ERROR = Log$errors, WARNING = Log$warnings, NOTE = Log$notes)
    counts <- counts[counts > 0L]
    if (!length(counts)) 
        printLog(Log, "Status: OK\n")
    else {
        printLog(Log, sprintf("Status: %s\n", paste(sprintf("%d %s%s", 
            counts, names(counts), ifelse(counts > 1L, "s", "")), 
            collapse = ", ")))
        message(sprintf("See\n  %s\nfor details.", sQuote(Log$filename)))
    }
    message("")
}
