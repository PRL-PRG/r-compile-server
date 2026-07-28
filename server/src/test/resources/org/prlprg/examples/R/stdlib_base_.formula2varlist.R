#? stdlib
`.formula2varlist` <- function (formula, data, warnLHS = TRUE, ignoreLHS = warnLHS) 
{
    if (!inherits(formula, "formula")) 
        stop("'formula' must be a formula")
    if (!is.list(data) && !is.environment(data)) 
        data <- as.data.frame(data)
    if (length(formula) == 3) {
        if (warnLHS) {
            if (ignoreLHS) 
                warning("Unexpected LHS in 'formula' has been ignored.")
            else warning("Unexpected LHS in 'formula' has been combined with RHS.")
        }
        if (ignoreLHS) 
            formula <- formula[-2]
    }
    if (length(formula[[2]]) > 1L && formula[[2]][[1]] == quote(list)) {
        ans <- eval(formula[[2]], data, environment(formula))
    }
    else {
        fterms <- stats::terms(formula)
        ans <- eval(attr(fterms, "variables"), data, environment(formula))
        names(ans) <- attr(fterms, "term.labels")
    }
    ans
}
