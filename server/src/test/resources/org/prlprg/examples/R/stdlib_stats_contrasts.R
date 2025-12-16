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

# Examples
utils::example(factor)
fff <- ff[, drop = TRUE]  # reduce to 5 levels.
contrasts(fff) # treatment contrasts by default
contrasts(C(fff, sum))
contrasts(fff, contrasts = FALSE) # the 5x5 identity matrix

contrasts(fff) <- contr.sum(5); contrasts(fff)  # set sum contrasts
contrasts(fff, 2) <- contr.sum(5); contrasts(fff)  # set 2 contrasts
# supply 2 contrasts, compute 2 more to make full set of 4.
contrasts(fff) <- contr.sum(5)[, 1:2]; contrasts(fff)

\donttest{## using sparse contrasts: % useful, once model.matrix() works with these :
ffs <- fff
contrasts(ffs) <- contr.sum(5, sparse = TRUE)[, 1:2]; contrasts(ffs)
stopifnot(all.equal(ffs, fff))
contrasts(ffs) <- contr.sum(5, sparse = TRUE); contrasts(ffs)
}
