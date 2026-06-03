#? stdlib
`.onLoad` <- function (libname, pkgname) 
{
    where <- environment(sys.function())
    initMethodDispatch(where)
    .Call(C_R_set_method_dispatch, TRUE)
    setPrimitiveMethods("$", `$`, code = "reset", generic = getGeneric("$"), 
        mlist = NULL)
    assign(".methodsNamespace", where, where)
}
