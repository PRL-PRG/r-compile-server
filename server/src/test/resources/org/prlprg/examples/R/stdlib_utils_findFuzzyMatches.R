#? stdlib
`findFuzzyMatches` <- function (pattern, values) 
{
    if (!is.null(ffun <- rc.getOption("fuzzy.match.fun"))) {
        return(ffun(pattern, values))
    }
    exact.matches <- findExactMatches(pattern, values)
    if (length(exact.matches) == 0) {
        normalizedPattern <- gsub("(?<!\\^)(?<=.)(\\\\\\.|_)(?!$)", 
            "", pattern, perl = TRUE)
        normalizedPattern <- gsub("(\\\\\\.|_)$", ".", normalizedPattern)
        normalizedValues <- gsub("(?<=.)[._]", "", values, perl = TRUE)
        values[grep(normalizedPattern, normalizedValues, ignore.case = TRUE)]
    }
    else exact.matches
}
