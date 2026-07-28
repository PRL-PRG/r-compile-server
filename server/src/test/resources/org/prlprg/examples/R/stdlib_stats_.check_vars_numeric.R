#? stdlib
`.check_vars_numeric` <- function (mf) 
{
    mt <- attr(mf, "terms")
    mterms <- attr(mt, "factors")
    mterms <- rownames(mterms)[apply(mterms, 1L, function(x) any(x > 
        0L))]
    any(sapply(mterms, function(x) is.factor(mf[, x]) || !is.numeric(mf[, 
        x])))
}
