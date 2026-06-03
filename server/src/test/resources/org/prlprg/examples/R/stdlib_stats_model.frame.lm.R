#? stdlib
`model.frame.lm` <- function (formula, ...) 
{
    dots <- list(...)
    nargs <- dots[match(c("data", "na.action", "subset"), names(dots), 
        0)]
    if (length(nargs) || is.null(formula$model)) {
        fcall <- formula$call
        m <- match(c("formula", "data", "subset", "weights", 
            "na.action", "offset"), names(fcall), 0L)
        fcall <- fcall[c(1L, m)]
        fcall$drop.unused.levels <- TRUE
        fcall[[1L]] <- quote(stats::model.frame)
        fcall$xlev <- formula$xlevels
        fcall$formula <- terms(formula)
        fcall[names(nargs)] <- nargs
        env <- environment(formula$terms) %||% parent.frame()
        eval(fcall, env)
    }
    else formula$model
}
