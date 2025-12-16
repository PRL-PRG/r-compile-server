#? stdlib
`.S4inherits` <- function (x, what, which) 
{
    superClasses <- extends(getClass(class(x)))
    if (which) 
        match(what, superClasses, 0L)
    else what %in% superClasses
}
