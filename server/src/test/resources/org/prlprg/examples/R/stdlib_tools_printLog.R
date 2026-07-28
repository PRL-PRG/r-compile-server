#? stdlib
`printLog` <- function (Log, ...) 
{
    quotes <- function(x) gsub("'([^']*)'", sQuote("\\1"), x)
    args <- lapply(list(...), quotes)
    do.call(cat, c(args, sep = ""))
    if (Log$con > 0L) 
        do.call(cat, c(args, sep = "", file = Log$con))
}
