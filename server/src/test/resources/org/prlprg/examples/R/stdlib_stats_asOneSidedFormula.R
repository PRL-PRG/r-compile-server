#? stdlib
`asOneSidedFormula` <- function (object) 
{
    if ((mode(object) == "call") && (object[[1L]] == quote(`~`)) && 
        !inherits(object, "formula")) {
        object <- eval(object)
        environment(object) <- .GlobalEnv
    }
    if (inherits(object, "formula")) {
        if (length(object) != 2L) {
            stop(gettextf("formula '%s' must be of the form '~expr'", 
                deparse1(object)), domain = NA)
        }
        return(object)
    }
    ff <- call("~", switch(mode(object), name = , numeric = , 
        call = object, character = as.name(object), expression = object[[1L]], 
        stop(gettextf("'%s' cannot be of mode '%s'", deparse1(substitute(object)), 
            mode(object)), domain = NA)))
    class(ff) <- "formula"
    environment(ff) <- .GlobalEnv
    ff
}

# Examples
(form <- asOneSidedFormula("age"))
stopifnot(exprs = {
    identical(form, asOneSidedFormula(form))
    identical(form, asOneSidedFormula(as.name("age")))
    identical(form, asOneSidedFormula(expression(age)))
})
asOneSidedFormula(quote(log(age)))
asOneSidedFormula(1)

