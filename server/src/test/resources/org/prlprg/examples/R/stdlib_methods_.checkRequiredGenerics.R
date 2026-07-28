#? stdlib
`.checkRequiredGenerics` <- function (Class, classDef, where) 
{
    supers <- names(classDef@contains)
    allNeeded <- get(".NeedPrimitiveMethods", envir = .methodsNamespace)
    specials <- names(allNeeded)
    needed <- match(specials, supers, 0L) > 0L
    if (any(needed)) {
        generics <- unique(allNeeded[needed])
        packages <- vapply(generics, function(g) {
            def <- getGeneric(g)
            pkg <- def@package
            cacheGenericsMetaData(g, def, TRUE, where, pkg)
            pkg
        }, character(1))
        previous <- if (exists(".requireCachedGenerics", where, 
            inherits = FALSE)) 
            get(".requireCachedGenerics", where)
        else character()
        packages <- c(attr(previous, "package"), packages)
        gg <- c(previous, generics)
        attr(gg, "package") <- packages
        assign(".requireCachedGenerics", gg, where)
    }
}
