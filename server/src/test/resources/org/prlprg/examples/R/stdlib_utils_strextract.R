#? stdlib
`strextract` <- function (pattern, x, perl = FALSE, useBytes = FALSE) 
{
    m <- regexec(pattern, x, perl = perl, useBytes = useBytes)
    unlist(regmatches(x, m))
}
