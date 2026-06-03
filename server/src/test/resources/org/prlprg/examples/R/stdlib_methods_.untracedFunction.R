#? stdlib
`.untracedFunction` <- function (f) 
{
    while (is(f, "traceable")) f <- f@original
    f
}
