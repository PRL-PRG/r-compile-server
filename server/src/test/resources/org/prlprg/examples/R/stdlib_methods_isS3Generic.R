#? stdlib
`isS3Generic` <- function (fdef) 
{
    switch(typeof(fdef), special = FALSE, builtin = TRUE, "UseMethod" %in% 
        .getGlobalFuns(fdef))
}
