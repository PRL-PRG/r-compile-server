#? stdlib
`engineMatches` <- function (regengine, vigengine) 
{
    if (!grepl("::", vigengine)) 
        regengine <- sub("^.*::", "", regengine)
    regengine == vigengine
}
