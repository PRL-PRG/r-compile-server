#? stdlib
`model.frame.aovlist` <- function (formula, data = NULL, ...) 
{
    call <- match.call()
    oc <- attr(formula, "call")
    Terms <- attr(formula, "terms")
    rm(formula)
    indError <- attr(Terms, "specials")$Error
    errorterm <- attr(Terms, "variables")[[1 + indError]]
    form <- update(Terms, paste(". ~ .-", deparse1(errorterm, 
        backtick = TRUE), "+", deparse1(errorterm[[2L]], backtick = TRUE)))
    nargs <- as.list(call)
    oargs <- as.list(oc)
    nargs <- nargs[match(c("data", "na.action", "subset"), names(nargs), 
        0L)]
    args <- oargs[match(c("data", "na.action", "subset"), names(oargs), 
        0L)]
    args[names(nargs)] <- nargs
    args$formula <- form
    env <- environment(Terms) %||% parent.frame()
    fcall <- c(list(quote(stats::model.frame)), args)
    eval(as.call(fcall), env)
}
