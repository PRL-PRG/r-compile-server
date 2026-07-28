#? stdlib
`classGeneratorFunction` <- function (classDef, env = topenv(parent.frame())) 
{
    if (is(classDef, "classRepresentation")) {
    }
    else if (is(classDef, "character")) {
        if (is.null(packageSlot(classDef))) 
            classDef <- getClass(classDef, where = env)
        else classDef <- getClass(classDef)
    }
    else stop("argument 'classDef' must be a class definition or the name of a class")
    fun <- function(...) NULL
    body(fun) <- substitute(new(CLASS, ...), list(CLASS = classDef@className))
    environment(fun) <- env
    fun <- as(fun, "classGeneratorFunction")
    fun@className <- classDef@className
    fun@package <- classDef@package
    fun
}
