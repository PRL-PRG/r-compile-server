#? stdlib
`read_check_log` <- function (log, drop = TRUE, ...) 
{
    lines <- readLines(log, warn = FALSE, ...)
    if (drop) {
        pos <- grep("^Current CRAN status:", lines, perl = TRUE, 
            useBytes = TRUE)
        if (length(pos) && lines[pos <- (pos[1L] - 1L)] == "") {
            lines <- lines[seq_len(pos - 1L)]
        }
    }
    lines
}
