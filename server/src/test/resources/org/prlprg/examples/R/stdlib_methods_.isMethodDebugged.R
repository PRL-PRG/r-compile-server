#? stdlib
`.isMethodDebugged` <- function (fun, signature) 
{
    meth <- selectMethod(fun, signature)
    if (!is(meth, "MethodDefinitionWithTrace")) 
        return(FALSE)
    bd <- body(meth)
    if (isRematched(meth)) {
        is(bd[[3L]], "{") && identical(bd[[3L]][[2L]][1L], quote(.doTrace())) && 
            identical(bd[[3L]][[2L]][[2L]][1:3], quote(trace(.local, 
                tracer = browser)))
    }
    else {
        fstexp <- bd
        while (is(bd, "{")) bd <- bd[[2L]]
        identical(bd[1:2], quote(.doTrace(browser())))
    }
}
