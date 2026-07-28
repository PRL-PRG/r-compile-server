#? stdlib
`.oldCoerceFun` <- function (from, strict = TRUE) 
{
    if (strict) 
        stop(gettextf("explicit coercion of old-style class (%s) is not defined", 
            paste(class(from), collapse = ", ")), domain = NA)
    from
}
