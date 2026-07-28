#? stdlib
`.mergeAssigns` <- function (previous, new) 
{
    for (what in names(new)) {
        previous[[what]] <- if (is.null(previous[[what]])) 
            new[[what]]
        else paste(previous[[what]], new[[what]], sep = "; ")
    }
    previous
}
