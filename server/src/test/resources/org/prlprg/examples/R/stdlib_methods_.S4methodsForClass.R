#? stdlib
`.S4methodsForClass` <- function (generic.function, class) 
{
    def <- tryCatch(getClass(class), error = function(...) NULL)
    if (is.null(def)) 
        return(.methods_info())
    classes <- c(class, names(getClass(class)@contains))
    generics <- as.vector(getGenerics(where = search()))
    nms <- setNames(generics, generics)
    packages <- lapply(nms, function(generic) {
        table <- environment(getGeneric(generic))[[".MTable"]]
        lapply(table, function(m) environmentName(environment(m)))
    })
    methods <- lapply(nms, function(generic) {
        table <- environment(getGeneric(generic))[[".MTable"]]
        lapply(table, function(m) {
            if (is(m, "MethodDefinition") && any(m@defined %in% 
                classes)) 
                setNames(as.vector(m@defined), names(m@defined))
        })
    })
    geom <- lapply(methods, function(method) {
        !vapply(method, is.null, logical(1))
    })
    filter <- function(elt, geom) elt[geom]
    packages <- Map(filter, packages, geom)
    methods <- Map(filter, methods, geom)
    non0 <- lengths(methods) != 0L
    packages <- packages[non0]
    methods <- methods[non0]
    geom <- lapply(methods, function(method, classes) {
        sig <- simplify2array(method)
        if (!is.matrix(sig)) 
            sig <- matrix(sig, ncol = length(method))
        idx <- apply(sig, 2, match, classes, 0L)
        if (!is.matrix(idx)) 
            idx <- matrix(idx, ncol = ncol(sig))
        keep <- colSums(idx != 0) != 0
        sidx <- idx[, keep, drop = FALSE]
        shift <- c(0, cumprod(pmax(1, apply(sidx, 1, max)))[-nrow(sidx)])
        score <- colSums(sidx + shift)
        sig0 <- sig <- sig[, keep, drop = FALSE]
        sig0[sidx != 0] <- "*"
        sig0 <- apply(sig0, 2, paste, collapse = "#")
        split(score, sig0) <- lapply(split(score, sig0), function(elt) elt == 
            min(elt))
        score == 1
    }, classes)
    packages <- Map(filter, packages, geom)
    methods <- Map(filter, methods, geom)
    generic <- rep(names(methods), lengths(methods))
    signature <- unlist(lapply(methods, function(method) {
        vapply(method, paste0, character(1L), collapse = ",")
    }), use.names = FALSE)
    package <- unlist(packages, use.names = FALSE)
    .methods_info(generic = generic, signature = signature, from = package)
}
