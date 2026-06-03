#? stdlib
`findExactMatches` <- function (pattern, values) 
{
    grep(pattern, values, value = TRUE)
}
