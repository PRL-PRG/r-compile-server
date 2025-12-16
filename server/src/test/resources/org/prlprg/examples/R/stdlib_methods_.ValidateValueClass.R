#? stdlib
`.ValidateValueClass` <- function (fdef, name, valueClass) 
{
    fbody <- body(fdef)
    body(fdef, envir = environment(fdef)) <- substitute({
        ans <- EXPR
        .valueClassTest(ans, VALUECLASS, FNAME)
    }, list(EXPR = fbody, VALUECLASS = valueClass, FNAME = name))
    fdef
}
