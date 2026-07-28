#? stdlib
`.getGlobalFuns` <- function (def) 
{
    if (.hasCodeTools()) 
        codetools::findGlobals(def, merge = FALSE)$functions
    else unique(unlist(lapply(def, all.names)))
}
