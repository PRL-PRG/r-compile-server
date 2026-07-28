#? stdlib
`.debugMethod` <- function (fun, text = "", condition = NULL, signature, once = FALSE) 
{
    stopifnot(is.null(condition), identical(text, ""))
    if (is.primitive(fun)) 
        fun <- getGeneric(fun)
    if (!is(fun, "genericFunction")) 
        stop("Function must be an S4 generic")
    if (isdebugged(fun, signature = signature)) 
        return(invisible(NULL))
    m <- selectMethod(fun, signature)
    bd <- body(m)
    isrematch <- isRematched(m)
    if (isrematch) 
        bd <- body(bd[[2L]][[3L]])
    at <- if (is(bd, "{")) 
        2L
    else numeric()
    tracer <- if (once) {
        if (isrematch) 
            quote(quote({
                untrace(sys.frame(2L)$.Generic, signature = sys.frame(2L)$.target)
                browser()
            }))
        else quote(quote({
            untrace(.Generic, signature = .target)
            browser()
        }))
    }
    else {
        quote(browser)
    }
    eval(substitute(trace(fun, tracer, signature = signature, 
        print = TRUE, at = at), list(tracer = tracer)))
    invisible(NULL)
}
