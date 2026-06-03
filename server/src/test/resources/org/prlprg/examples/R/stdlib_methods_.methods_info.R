#? stdlib
`.methods_info` <- function (generic = character(), signature = character(), visible = rep(TRUE, 
    length(signature)), from = character()) 
{
    if (length(signature)) 
        signature <- paste0(generic, ",", signature, "-method")
    keep <- !duplicated(signature)
    data.frame(visible = visible[keep], from = from[keep], generic = generic[keep], 
        isS4 = rep(TRUE, sum(keep)), row.names = signature[keep], 
        stringsAsFactors = FALSE)
}
