#? stdlib
`.genericName` <- function (f) 
{
    if (is(f, "genericFunction")) 
        f@generic
    else as.character(f)
}
