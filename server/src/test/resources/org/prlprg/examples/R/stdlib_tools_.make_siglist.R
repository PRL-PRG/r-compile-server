#? stdlib
`.make_siglist` <- function (x) 
{
    gsub("#", ",", names(x), fixed = TRUE)
}
