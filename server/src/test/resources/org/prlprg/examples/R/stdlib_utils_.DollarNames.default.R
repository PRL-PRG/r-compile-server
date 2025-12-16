#? stdlib
`.DollarNames.default` <- function (x, pattern = "") 
{
    if (is.atomic(x) || is.symbol(x)) 
        character()
    else findMatches(pattern, names(x))
}
