#? stdlib
`.DollarNames.list` <- function (x, pattern = "") 
{
    findMatches(pattern, names(x))
}
