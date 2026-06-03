#? stdlib
`.valid.factor` <- function (object) 
{
    levs <- levels(object)
    if (!is.character(levs)) 
        return("factor levels must be \"character\"")
    if (d <- anyDuplicated(levs)) 
        return(sprintf("duplicated level [%d] in factor", d))
    TRUE
}
