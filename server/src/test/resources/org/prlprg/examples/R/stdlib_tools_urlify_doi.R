#? stdlib
`urlify_doi` <- function (x) 
{
    urlify(x, reserved = "^/", repeated = TRUE)
}
