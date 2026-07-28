#? stdlib
`makeStandardGeneric` <- function (f, fdef) 
{
    fgen <- fdef
    body(fgen) <- substitute(standardGeneric(FNAME), list(FNAME = f))
    if (typeof(fdef) != "closure") {
        fgen <- genericForBasic(f)
        message(gettextf("making a generic for special function %s", 
            sQuote(f)), domain = NA)
        setPrimitiveMethods(f, fdef, "reset", fgen, NULL)
    }
    fgen
}
