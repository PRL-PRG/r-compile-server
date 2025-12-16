#? stdlib
`expandDynamicFlags` <- function (block, options = RweaveRdDefaults) 
{
    recurse <- function(block) {
        flags <- getDynamicFlags(block)
        if (flags["\\Sexpr"]) {
            if (identical(tag <- attr(block, "Rd_tag"), "\\Sexpr")) {
                if (is.null(opts <- attr(block, "Rd_option"))) 
                  opts <- ""
                options <- utils:::SweaveParseOptions(opts, options, 
                  RweaveRdOptions)
                flags[options$stage] <- TRUE
            }
            else if (identical(tag, "\\RdOpts")) {
                options <<- utils:::SweaveParseOptions(block, 
                  options, RweaveRdOptions)
            }
            else {
                for (i in seq_along(block)) {
                  block[[i]] <- recurse(block[[i]])
                  flags <- flags | getDynamicFlags(block[[i]])
                }
            }
            block <- setDynamicFlags(block, flags)
        }
        block
    }
    recurse(block)
}
