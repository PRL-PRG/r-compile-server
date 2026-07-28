#? stdlib
`stripPathTo` <- function (path, first) 
{
    pattern <- paste0("^.*[/\\]", first, "[/\\]")
    sub(pattern, "", path)
}
