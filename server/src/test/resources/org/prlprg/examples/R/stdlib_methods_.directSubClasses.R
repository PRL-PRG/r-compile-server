#? stdlib
`.directSubClasses` <- function (ClassDef) 
{
    if (length(sc <- ClassDef@subclasses)) {
        names(sc)[vapply(sc, function(cc) cc@distance == 1L, 
            NA)]
    }
}
