#? stdlib
`terms.formula` <- function (x, specials = NULL, abb = NULL, data = NULL, neg.out = TRUE, 
    keep.order = FALSE, simplify = FALSE, ..., allowDotAsName = FALSE) 
{
    if (!missing(abb)) 
        .Deprecated(msg = gettextf("setting '%s' in terms.formula() is deprecated", 
            "abb"))
    if (!missing(neg.out)) 
        .Deprecated(msg = gettextf("setting '%s' in terms.formula() is deprecated", 
            "neg.out"))
    if (simplify) 
        fixFormulaObject <- function(object) {
            Terms <- terms(object)
            tmp <- attr(Terms, "term.labels")
            ind <- grep("|", tmp, fixed = TRUE)
            if (length(ind)) 
                tmp[ind] <- paste("(", tmp[ind], ")")
            if (length(ind <- attr(Terms, "offset"))) {
                tmp2 <- as.character(attr(Terms, "variables"))[-1L]
                tmp <- c(tmp, tmp2[ind])
            }
            rhs <- if (length(tmp)) 
                paste(tmp, collapse = " + ")
            else "1"
            if (!attr(Terms, "intercept")) 
                rhs <- paste(rhs, "- 1")
            if (length(form <- formula(object)) > 2L) {
                res <- formula(paste("lhs ~", rhs))
                res[[2L]] <- form[[2L]]
                res
            }
            else formula(paste("~", rhs))
        }
    if (!is.null(data) && !is.environment(data) && !is.data.frame(data)) 
        data <- as.data.frame(data, optional = TRUE)
    terms <- .External(C_termsform, x, specials, data, keep.order, 
        allowDotAsName)
    if (simplify) {
        a <- attributes(terms)
        terms <- fixFormulaObject(terms)
        attributes(terms) <- a
    }
    environment(terms) <- environment(x)
    if (!inherits(terms, "formula")) 
        class(terms) <- c(oldClass(terms), "formula")
    terms
}

# Examples
