#? stdlib
`append` <- function (x, values, after = length(x)) 
{
    lengx <- length(x)
    if (!after) 
        c(values, x)
    else if (after >= lengx) 
        c(x, values)
    else c(x[1L:after], values, x[(after + 1L):lengx])
}

# Examples
append(1:5, 0:1, after = 3)

