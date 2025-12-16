#? stdlib
`.gtn` <- function (x, strictly) 
{
    n <- length(x)
    if (strictly) 
        !all(x[-1L] > x[-n])
    else !all(x[-1L] >= x[-n])
}
