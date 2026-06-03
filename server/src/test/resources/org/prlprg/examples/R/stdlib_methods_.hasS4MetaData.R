#? stdlib
`.hasS4MetaData` <- function (env) 
{
    nms <- names(env)
    any(startsWith(nms, ".__C__")) || any(startsWith(nms, ".__T__")) || 
        any(startsWith(nms, ".__A__"))
}
