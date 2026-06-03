#? stdlib
`.dotsClass` <- function (...) 
{
    if (missing(..1)) 
        "missing"
    else class(..1)
}
