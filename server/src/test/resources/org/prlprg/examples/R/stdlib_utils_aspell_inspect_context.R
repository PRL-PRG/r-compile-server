#? stdlib
`aspell_inspect_context` <- function (x) 
{
    x <- split(x, x$File)
    y <- Map(function(f, x) {
        lines <- readLines(f, warn = FALSE)[x$Line]
        cbind(f, x$Line, x$Column, substring(lines, 1L, x$Column - 
            1L), x$Original, substring(lines, x$Column + nchar(x$Original)))
    }, names(x), x)
    y <- data.frame(do.call(rbind, y), stringsAsFactors = FALSE)
    if (!length(y)) 
        y <- list2DF(rep.int(list(character()), 6L))
    names(y) <- c("File", "Line", "Column", "Left", "Original", 
        "Right")
    class(y) <- c("aspell_inspect_context", "data.frame")
    y
}
