#? stdlib
`contrasts` <- function (x, contrasts = TRUE, sparse = FALSE) 
{
    if (is.logical(x)) 
        x <- factor(x, levels = c(FALSE, TRUE))
    if (!is.factor(x)) 
        stop("contrasts apply only to factors")
    if (!contrasts) 
        return(.Diag(levels(x), sparse = sparse))
    ctr <- attr(x, "contrasts")
    if ((NL <- is.null(ctr)) || is.character(ctr)) {
        if (NL) 
            ctr <- getOption("contrasts")[[if (is.ordered(x)) 
                2L
            else 1L]]
        ctrfn <- get(ctr, mode = "function", envir = parent.frame())
        if (useSparse <- isTRUE(sparse)) {
            if (!(useSparse <- any("sparse" == names(formals(ctrfn))))) 
                warning(sprintf("contrast function '%s' does not support 'sparse = TRUE'", 
                  ctr), domain = NA)
        }
        ctr <- if (useSparse) 
            ctrfn(levels(x), contrasts = contrasts, sparse = sparse)
        else ctrfn(levels(x), contrasts = contrasts)
    }
    ctr
}
