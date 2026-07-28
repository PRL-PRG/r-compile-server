#? stdlib
`.S4methodsForGeneric` <- function (generic.function, class) 
{
    if (is.null(getGeneric(generic.function))) 
        return(.methods_info())
    mtable <- ".MTable"
    generic <- generic.function
    table <- get(mtable, environment(getGeneric(generic)))
    packages <- sapply(names(table), function(nm, table) {
        environmentName(environment(table[[nm]]))
    }, table)
    methods <- names(table)
    signatures <- lapply(methods, function(method, classes) {
        m <- table[[method]]
        if (is(m, "MethodDefinition")) 
            setNames(as.vector(m@defined), names(m@defined))
        else NULL
    })
    geom <- vapply(signatures, Negate(is.null), logical(1))
    packages <- packages[geom]
    methods <- methods[geom]
    signatures <- sapply(signatures[geom], function(elt) {
        paste0(as.vector(elt), collapse = ",")
    })
    .methods_info(generic = rep(generic.function, length(packages)), 
        from = packages, signature = signatures)
}
