#? stdlib
`print.POSIXct` <- function (x, tz = "", usetz = TRUE, max = NULL, ...) 
{
    if (is.null(max)) 
        max <- getOption("max.print", 9999L)
    FORM <- if (missing(tz)) 
        function(z) format(z, usetz = usetz)
    else function(z) format(z, tz = tz, usetz = usetz)
    if (max < length(x)) {
        print(FORM(x[seq_len(max)]), max = max + 1, ...)
        cat(" [ reached 'max' / getOption(\"max.print\") -- omitted", 
            length(x) - max, "entries ]\n")
    }
    else if (length(x)) 
        print(FORM(x), max = max, ...)
    else cat(class(x)[1L], "of length 0\n")
    invisible(x)
}
