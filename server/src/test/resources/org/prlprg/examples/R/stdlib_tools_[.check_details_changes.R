#? stdlib
`[.check_details_changes` <- function (x, i, j, drop = FALSE) 
{
    if (((nargs() - !missing(drop)) == 3L) && (length(i) == 1L) && 
        any(!is.na(match(i, c("==", "!=", "<", "<=", ">", ">="))))) {
        levels <- c("", "OK", "NOTE", "WARNING", "ERROR", "FAILURE")
        encode <- function(s) {
            s <- sub("\n.*", "", s)
            s[is.na(match(s, levels))] <- ""
            ordered(s, levels)
        }
        old <- encode(x$Old)
        new <- encode(x$New)
        i <- do.call(i, list(old, new))
    }
    NextMethod()
}
