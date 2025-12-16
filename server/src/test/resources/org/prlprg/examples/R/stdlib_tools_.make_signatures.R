#? stdlib
`.make_signatures` <- function (cls) 
{
    sub("(#ANY)*$", "", unlist(lapply(cls, paste, collapse = "#")))
}
