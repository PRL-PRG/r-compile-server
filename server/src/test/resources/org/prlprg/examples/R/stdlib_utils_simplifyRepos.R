#? stdlib
`simplifyRepos` <- function (repos, type) 
{
    tail <- substring(contrib.url("---", type), 4L)
    ind <- regexpr(tail, repos, fixed = TRUE)
    ind <- ifelse(ind > 0L, ind - 1L, nchar(repos, type = "c"))
    substr(repos, 1L, ind)
}
