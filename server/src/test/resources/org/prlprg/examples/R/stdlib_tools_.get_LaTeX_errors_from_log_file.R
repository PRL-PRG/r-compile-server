#? stdlib
`.get_LaTeX_errors_from_log_file` <- function (con, n = 4L) 
{
    lines <- readLines(con, warn = FALSE)
    if (any(ind <- is.na(nchar(lines, allowNA = TRUE)))) 
        lines[ind] <- iconv(lines[ind], "", "", sub = "byte")
    pos <- grep("(^! |^!pdfTeX error:|:[0123456789]+:.*[Ee]rror)", 
        lines)
    if (!length(pos)) 
        return(character())
    mapply(function(from, to) paste(lines[from:to], collapse = "\n"), 
        pos, pmin(pos + n, c(pos[-1L], length(lines))))
}
