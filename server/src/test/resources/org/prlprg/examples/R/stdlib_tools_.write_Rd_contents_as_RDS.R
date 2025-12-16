#? stdlib
`.write_Rd_contents_as_RDS` <- function (contents, outFile) 
{
    saveRDS(contents, file = outFile, compress = TRUE)
}
