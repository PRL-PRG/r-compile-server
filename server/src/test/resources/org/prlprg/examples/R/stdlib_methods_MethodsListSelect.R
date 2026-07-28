#? stdlib
`MethodsListSelect` <- function (f, env, mlist = NULL, fEnv = if (is(fdef, "genericFunction")) environment(fdef) else baseenv(), 
    finalDefault = finalDefaultMethod(mlist), evalArgs = TRUE, 
    useInherited = TRUE, fdef = getGeneric(f, where = env), resetAllowed = TRUE) 
{
    .MlistDefunct("MethodsListSelect()")
}
