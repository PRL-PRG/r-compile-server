#? stdlib
`.shlib_objects_symbol_tables` <- function (file = "symbols.rds") 
{
    objects <- commandArgs(trailingOnly = TRUE)
    tables <- lapply(objects, read_symbols_from_object_file)
    names(tables) <- objects
    saveRDS(tables, file = file, version = 2)
}
