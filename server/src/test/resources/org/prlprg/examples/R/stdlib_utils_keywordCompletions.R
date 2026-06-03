#? stdlib
`keywordCompletions` <- function (text) 
{
    findExactMatches(sprintf("^%s", makeRegexpSafe(text)), c("NULL", 
        "NA", "TRUE", "FALSE", "Inf", "NaN", "NA_integer_", "NA_real_", 
        "NA_character_", "NA_complex_", "repeat ", "in ", "next ", 
        "break ", "else "))
}
