#? stdlib
`specialOpLocs` <- function (text) 
{
    ge <- sapply(specialOps, function(s) gregexpr(s, text, fixed = TRUE)[[1L]], 
        simplify = FALSE)
    ge <- sapply(ge, tail.default, 1)
    ge <- ge[ge > 0]
}
