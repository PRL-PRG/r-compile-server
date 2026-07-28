#? stdlib
`resetGeneric` <- function (f, fdef = getGeneric(f, where = where), mlist = getMethodsForDispatch(fdef), 
    where = topenv(parent.frame()), deflt = finalDefaultMethod(mlist)) 
{
    if (!is(fdef, "genericFunction")) {
        stop(gettextf("error in updating S4 generic function %s; the function definition is not an S4 generic function (class %s)", 
            sQuote(f), dQuote(class(fdef))), domain = NA)
    }
    .updateMethodsInTable(fdef, attach = "reset")
    f
}
