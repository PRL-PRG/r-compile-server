#? stdlib
`extends` <- function (class1, class2, maybe = TRUE, fullInfo = FALSE) 
{
    if (is.character(class1)) {
        if (length(class1) > 1L) 
            class1 <- class1[[1L]]
        classDef1 <- getClassDef(class1)
    }
    else if (is(class1, "classRepresentation")) {
        classDef1 <- class1
        class1 <- classDef1@className
    }
    else stop("'class1' must be the name of a class or a class definition")
    if (missing(class2)) {
        if (is.null(classDef1)) 
            return(class1)
        ext <- classDef1@contains
        if (!isTRUE(maybe) && length(ext) > 0) {
            noTest <- vapply(ext, function(obj) isTRUE(body(obj@test)), 
                NA)
            ext <- ext[noTest]
        }
        if (fullInfo) {
            ext[[class1]] <- TRUE
            return(ext)
        }
        else return(c(class1, names(ext)))
    }
    value <- NULL
    if (is.character(class2) && length(class2) == 1L) {
        if (.identC(class1[[1L]], class2) || .identC(class2, 
            "ANY")) 
            return(TRUE)
        if (!is.null(classDef1) && class2 %in% names(classDef1@contains)) 
            value <- classDef1@contains[[class2]]
        else classDef2 <- getClassDef(class2)
    }
    else if (is(class2, "classRepresentation")) {
        classDef2 <- class2
        class2 <- class2@className
    }
    else stop("'class2' must be the name of a class or a class definition")
    if (is.null(value)) 
        value <- possibleExtends(class1, class2, classDef1, classDef2)
    if (fullInfo) 
        value
    else if (is.logical(value)) 
        value
    else if (value@simple || isTRUE(body(value@test))) 
        TRUE
    else maybe
}
