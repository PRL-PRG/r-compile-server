#? stdlib
`.newDirectSuperclass<-` <- function (contains, class2, superclasses2, value) 
{
    superclasses <- names(contains)
    if (length(superclasses2) == 0 || length(superclasses) == 
        0 || all(is.na(match(superclasses2, superclasses)))) 
        contains[[class2]] <- value
    else {
        sq <- seq_along(superclasses)
        before <- (sq[match(superclasses, superclasses2, 0L) > 
            0L])[[1]]
        contains <- c(contains[sq < before], value, contains[sq >= 
            before])
        superclasses <- c(superclasses[sq < before], class2, 
            superclasses[sq >= before])
        names(contains) <- superclasses
    }
    contains
}
