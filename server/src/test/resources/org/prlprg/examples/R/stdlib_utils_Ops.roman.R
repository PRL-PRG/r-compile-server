#? stdlib
`Ops.roman` <- function (e1, e2) 
{
    if (.Generic %in% c("+", "-", "*", "^", "%%", "%/%", "/")) {
        e1 <- .as.roman(e1, check.range = FALSE)
        e2 <- .as.roman(e2, check.range = FALSE)
        as.roman(NextMethod(.Generic))
    }
    else NextMethod(.Generic)
}
