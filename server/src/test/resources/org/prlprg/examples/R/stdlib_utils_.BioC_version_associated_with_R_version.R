#? stdlib
`.BioC_version_associated_with_R_version` <- function () 
numeric_version(Sys.getenv("R_BIOC_VERSION", .BioC_version_associated_with_R_version_default))
