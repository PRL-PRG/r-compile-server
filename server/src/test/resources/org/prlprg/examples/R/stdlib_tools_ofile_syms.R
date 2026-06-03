#? stdlib
`ofile_syms` <- function (fname, keep = c("F", "V", "U")) 
{
    stopifnot(isFALSE(.Platform$OS.type == "windows"))
    v <- read_symbols_from_object_file(fname)
    if (is.character(v) && nrow(v) == 0) 
        ofile_syms_od(fname, keep)
    else if (is.null(v)) 
        data.frame(name = character(0), type = character(0))
    else {
        match_type <- function(type) ifelse(type == "T", "F", 
            ifelse(type == "U", "U", "V"))
        val <- as.data.frame(v)[c("name", "type")]
        val <- val[val$type %in% c("U", "B", "D", "T"), ]
        val$type <- match_type(val$type)
        val <- val[val$type %in% keep, ]
        val
    }
}
