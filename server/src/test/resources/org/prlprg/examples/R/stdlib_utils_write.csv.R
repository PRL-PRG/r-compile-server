#? stdlib
`write.csv` <- function (...) 
{
    Call <- match.call(expand.dots = TRUE)
    for (argname in c("append", "col.names", "sep", "dec", "qmethod")) if (!is.null(Call[[argname]])) 
        warning(gettextf("attempt to set '%s' ignored", argname), 
            domain = NA)
    rn <- eval.parent(Call$row.names)
    Call$append <- NULL
    Call$col.names <- if (is.logical(rn) && !rn) 
        TRUE
    else NA
    Call$sep <- ","
    Call$dec <- "."
    Call$qmethod <- "double"
    Call[[1L]] <- quote(utils::write.table)
    eval.parent(Call)
}
