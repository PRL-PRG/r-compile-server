#? stdlib
`processRdSexprs` <- function (block, stage, options = RweaveRdDefaults, env = new.env(hash = TRUE, 
    parent = globalenv()), macros) 
{
    recurse <- function(block) {
        if (!any(getDynamicFlags(block)[c("\\Sexpr", stage)])) 
            return(block)
        if (is.list(block)) {
            if (!is.null(tag <- attr(block, "Rd_tag"))) {
                if (tag == "\\Sexpr") 
                  block <- processRdChunk(block, stage, options, 
                    env, macros = macros)
                else if (tag == "\\RdOpts") 
                  options <<- utils:::SweaveParseOptions(block, 
                    options, RweaveRdOptions)
            }
            if (is.list(block)) {
                for (i in seq_along(block)) block[[i]] <- recurse(block[[i]])
            }
        }
        block
    }
    if (!any(getDynamicFlags(block)[c("\\Sexpr", stage)])) 
        return(block)
    expandDynamicFlags(recurse(block), options)
}
