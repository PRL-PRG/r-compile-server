#? stdlib
`getGenerics` <- function (where, searchForm = FALSE) 
{
    if (missing(where)) {
        fdefs <- as.list(.genericTable, all.names = TRUE, sorted = TRUE)
        fnames <- mapply(function(nm, obj) {
            if (is.list(obj)) 
                names(obj)
            else nm
        }, names(fdefs), fdefs, SIMPLIFY = FALSE)
        packages <- lapply(fdefs, .packageForGeneric)
        new("ObjectsWithPackage", unlist(fnames), package = unlist(packages))
    }
    else {
        if (is.environment(where)) 
            where <- list(where)
        these <- unlist(lapply(where, objects, all.names = TRUE), 
            use.names = FALSE)
        metaNameUndo(unique(these), prefix = "T", searchForm = searchForm)
    }
}
