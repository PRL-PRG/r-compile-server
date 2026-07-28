#? stdlib
`cleanRfuns` <- function (val) 
{
    if (any(grepl("^_*Rf_XLENGTH_*$", val)) && any(grepl("^_*XLENGTH_*$", 
        val))) 
        val <- val[!grepl("^_*XLENGTH_*$", val)]
    val[!grepl("tre_|^_*(main|MAIN|start)_*$|yyparse", val)]
}
