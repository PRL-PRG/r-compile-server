#? stdlib
`ofile_syms_od` <- function (fpath, keep = c("F", "V", "U")) 
{
    if (Sys.which("objdump") == "") 
        stop("'objdump' is not on the path")
    v <- system(sprintf("objdump -T %s", fpath), intern = TRUE)
    v <- grep("\t", v, value = TRUE)
    name <- sub(".*\t.* (.*$)", "\\1", v)
    type <- sub(".* (.*)\t.*", "\\1", v)
    ttbl <- c(`*UND*` = "U", .text = "F", .bss = "V", .data = "V", 
        w = "w")
    val <- data.frame(name, type = ttbl[match(type, names(ttbl), 
        length(ttbl))])
    val <- val[val$type %in% keep, ]
    clear_rownames(val[order(val$name), ])
}
