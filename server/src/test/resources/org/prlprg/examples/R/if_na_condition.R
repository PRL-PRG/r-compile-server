cond <- function(c) if (c) 1 else 2
cond(TRUE)
cond(FALSE)
tryCatch(cond(NA), error = function(e) conditionMessage(e))
