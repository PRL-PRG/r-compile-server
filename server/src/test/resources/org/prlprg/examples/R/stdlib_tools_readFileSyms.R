#? stdlib
`readFileSyms` <- function (fpath) 
{
    v <- read_symbols_from_object_file(fpath)
    if (is.null(v)) 
        data.frame(name = character(0), type = character(0))
    else as.data.frame(v)[c("name", "type")]
}
