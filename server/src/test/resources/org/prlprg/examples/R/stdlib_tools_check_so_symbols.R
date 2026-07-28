#? stdlib
`check_so_symbols` <- function (so) 
{
    if (!length(system_ABI)) 
        return()
    tab <- read_symbols_from_object_file(so)
    tab2 <- tab[tab[, "type"] == "U", "name"]
    nms <- tab[, "name"]
    sys <- system_ABI["system"]
    if (!is.null(snh <- so_symbol_names_handlers_db[[sys]])) 
        nms <- snh(nms)
    ind <- so_symbol_names_table[, "osname"] %in% nms
    tab <- so_symbol_names_table[ind, , drop = FALSE]
    attr(tab, "file") <- so
    tab2 <- sub("^_", "", tab2)
    tab2a <- intersect(tab2, nonAPI)
    if ("removeInputHandler" %in% tab2a) 
        tab2a <- setdiff(tab2a, c("R_InputHandlers", "addInputHandler", 
            "removeInputHandler"))
    if (length(tab2a)) 
        attr(tab, "nonAPI") <- tab2a
    tab2b <- setdiff(c("R_registerRoutines", "R_useDynamicSymbols"), 
        tab2)
    if (length(tab2b)) 
        attr(tab, "RegSym") <- tab2b
    class(tab) <- "check_so_symbols"
    tab
}
