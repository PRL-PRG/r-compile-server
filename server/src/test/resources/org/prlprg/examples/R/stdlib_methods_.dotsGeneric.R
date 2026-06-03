#? stdlib
`.dotsGeneric` <- function (f) 
{
    if (!is(f, "genericFunction")) 
        f <- getGeneric(f)
    if (!is(f, "genericFunction") || !identical(f@signature, 
        "...")) 
        stop("argument f must be a generic function with signature \"...\"")
    def <- .standardGenericDots
    body(def) <- eval(call("substitute", body(def), list(.dotsMethod = as.name(f@generic))))
    environment(def) <- environment(f)
    assign("standardGeneric", def, envir = environment(f))
    f
}
