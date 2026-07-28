#? stdlib
`Rprofmem` <- function (filename = "Rprofmem.out", append = FALSE, threshold = 0) 
{
    if (is.null(filename)) 
        filename <- ""
    invisible(.External(C_Rprofmem, filename, append, as.double(threshold)))
}

# Examples
