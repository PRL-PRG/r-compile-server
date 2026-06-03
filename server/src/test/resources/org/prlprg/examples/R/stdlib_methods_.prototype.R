#? stdlib
`.prototype` <- function (...) 
{
    props <- list(...)
    names <- allNames(props)
    data <- !nzchar(names)
    dataPart <- any(data)
    if (dataPart) {
        if (sum(data) > 1) 
            stop("only one data object (unnamed argument to prototype) allowed")
        obj <- unclass(props[[seq_along(data)[data]]])
        props <- props[!data]
        names <- names[!data]
    }
    else obj <- defaultPrototype()
    for (i in seq_along(names)) slot(obj, names[[i]], FALSE) <- props[[i]]
    new("classPrototypeDef", object = obj, slots = names, dataPart = dataPart)
}
