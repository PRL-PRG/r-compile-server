#? stdlib
`checkLibAPI` <- function (lpath) 
{
    ldata <- readFileSyms(lpath)
    lsyms <- ldata[ldata$type == "U", ]$name
    lsyms <- inRfuns(lsyms)
    lsyms <- data.frame(name = lsyms, unmapped = unmap(lsyms))
    api <- funAPI()
    api$unmapped <- unmap(api$name)
    api$name <- NULL
    api$loc <- NULL
    val <- merge(lsyms, api, all.x = TRUE)
    val <- val[order(val$apitype), ]
    val$unmapped <- NULL
    rownames(val) <- NULL
    val
}
