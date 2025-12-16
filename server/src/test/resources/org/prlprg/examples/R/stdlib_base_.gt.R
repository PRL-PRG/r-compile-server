#? stdlib
`.gt` <- function (x, i, j) 
{
    xi <- x[i]
    xj <- x[j]
    if (xi == xj) 
        0L
    else if (xi > xj) 
        1L
    else -1L
}
