#? stdlib
`.standardGenericDots` <- function (name) 
{
    env <- sys.frame(sys.parent())
    dots <- eval(quote(list(...)), env)
    classes <- unique(unlist(lapply(dots, methods:::.class1)))
    method <- methods:::.selectDotsMethod(classes, .MTable, .AllMTable)
    if (is.null(method)) 
        stop(gettextf("no method or default matching the \"...\" arguments in %s", 
            deparse(sys.call(sys.parent()), nlines = 1)), domain = NA)
    mc <- match.call(sys.function(sys.parent()), sys.call(sys.parent()), 
        expand.dots = FALSE, envir = parent.frame(2))
    args <- names(mc)[-1L]
    mc[args] <- lapply(args, as.name)
    names(mc)[names(mc) == "..."] <- ""
    mc[[1L]] <- quote(.dotsMethod)
    assign(name, method, env)
    eval(mc, env)
}
