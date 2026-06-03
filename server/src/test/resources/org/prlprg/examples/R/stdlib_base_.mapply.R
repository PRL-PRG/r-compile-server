#? stdlib
`.mapply` <- function (FUN, dots, MoreArgs) 
.Internal(mapply(match.fun(FUN), dots, MoreArgs))
