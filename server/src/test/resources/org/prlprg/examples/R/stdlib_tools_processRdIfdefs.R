#? stdlib
`processRdIfdefs` <- function (blocks, defines) 
{
    recurse <- function(block) {
        if (!(getDynamicFlags(block)["#ifdef"])) 
            return(block)
        if (!is.null(tag <- attr(block, "Rd_tag"))) {
            if (tag %in% c("#ifdef", "#ifndef")) {
                target <- block[[1L]][[1L]]
                target <- psub("[[:blank:][:cntrl:]]*", "", target)
                block <- if ((target %in% defines) == (tag == 
                  "#ifdef")) {
                  flag <- getDynamicFlags(block[[2L]])
                  block <- tagged(block[[2L]], "#expanded")
                  setDynamicFlags(block, flag)
                }
                else tagged(list(tagged(paste(tag, target, "not active"), 
                  "COMMENT", attr(block, "srcref")), tagged("\n", 
                  "TEXT", attr(block, "srcref"))), "#expanded")
            }
        }
        if (is.list(block)) {
            i <- 1L
            flags <- getDynamicFlags(block)
            flags["#ifdef"] <- FALSE
            opts <- attr(block, "Rd_option")
            while (i <= length(block)) {
                newval <- recurse(block[[i]])
                newtag <- attr(newval, "Rd_tag")
                if (!is.null(newtag) && newtag == "#expanded") {
                  all <- seq_along(block)
                  before <- all[all < i]
                  after <- all[all > i]
                  block <- tagged(c(block[before], newval, block[after]), 
                    tag, attr(block, "srcref"))
                }
                else {
                  flags <- flags | getDynamicFlags(newval)
                  block[[i]] <- newval
                  i <- i + 1L
                }
            }
            attr(block, "Rd_option") <- opts
            setDynamicFlags(block, flags)
        }
        else block
    }
    recurse(blocks)
}
