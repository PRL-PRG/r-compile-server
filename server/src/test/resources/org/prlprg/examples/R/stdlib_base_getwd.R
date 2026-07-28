#? stdlib
`getwd` <- function () 
.Internal(getwd())

# Examples
(WD <- getwd())
if (!is.null(WD)) setwd(WD)

