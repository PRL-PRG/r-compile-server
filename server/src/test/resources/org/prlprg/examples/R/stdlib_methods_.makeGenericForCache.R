#? stdlib
`.makeGenericForCache` <- function (fdef) 
{
    value <- fdef
    ev <- environment(fdef)
    objs <- lapply(as.list(ev, all.names = TRUE), function(obj) {
        if (is.environment(obj)) 
            obj <- .copyEnv(obj)
        obj
    })
    environment(value) <- list2env(objs, hash = TRUE, parent = parent.env(ev))
    value
}
