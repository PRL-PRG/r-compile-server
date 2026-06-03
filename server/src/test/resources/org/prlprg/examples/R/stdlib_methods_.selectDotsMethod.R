#? stdlib
`.selectDotsMethod` <- function (classes, mtable, allmtable) 
{
    .pasteC <- function(names) paste0("\"", names, "\"", collapse = ", ")
    found <- character()
    distances <- numeric()
    methods <- names(mtable)
    direct <- classes %in% methods
    if (all(direct)) {
        if (length(classes) > 1L) {
            warning(gettextf("multiple direct matches: %s; using the first of these", 
                .pasteC(classes)), domain = NA)
            classes <- classes[1L]
        }
        else if (length(classes) == 0L) 
            return(if (is.na(match("ANY", methods))) NULL else get("ANY", 
                envir = mtable))
        return(mtable[[classes]])
    }
    if (is.null(allmtable)) 
        return(NULL)
    classes <- sort(classes)
    label <- .sigLabel(classes)
    if (exists(label, envir = allmtable, inherits = FALSE)) 
        return(get(label, envir = allmtable))
    for (i in seq_along(classes)) {
        classi <- classes[[i]]
        defi <- getClassDef(classi)
        if (is.null(defi)) 
            next
        extendsi <- defi@contains
        namesi <- c(classi, names(extendsi))
        if (i == 1) 
            namesi <- namesi[namesi %in% methods]
        else {
            namesi <- namesi[namesi %in% found]
            found <- namesi
            if (length(found) == 0L) 
                break
        }
        for (namei in namesi) {
            disti <- if (identical(namei, classi)) 
                0
            else extendsi[[namei]]@distance
            prev <- match(namei, found)
            if (is.na(prev)) {
                found <- c(found, namei)
                distances <- c(distances, disti)
            }
            else if (disti < distances[[prev]]) 
                distances[[prev]] <- disti
        }
    }
    if (length(found) == 0L) 
        method <- if (is.na(match("ANY", methods))) 
            NULL
        else get("ANY", envir = mtable)
    else {
        classes <- found[which.min(distances)]
        if (length(classes) > 1L) {
            warning(gettextf("multiple equivalent inherited matches: %s; using the first of these", 
                .pasteC(classes)), domain = NA)
            classes <- classes[1L]
        }
        method <- get(classes, envir = mtable)
    }
    if (!is.null(method)) 
        method@target <- new("signature", ... = label)
    assign(label, method, allmtable)
    method
}
