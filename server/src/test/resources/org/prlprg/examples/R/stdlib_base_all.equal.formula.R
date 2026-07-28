#? stdlib
`all.equal.formula` <- function (target, current, ...) 
{
    if (length(target) != length(current)) 
        return(paste0("target, current differ in having response: ", 
            length(target) == 3L, ", ", length(current) == 3L))
    if (!identical(deparse(target), deparse(current))) 
        "formulas differ in contents"
    else TRUE
}
