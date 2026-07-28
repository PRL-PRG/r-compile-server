#? stdlib
`.get_ref_classes` <- function (env) 
{
    env <- as.environment(env)
    cl <- methods::getClasses(env)
    cl <- cl[vapply(cl, function(Class) methods::is(methods::getClass(Class, 
        where = env), "refClassRepresentation"), NA)]
    if (length(cl)) {
        res <- lapply(cl, function(Class) {
            def <- methods::getClass(Class, where = env)
            ff <- def@fieldPrototypes
            accs <- vapply(ff, function(what) methods::is(what, 
                "activeBindingFunction") && !methods::is(what, 
                "defaultBindingFunction"), NA)
            c(as.list(def@refMethods), as.list(ff)[accs])
        })
        names(res) <- cl
        res
    }
    else list()
}
