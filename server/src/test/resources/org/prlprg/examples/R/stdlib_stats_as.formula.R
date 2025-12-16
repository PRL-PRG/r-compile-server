#? stdlib
`as.formula` <- function (object, env = parent.frame()) 
{
    if (inherits(object, "formula")) 
        object
    else {
        rval <- formula(object, env = baseenv())
        if (identical(environment(rval), baseenv()) || !missing(env)) 
            environment(rval) <- env
        rval
    }
}
