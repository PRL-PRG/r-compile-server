#? stdlib
`as.data.frame.table` <- function (x, row.names = NULL, ..., responseName = "Freq", stringsAsFactors = TRUE, 
    sep = "", base = list(LETTERS)) 
{
    ex <- quote(data.frame(do.call("expand.grid", c(dimnames(provideDimnames(x, 
        sep = sep, base = base)), KEEP.OUT.ATTRS = FALSE, stringsAsFactors = stringsAsFactors)), 
        Freq = c(x), row.names = row.names))
    names(ex)[3L] <- responseName
    eval(ex)
}
