#? stdlib
`.signatureFromCall` <- function (fdef, expr, envir, doEval = TRUE) 
{
    args <- formals(fdef)
    call <- match.call(fdef, expr, expand.dots = FALSE)
    args[names(call[-1L])] <- call[-1L]
    if ("..." %in% names(call)) 
        args$... <- args$...[[1L]]
    sigNames <- fdef@signature
    sigClasses <- rep.int("missing", length(sigNames))
    names(sigClasses) <- sigNames
    for (arg in sigNames) {
        argExpr <- methods::elNamed(args, arg)
        if (!missing(argExpr) && !is.null(argExpr)) {
            simple <- (is.character(argExpr) || is.name(argExpr))
            if (doEval || !simple) {
                argVal <- try(eval(argExpr, envir))
                if (methods::is(argVal, "try-error")) 
                  stop(gettextf("error in trying to evaluate the expression for argument %s (%s)", 
                    sQuote(arg), deparse(argExpr)), domain = NA)
                sigClasses[[arg]] <- class(argVal)[1L]
            }
            else sigClasses[[arg]] <- as.character(argExpr)
        }
    }
    sigClasses
}
