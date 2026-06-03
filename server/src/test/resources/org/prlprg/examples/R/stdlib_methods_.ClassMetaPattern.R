#? stdlib
`.ClassMetaPattern` <- function () 
paste0("^[.]", substring(methodsPackageMetaName("C", ""), 2))
