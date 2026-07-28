#? stdlib
`is` <- function (object, class2) 
{
    class1 <- class(object)
    S3Case <- length(class1) > 1L
    if (S3Case) 
        class1 <- class1[[1L]]
    if (missing(class2)) 
        return(extends(class1))
    stopifnot(length(class2) == 1L)
    class1Def <- getClassDef(class1)
    class2Def <- NULL
    if (!is.character(class2)) {
        class2Def <- class2
        class2 <- class2Def@className
    }
    if (is.null(class1Def)) 
        return(inherits(object, class2))
    if (is.null(class2Def)) {
        class2Def <- getClassDef(class2, .classDefEnv(class1Def), 
            packageSlot(class2) %||% getPackageName(topenv(parent.frame())))
    }
    S3Case <- S3Case || (is.object(object) && !isS4(object))
    S3Case <- S3Case && (is.null(class2Def) || class2 %in% .BasicClasses || 
        extends(class2Def, "oldClass"))
    if (S3Case) 
        inherits(object, class2)
    else if (.identC(class1, class2) || .identC(class2, "ANY")) 
        TRUE
    else {
        if (!is.null(contained <- class1Def@contains[[class2]])) 
            contained@simple || contained@test(object)
        else if (is.null(class2Def)) 
            FALSE
        else if (!.identC(class(class2Def), "classRepresentation") && 
            isClassUnion(class2Def)) 
            any(c(class1, names(class1Def@contains)) %in% names(class2Def@subclasses))
        else {
            ext <- class2Def@subclasses[[class1]]
            !is.null(ext) && (ext@simple || ext@test(object))
        }
    }
}

# Examples


