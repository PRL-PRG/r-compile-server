#? stdlib
`.TableMetaPattern` <- function () 
paste0("^[.]", substring(methodsPackageMetaName("T", ""), 2))
